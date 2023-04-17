#include "Vars.h"
#include <cmath>
#include <complex>
using namespace std;
void Var(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}
void Var(int* pa, int* pb){
    int temp=*pa;
    *pa=*pb;
    *pb=temp;
}

void Var1(double& a){
    a=round(a);
}
void Var1(double* pa){
    *pa=round(*pa);
}

void Var2(complex<double>& Comp, double& b){
    Comp=Comp*b;
}
void Var2(complex<double>* Comp, double* b){
    *Comp=*b*(*Comp);
}

void Var3(int n, vector<int>* A, vector<int>* B){
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j) {
            B[i][j]=A[j][i];
        }
    }
}