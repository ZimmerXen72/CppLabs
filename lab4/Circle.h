#ifndef LAB4_CIRCLE_H
#define LAB4_CIRCLE_H
#include "Shape.h"

class Circle : public Shape {
private:
    double x, y, r, m;
public:
    Circle(double x, double y, double r, double m);
    double getArea() const override;
    double getPerimeter() const override;
    double getMass() const override;
    pair<double, double> getPosition() const override;
    void move(double dx, double dy) override;
    void scale(double factor) override;
    void print() const override;
    void getCenterOfMass(double& centerX, double& centerY) const override;
    ~Circle() override;
};
#endif
