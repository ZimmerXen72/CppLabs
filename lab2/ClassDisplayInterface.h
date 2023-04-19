#ifndef CLASSDISPLAYINTERFACE_H
#define CLASSDISPLAYINTERFACE_H
using namespace std;

class DisplayInterface {
public:
    virtual void displayCoefficients(double a, double b, double c) = 0;
    virtual void displayInf(double a, double b, double c) = 0;
    virtual void displayY(double y) = 0;
    virtual void displayRoots(double x1, double x2, int numRoots) = 0;
    virtual void displayMaxMin(double maxValue, double minValue) = 0;
};
#endif
