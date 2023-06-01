#include "App.h"
#include "RingBuffer.h"
#include <algorithm>
#include <iostream>

using namespace std;

App::App() {
    appName = "MyApp";
    appVersion = 1;
}

void App::run() {
    cout << "Running " << appName << " version " << appVersion << endl;

    RingBuffer<int> buffer(5);
    buffer.push_back(11);
    buffer.push_back(2);
    buffer.push_front(0);
    buffer.push_front(55);
    buffer.insert(2, 10);

    for (size_t i = 0; i < buffer.size(); ++i) {
        cout << buffer[i] << " ";
    }
    cout << endl;
    sort(buffer.front(), buffer.back());
    for (size_t i = 0; i < buffer.size(); ++i) {
        cout << buffer[i] << " ";
    }
    cout << endl;
}
