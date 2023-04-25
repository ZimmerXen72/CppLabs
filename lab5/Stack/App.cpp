#include "App.h"
#include "Stack.h"
#include "Exceptions.h"

App::App() {
    appName = "MyApp";
    appVersion = 1;
}

void App::run() {
    int N;
    cout << "Running " << appName << " version " << appVersion << endl;
    cin >> N;
    try {
        MyStack::Stack<5, int> stackInt;
        for (int i = 1; i <= N; ++i) {
            int a;
            string c;
            cin >> c >> a;
            if (c == "push") {
            stackInt.push(a);
            }
            else {
                int value = stackInt.pop();
                cout << value << endl;
            }
        }
    }
    catch (const MyExceptions::StackOverflowException& ex) {
        cout << ex.what() << endl;
    }
    catch (const MyExceptions::StackEmptyException& ex) {
        cout << ex.what() << endl;
    }
}