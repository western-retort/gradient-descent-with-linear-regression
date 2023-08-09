#include <iostream>
#include <vector>

double ssr(const std::vector<double>& x, const std::vector<double>& y, double gradient, double yint) {
    double sum = 0.0;
    for (size_t i = 0; i < x.size(); ++i) {
        double predicted_height = (gradient * x[i]) + yint;
        double residual = predicted_height - y[i];
        sum += residual * residual;
    }
    return sum;
}

void gradientDescent(std::vector<double>& x, std::vector<double>& y, double& gradient, double& yint, double learning_rate, int iterations) {
    for (int iter = 0; iter < iterations; ++iter) {
        double gradient_gradient = 0.0;
        double yint_gradient = 0.0;

        for (size_t i = 0; i < x.size(); ++i) {
            double predicted_height = (gradient * x[i]) + yint;
            double residual = predicted_height - y[i];

            gradient_gradient += 2 * residual * x[i]; //derivative of the residual with respect to the value of the gradient parameter (m).
            yint_gradient += 2 * residual; //derivative of the residual with respect to y-intercept
        }

        gradient -= learning_rate * gradient_gradient; //changes m value so that it gives the lowest cost function
        yint -= learning_rate * yint_gradient; //changes y-intercept to give smallest cost value
    }
}

int main() {
    std::vector<double> x = {4, 4, 5, 5, 7, 7, 8, 9, 10, 11, 12};
    std::vector<double> y = {5800, 6300, 5700, 4500, 4500, 4200, 4100, 3100, 2100, 2500, 2200};
    double gradient = 2.0;
    double yint = -10.0;
    double learning_rate = 0.001;
    int iterations = 10000;

    gradientDescent(x, y, gradient, yint, learning_rate, iterations);

    std::cout << "Optimized gradient: " << gradient << std::endl;
    std::cout << "Optimized yint: " << yint << std::endl;
    std::cout << "Minimum sum of squared residuals: " << ssr(x, y, gradient, yint) << std::endl;

    return 0;
}
