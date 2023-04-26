#include "App.h"
#include "Utils.h"
#include "Exceptions.h"
App::App() {
    appName = "MyApp";
    appVersion = 1;
}
void App::run() {
    cout << "Running " << appName << " version " << appVersion << endl;
    try {
        float a,b;
        cin >> a >> b;
        float min = MyUtils::FindMin(a, b);
        cout << "Minimum: " << min << endl;
    } catch (const MyExceptions::FindMinException& e) {
        cerr << "Caught exception: " << e.what() << endl;
    }
}