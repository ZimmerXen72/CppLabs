#ifndef CONSOLEDISPLAY_H
#define CONSOLEDISPLAY_H
#include <iostream>
#include "DisplayInterface.h"
using namespace std;
class ConsoleDisplay : public DisplayInterface {
public:
    void displayCoefficients(double a, double b, double c) override {
        cout << "Coefficients a,b,c: " << a << " " << b << " " << c << endl;
    }

    void displayInf(double a, double b, double c) override {
        cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
        if (a == 0) {
            cout << "Not a quadratic equation" << endl;
        }
    }

    void displayY(double y) override {
        cout << "Y = " << y << endl;
    }

    void displayRoots(double x1, double x2, int numRoots) override {
        if (numRoots == 2) {
            cout << "Root 1: " << x1 << endl;
            cout << "Root 2: " << x2 << endl;
            cout << "2 real roots" << endl;
        } else if (numRoots == 1) {
            cout << "Root: " << x1 << endl;
            cout << "1 real root" << endl;
        } else {
            cout << "Root 1: " << x1 << "-" << x2 << "i" << endl;
            cout << "Root 2: " << x1 << "+" << x2 << "i" << endl;
            cout << "2 complex roots" << endl;
        }
    }

    void displayMaxMin(double maxValue, double minValue) override {
        cout << "MaxValue = " << maxValue << endl;
        cout << "MinValue = " << minValue << endl;
    }
};
#endif
