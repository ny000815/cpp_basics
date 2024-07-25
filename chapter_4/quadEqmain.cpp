#include <iostream>
using namespace std;
#include "chapter4.h"

int main (){
    double a, b, c;
    double x1, x2;
    bool hasSolution;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    hasSolution = quadEq(a, b, c, &x1, &x2);
    if (hasSolution){
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }else{
        cout << "No Solution" << endl;
    }
    return 0;
}

