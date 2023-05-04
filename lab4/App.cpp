#include <iostream>
#include "Circle.h"
#include "Parallelogram.h"
#include "Collection.h"
#include "App.h"
App::App() {
    appName = "MyApp";
    appVersion = 1;
}
void App::run() {
    cout << "Running " << appName << " version " << appVersion << endl;
    Circle circle(2.0, 3.0, 3.5, 1.0);
    Parallelogram parallelogram(0.0, 0.0, 1.0, 3.0, 1.5);
    Collection collection;
    collection.addShape(&circle);
    collection.addShape(&parallelogram);
    cout << "Shapes in the collection:" << endl;
    collection.displayShapes();
    collection.calculateCenterOfMass();
    collection.sortShapesByMass();
    cout << "\nShapes sorted by mass:" << endl;
    collection.displayShapes();
    std::cout << "\nTotal area of shapes: " << collection.getTotalArea() << std::endl;
}

