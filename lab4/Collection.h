#ifndef LAB4_COLLECTION_H
#define LAB4_COLLECTION_H
#include <vector>
#include "Shape.h"
class Collection {
public:
    Collection();
    ~Collection();
    void addShape(Shape* shape);
    void displayShapes();
    double getTotalArea();
    double getTotalPerimeter();
    static bool compareByMass(const Shape* shape1, const Shape* shape2);
    void calculateCenterOfMass();
    void displayMemoryUsage();
    void sortShapesByMass();

private:
    std::vector<Shape*> shapes;
};

#endif
