#include <algorithm>
//#include <chrono>
#include <iostream>
#include <vector>
#include <numeric> 
#include "LinearRegression.h"

using namespace std;


LinearRegression::LinearRegression()
{
    
}

void LinearRegression::fit(Matrix X, Matrix y)
{

    
    X.conservativeResize(X.rows(), X.cols()+1);
    for (int i = 0; i < X.rows(); i++){
        X(i, X.cols()-1) = 1.0;
    }

    Matrix M = X.transpose() * X;
    Matrix b = X.transpose() * y;

    Vector x = M.ldlt().solve(b);

    coef_ = x.head(X.cols()-1);
    intercept_ = x[X.cols()-1];
    
}

Vector LinearRegression::predict(Matrix X)
{  
    Vector res = X * coef_;

    for(int i = 0; i < X.rows(); i++){
        res(i) = res(i) + intercept_;
    }

    return res;
}

Vector LinearRegression::coef(){
    return coef_;
}

double LinearRegression::intercept(){
    return intercept_;
}
