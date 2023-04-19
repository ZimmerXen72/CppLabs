#ifndef CLASSQUADRATICEQUATION_H
#define CLASSQUADRATICEQUATION_H
#include "ClassDisplayInterface.h"
#include "ClassConsoleDisplay.h"

class QuadraticEquation {
private:
    double a, b, c, x;
    DisplayInterface* display;
public:
    QuadraticEquation(double A, double B, double C, double X);
    QuadraticEquation(const QuadraticEquation& QE);
    void Coefficients();
    void Inf();
    double Y();
    double Roots();
    void MaxMin();
    ~QuadraticEquation();
};
#endif