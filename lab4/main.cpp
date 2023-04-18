#include <iostream>
#include <vector>
#include "header.h"
using namespace std;
int main() {
    vector<Shape*> figures;
    int choice;
    do {
        cout << "Choose a shape to add:\n1. Circle\n2. Parallelogram\n3. Print all shapes\n4. Compute total area\n5. Compute total perimeter\n6. Move all shapes\n7. Scale all shapes\n8. Compute center of mass\n0. Quit\n";
        cin >> choice;
        // App::start() {
        // try {
        // flow = this->flowFactory->createByUserInput(choice);
        // flow->start();
        // } catch() {...}
        // }
        switch (choice) {
            case 1: {
                double x, y, r, m;
                cout << "Enter x, y, r, m:\n";
                cin >> x >> y >> r >> m;
                figures.push_back(new Circle(x, y, r, m));
                break;
            }
            case 2: {
                double x, y, a, b, m;
                cout << "Enter x, y, a, b, m:\n";
                cin >> x >> y >> a >> b >> m;
                figures.push_back(new Parallelogram(x, y, a, b, m));
                break;
            }
            case 3: {
                for (auto f : figures) {
                    cout << "Area: " << f->getArea() << ", Perimeter: " << f->getPerimeter() << ", Mass: " << f->getMass() << ", Position: (" << f->getPosition().first << ", " << f->getPosition().second << ")\n";
                }
                break;
            }
            case 4: {
                cout << "Total area: " << getTotalArea(figures) << endl;
                break;
            }
            case 5: {
                cout << "Total perimeter: " << getTotalPerimeter(figures) << endl;
                break;
            }
            case 6: {
                //return new MoveFlow();
                double dx, dy;
                cout << "Enter dx, dy:\n";
                cin >> dx >> dy;
                for (auto f : figures) {
                    f->move(dx, dy);
                }
                break;
            }
            case 7: {
                //return new ScaleFactorFLow()
                double factor;
                cout << "Enter scale factor:\n";
                cin >> factor;
                for (auto f : figures) {
                    f->scale(factor);
                }
                break;
            }
            case 8: {
                //return new CenterMassflow()
                auto com = getCenterOfMass(figures);
                cout << "Center of mass: (" << com.first << ", " << com.second << ")\n";
                break;
            }
            case 0:
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    } while (choice != 0);

    for (auto f : figures) {
        delete f;
    }

    return 0;
}
