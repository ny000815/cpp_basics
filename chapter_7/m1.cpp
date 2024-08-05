#include <iostream>
#include <string>
using namespace std;
#include "point.h"

int main(){
    Point p1(3, 5);
    Point p2(2, 4);
    Point p3, p4;
    p3 = p1 + p2;
    p4 = p1 - p2;

    cout << "p1 : " << p1.getX() << ", " << p1.getY() << endl;
    cout << "p2 : " << p2.getX() << ", " << p2.getY() << endl;
    cout << "p3 : " << p3.getX() << ", " << p3.getY() << endl;
    cout << "p4 : " << p4.getX() << ", " << p4.getY() << endl;

}
