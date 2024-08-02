#include <iostream>
#include <string>
using namespace std;
#include "Account.h"

int main(){
    Account act("1234567", 88888);

    cout << "id is " << act.getId << endl;
    cout << "balance is" << act.getBalance << endl;
}
