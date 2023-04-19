#include "ClassQuadraticEquation.h"
#include <math.h>
#include <iostream>
using namespace std;
QuadraticEquation::QuadraticEquation(double A, double B, double C, double X) {
    a = A;
    b = B;
    c = C;
    x = X;
    display = new ConsoleDisplay();
}

QuadraticEquation::QuadraticEquation(const QuadraticEquation& QE) {
    a = QE.a;
    b = QE.b;
    c = QE.c;
    x = QE.x;
    display = new ConsoleDisplay();
}

void QuadraticEquation::Coefficients() {
    display->displayCoefficients(a, b, c);
}

void QuadraticEquation::Inf() {
    display->displayInf(a, b, c);
}

double QuadraticEquation::Y() {
    double y = a * pow(x, 2) + b * x + c;
    display->displayY(y);
    return y;
}

double QuadraticEquation::Roots() {
    double x1, x2, D, Re, Im;
    if (a == 0) {
        cout << "Wrong Input Data" << endl;
        return -1;
    } else {
        D = b * b - 4 * a * c;
        if (D > 0) {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            display->displayRoots(x1, x2, 2);
            return 2;
        } else if (D == 0) {
            x1 = -b / (2 * a);
            display->displayRoots(x1, x1, 1);
            return 1;
        } else {
            Re = -b / (2 * a);
            Im = sqrt(-D) / (2 * a);
            display->displayRoots(Re, Im, 0);
            return 0;
        }
    }
}

void QuadraticEquation::MaxMin() {
    double maxValue, minValue;
    if (a > 0) {
        maxValue = a * pow(x, 2) + b * x + c;
        minValue = a * pow(-x, 2) + b * (-x) + c;
    } else {
        maxValue = a * pow(-x, 2) + b * (-x) + c;
        minValue = a * pow(x, 2) + b * x + c;
    }
    display->displayMaxMin(maxValue, minValue);
}

QuadraticEquation::~QuadraticEquation() {
    delete display;
}