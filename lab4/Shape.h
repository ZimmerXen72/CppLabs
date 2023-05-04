#ifndef LAB4_SHAPE_H
#define LAB4_SHAPE_H
#include <iostream>
using namespace std;
class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual double getMass() const = 0;
    virtual pair<double, double> getPosition() const = 0;
    virtual void move(double dx, double dy) = 0;
    virtual void scale(double factor) = 0;
    virtual void getCenterOfMass(double& centerX, double& centerY) const = 0;
    virtual void print() const = 0;
    virtual ~Shape() = default;
};
#endif
