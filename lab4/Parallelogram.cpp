#include "Parallelogram.h"

Parallelogram::Parallelogram(double x, double y, double a, double b, double m) : x(x), y(y), a(a), b(b), m(m) {}

double Parallelogram::getArea() const {
    return a * b;
}

double Parallelogram::getPerimeter() const {
    return 2 * (a + b);
}

double Parallelogram::getMass() const {
    return m;
}

pair<double, double> Parallelogram::getPosition() const {
    return {x, y};
}

void Parallelogram::move(double dx, double dy) {
    x += dx;
    y += dy;
}

void Parallelogram::scale(double factor) {
    a *= factor;
    b *= factor;
    m *= factor;
}

void Parallelogram::getCenterOfMass(double& centerX, double& centerY) const {
    centerX = x + a / 2;
    centerY = y + b / 2;
}

void Parallelogram::print() const {
    std::cout << "Parallelogram at (" << x << ", " << y << "), sides " << a << ", " << b << ", mass " << m << std::endl;
}

Parallelogram::~Parallelogram()=default;