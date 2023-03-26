#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual double getMass() const = 0;
    virtual pair<double, double> getPosition() const = 0;
    virtual void move(double dx, double dy) = 0;
    virtual void scale(double factor) = 0;
    virtual ~Shape() {};
};

class Circle : public Shape {
private:
    double x, y, r, m;
public:
    Circle(double x_, double y_, double r_, double m_) : x(x_), y(y_), r(r_), m(m_) {}

    double getArea() const override {
        return M_PI * r * r;
    }

    double getPerimeter() const override {
        return 2 * M_PI * r;
    }

    double getMass() const override {
        return m;
    }

    pair<double, double> getPosition() const override {
        return {x, y};
    }

    void move(double dx, double dy) override {
        x += dx;
        y += dy;
    }

    void scale(double factor) override {
        r *= factor;
        m *= factor;
    }

    ~Circle() override {};
};

class Parallelogram : public Shape {
private:
    double x, y, a, b, m;
public:
    Parallelogram(double x_, double y_, double a_, double b_, double m_) : x(x_), y(y_), a(a_), b(b_), m(m_) {}

    double getArea() const override {
        return a * b;
    }

    double getPerimeter() const override {
        return 2 * (a + b);
    }

    double getMass() const override {
        return m;
    }

    pair<double, double> getPosition() const override {
        return {x, y};
    }

    void move(double dx, double dy) override {
        x += dx;
        y += dy;
    }

    void scale(double factor) override {
        a *= factor;
        b *= factor;
        m *= factor;
    }

    ~Parallelogram() override {};
};
double getTotalArea(const vector<Shape*>& figures) {
    double totalArea = 0;
    for (auto f : figures) {
        totalArea += f->getArea();
    }
    return totalArea;
}

double getTotalPerimeter(const vector<Shape*>& figures) {
    double totalPerimeter = 0;
    for (auto f : figures) {
        totalPerimeter += f->getPerimeter();
    }
    return totalPerimeter;
}

pair<double, double> getCenterOfMass(const vector<Shape*>& figures) {
    double totalMass = 0;
    double totalX = 0, totalY = 0;
    for (auto f : figures) {
        double mass = f->getMass();
        totalMass += mass;
        auto pos = f->getPosition();
        totalX += mass * pos.first;
        totalY += mass * pos.second;
    }
    return {totalX / totalMass, totalY / totalMass};
}

bool compareByMass(const Shape* a, const Shape* b) {
    return a->getMass() < b->getMass();
}

#endif