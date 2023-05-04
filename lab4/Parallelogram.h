#ifndef LAB4_PARALLELOGRAM_H
#define LAB4_PARALLELOGRAM_H
#include "Shape.h"

class Parallelogram : public Shape {
private:
    double x, y, a, b, m;
public:
    Parallelogram(double x, double y, double a, double b, double m);

    double getArea() const override;
    double getPerimeter() const override;
    double getMass() const override;
    pair<double, double> getPosition() const override;
    void move(double dx, double dy) override;
    void scale(double factor) override;
    void getCenterOfMass(double& centerX, double& centerY) const override;
    void print() const override;
    ~Parallelogram() override;
};
#endif
