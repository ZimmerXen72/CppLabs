#include "ClassConsoleDisplay.h"
#include "iostream"
using namespace std;

void ConsoleDisplay::displayCoefficients(double a, double b, double c) {
    cout << "Coefficients a,b,c: " << a << " " << b << " " << c << endl;
}

void ConsoleDisplay::displayInf(double a, double b, double c) {
    cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
    if (a == 0) {
        cout << "Not a quadratic equation" << endl;
    }
}

void ConsoleDisplay::displayY(double y) {
    cout << "Y = " << y << endl;
}

void ConsoleDisplay::displayRoots(double x1, double x2, int numRoots) {
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

void ConsoleDisplay::displayMaxMin(double maxValue, double minValue) {
    cout << "MaxValue = " << maxValue << endl;
    cout << "MinValue = " << minValue << endl;
}