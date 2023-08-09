# gradient-descent-with-linear-regression
Solving linear regression models with gradient descent . 

What is linear regression ?
A machine learning model . It is used on the data set where there is a linear relation (that is if 1 variable increases the other also increases or decreses)
It is done by making a line of bestfit using the data set
We use gradient descent on it

Gradient descent
A way to get the best values for linear regression . It use case though can be used on other models other than linear regression . It is calculated using the deravitive of the gradient and yintercept values of linear regression and finding the minimum value . To get a better grip on this matter use the link : 
https://www.youtube.com/watch?v=sDv4f4s2SB8&t=0s
The link give a very good explanation on gradient descent . 

Explaning the code .
1 - it main has x and y values inside 2 vectors . Also defined a raandom gradient and yintercept value . Learning rate is by how much are we going to increase our m and c values . 

2 - gradientdescent takes in these variables . It calculates residual values .
3 - This is later used to calculate the gradient of sum of residuals with respect to yintercept(c) and gradient(m)
4 - adter all points are taken into account the yintercept and gradient values are updated so we calculate the smallest value . 
5 - After itteration the smallest value is founded and the new value of yint and gradient is written 
6 - after that inside the main function the gradient , y-intercept and ssr() (smallest square risidual) is calculated

NOTE : IM FAIRLY NEW AND THERE ARE ALOT OF MISTAKES . IF ANY FOUND PLEASE FOUND . I TESTED IT ON A SMALL AMOUNT OF DAAT , WHERE IT WORKED FINE . IF ANY PROBLEM FACED PLEASE NOTIFY . THNKU :)
