#ifndef CLASSAPP_H
#define CLASSAPP_H
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