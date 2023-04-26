#include "App.h"
#include "Functions.h"
using namespace std;
App::App() {
    appName = "MyApp";
    appVersion = 1;
}
void App::run() {
    cout << "Running " << appName << " version " << appVersion << endl;
    vector<int> vec = {1, 2, 3, 2, 1};

    bool anyEven = MyFunctions::any_of(vec.begin(), vec.end(), MyFunctions::is_even_ptr);
    cout << "Even element exists: " << (anyEven ? "true" : "false") << endl;

    bool nonDecreasing = MyFunctions::is_sorted(vec.begin(), vec.end(), MyFunctions::non_decreasing_ptr);
    cout << "Vector is non-decreasing: " << (nonDecreasing ? "true" : "false") << endl;

    bool palindrome = MyFunctions::is_palindrome(vec.begin(), vec.end());
    cout << "Vector is a palindrome: " << (palindrome ? "true" : "false") << endl;
}