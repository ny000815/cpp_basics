#include <iostream>
#include <cmath>
using namespace std;

bool quadEq(double a, double b, double c, double *px1, double *px2){
    double inRoot = b * b - 4 * a * c;
    if (inRoot < 0) return false;
    
    *px1 =(-b + sqrt(inRoot)) / (2 * a);
    *px2 =(-b - sqrt(inRoot)) / (2 * a);
    return true;
}

