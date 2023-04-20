#include "ClassApp.h"
#include "ClassMatrix.h"
App::App() {
    appName = "MyApp";
    appVersion = 1;
}
void App::run() {
    cout << "Running " << appName << " version " << appVersion << endl;
    Matrix A, B;
    A.setValues();
    B.setValues();
    A.print();
    cout << endl;
    B.print();
    cout << endl;
    Matrix C = A + B;
    cout << "A + B:" << endl;
    C.print();
    Matrix D = A - B;
    cout << "A - B:" << endl;
    D.print();
    Matrix E = A * B;
    cout << "A * B:" << endl;
    E.print();
    Matrix F = A * 2;
    cout << "A * 2:" << endl;
    F.print();
    if (A == B) {
        cout << "A is equal to B" << endl;
    } else {
        cout << "A is not equal to B" << endl;
    }
}
