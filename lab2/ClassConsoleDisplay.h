#ifndef CLASSCONSOLEDISPLAY_H
#define CLASSCONSOLEDISPLAY_H

#include "ClassDisplayInterface.h"

class ConsoleDisplay : public DisplayInterface {
public:
    void displayCoefficients(double a, double b, double c) override;
    void displayInf(double a, double b, double c) override;
    void displayY(double y) override;
    void displayRoots(double x1, double x2, int numRoots) override;
    void displayMaxMin(double maxValue, double minValue) override;
};

#endif