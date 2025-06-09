#pragma once

#include "types.h"

class LinearRegression{
    
    public:
        LinearRegression();

        void fit(Matrix X, Matrix y);
        Vector predict(Matrix X);
        Vector coef();
        double intercept();
    private:
        Vector coef_;
        double intercept_;
    
};
