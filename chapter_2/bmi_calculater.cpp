#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double STD_BMI = 22;
    double height = 0, weight = 0, bmi = 0, stdweight;
    
    cout << "Please enter your hegiht(cm)" << endl;
    cin >> height;
    
    cout << "Please enter your weight(kg)" << endl;
    cin >> weight;

    height /= 100;
    bmi = weight / height / height;
    stdweight = 22 * height * height;

    cout << "Your BMI is " << fixed << setprecision(1) << bmi << endl;
    cout << "Your standard weight is " << stdweight << endl;
    return 0;
}
