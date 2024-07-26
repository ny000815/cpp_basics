#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main (){
    HealthChecker yamada("Tanaka", 175, 75);

    cout << yamada.getBmi() << endl;
    return 0;
}
