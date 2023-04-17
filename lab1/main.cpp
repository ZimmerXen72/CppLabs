#include <iostream>
#include <iomanip>
#include "Vars.h"
#include <vector>
using namespace std;

int main(){
    int x, y, a;
    double x1, x2;
    complex<double> Comp;
    cin >> x >> y;
    Var(&x,&y);
    cout << x << ' ' << y << endl;
    Var(x,y);
    cout << x << ' ' << y << endl;

    cin >> x1;
    Var1(&x1);
    cout << x1 << endl;
    cin >> x1;
    Var1(x1);
    cout << x1 << endl;

    cin >> Comp >> x2;
    Var2(&Comp,&x2);
    cout << Comp << endl;
    Var2(Comp, x2);
    cout << Comp << endl;

    int n=3;
    vector<int> A[n], B[n];
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++) {
            cin >> a;
            A[i].push_back(a);
            B[i].push_back(0);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (A[i][j]) << " ";
        }
        cout << endl;
    }
    Var3(n, A, B);
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (B[i][j]) << " ";
        }
        cout << endl;
    }
}