#include "App.h"
#include "Func.h"
using namespace std;
App::App() {
    appName = "MyApp";
    appVersion = 1;
}
void App::run() {
    cout << "Running " << appName << " version " << appVersion << endl;
    double a,b,c,x;
    cin >> a >> b >> c >> x;
    QuadraticEquation qe(a, b, c, x);
    qe.Coefficients();
    qe.Inf();
    qe.Y();
    qe.Roots();
    qe.MaxMin();
}
