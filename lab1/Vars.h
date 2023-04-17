#ifndef UNTITLED1_VARS_H
#define UNTITLED1_VARS_H
#include <complex>
#include <vector>
using namespace std;
void Var(int&, int&);
void Var(int*, int*);

void Var1(double&);
void Var1(double*);

void Var2(complex<double>&, double&);
void Var2(complex<double>*, double*);

void Var3(int n, vector<int>*, vector<int>*);
#endif //UNTITLED1_VARS_H