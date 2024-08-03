#include <iostream>
using namespace std;
#include "Counter.h"
#include "CounterEx.h"

int main(){
    CounterEx cnt;

    cnt.upVal();
    cout << "Counter value is " << cnt.getVal() << endl;
    cnt.downVal();
    cout << "Counter value is " << cnt.getVal() << endl;
    return 0;
}
