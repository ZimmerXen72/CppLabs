#include "Circle.h"
#include <cmath>
#include <iostream>

Circle::Circle(double x, double y, double r, double m) : x(x), y(y), r(r), m(m) {}

double Circle::getArea() const {
    return M_PI * r * r;
}

double Circle::getPerimeter() const {
    return 2 * M_PI * r;
}

double Circle::getMass() const {
    return m;
}

pair<double, double> Circle::getPosition() const {
    return {x, y};
}

void Circle::move(double dx, double dy) {
    x += dx;
    y += dy;
}

void Circle::scale(double factor) {
    r *= factor;
    m *= factor;
}

void Circle::print() const {
    std::cout << "Circle at (" << x << ", " << y << "), radius " << r << ", mass " << m << std::endl;
}

void Circle::getCenterOfMass(double& centerX, double& centerY) const {
    centerX = x;
    centerY = y;
}

Circle::~Circle() = default;