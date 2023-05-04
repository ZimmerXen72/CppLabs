#ifndef APP_H
#define APP_H
#include <iostream>
using namespace std;
class App {
public:
    App();
    void run();
private:
    string appName;
    int appVersion;
};
#endif