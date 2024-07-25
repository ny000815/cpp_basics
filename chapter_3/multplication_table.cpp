#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 20; i++){
        cout << "table of " << i << "\t";
        for (int j = 1; j <= 9; j++){
            cout << j * i<< "\t";
        }
        cout << endl;
    }
    return 0;
}

