#include "ClassApp.h"
#include "ClassArray.h"
App::App() {
    appName = "MyApp";
    appVersion = 1;
}
void App::run() {
    cout << "Running " << appName << " version " << appVersion << endl;
    Array A,B;
    A.inputArrayData();
    B.inputArrayData();
    A.print();
    cout << endl;
    B.print();
    cout << endl;
    Array C=A+B;
    cout << "A + B:" << endl;
    C.print();
    cout << endl;
    bool Compare_length=A<B;
    cout << "length(A) < length(B)" << endl;
    if (Compare_length) {
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}