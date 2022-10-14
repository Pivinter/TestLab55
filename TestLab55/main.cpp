#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;
double F(double x)
{
    double F;
    F = sin(x) - cos(x);
    return F;
}
void main()
{
    double a, b, eps;
    int m,x ;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "eps = "; cin >> eps;
    if (eps<0,a < b,F(a) * F(b) < 0) {
        if (F(a) < 0 && F(b)>0) {
            cout << "True" << endl;
            m = (a + b) / 2.0;
                while (fabs(F(m)) > eps) {
                        if (F(m) == 0) {
                            x = m;
                        }
                        else {
                            if (F(a) * F(m) < 0) {
                                cout << a << "<=" << "x" << "<=" << m << endl ;
                                break;
                            }
                            else {
                                cout << m << "<=" << "x" << "<=" << b << endl;
                                break;
                            }
                        }
                }
        }
    }
    else {
        cout << "false"<< endl;
    }
}
