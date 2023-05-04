#include "Collection.h"
#include <iostream>
#include <algorithm>

Collection::Collection() = default;

Collection::~Collection() {
    for (Shape* shape : shapes) {
        delete shape;
    }
}

void Collection::addShape(Shape* shape) {
    shapes.push_back(shape);
}

void Collection::displayShapes() {
    std::cout << "List of figures:" << std::endl;
    for (Shape* shape : shapes) {
        shape->print();
    }
}

double Collection::getTotalArea() {
    double totalArea = 0.0;
    for (Shape* shape : shapes) {
        totalArea += shape->getArea();
    }
    return totalArea;
}

double Collection::getTotalPerimeter() {
    double totalPerimeter = 0.0;
    for (Shape* shape : shapes) {
        totalPerimeter += shape->getPerimeter();
    }
    return totalPerimeter;
}

bool Collection::compareByMass(const Shape* shape1, const Shape* shape2) {
    return shape1->getMass() < shape2->getMass();
}

void Collection::calculateCenterOfMass() {
    double totalMass = 0.0;
    double centerX = 0.0;
    double centerY = 0.0;
    for (Shape* shape : shapes) {
        double mass = shape->getMass();
        double centerXShape, centerYShape;
        shape->getCenterOfMass(centerXShape, centerYShape);
        totalMass += mass;
        centerX += centerXShape * mass;
        centerY += centerYShape * mass;
    }

    if (totalMass > 0.0) {
        centerX /= totalMass;
        centerY /= totalMass;
        std::cout << "Centre of mass: (" << centerX << ", " << centerY << ")" << std::endl;
    } else {
        std::cout << "Cannot be calculated" << std::endl;
    }
}

void Collection::displayMemoryUsage() {
    int totalMemory = 0;
    for (Shape* shape : shapes) {
        totalMemory += sizeof(*shape);
    }
    std::cout << "Memory Usage: " << totalMemory << " bytes" << std::endl;
}
void Collection::sortShapesByMass() {
    std::sort(shapes.begin(), shapes.end(), compareByMass);
}