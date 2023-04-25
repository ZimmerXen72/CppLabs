#include "App.h"
#include "Functions.h"
App::App() {
    appName = "MyApp";
    appVersion = 1;
}
void App::run() {
    cout << "Running " << appName << " version " << appVersion << endl;
    int arr[] = {1, 2, 3, 4, 5};
    bool result = MyFunctions::any_of(arr, arr + 5, [](int x) { return x % 2 == 0; });
    if (result) {
        std::cout << "At least one element is even.\n";
    } else {
        std::cout << "No element is even.\n";
    }

    int arr2[] = {1, 2, 3, 4, 5};
    bool result2 = MyFunctions::is_sorted(arr2, arr2 + 5, [](int x, int y) { return x < y; });
    if (result2) {
        std::cout << "The array is sorted in ascending order.\n";
    } else {
        std::cout << "The array is not sorted in ascending order.\n";
    }

    std::string str = "abcdcba";
    bool result3 = MyFunctions::is_palindrome(str.begin(), str.end());
    if (result3) {
        std::cout << "The string is a palindrome.\n";
    } else {
        std::cout << "The string is not a palindrome.\n";
    }
}