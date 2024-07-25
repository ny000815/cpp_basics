#include <iostream>
using namespace std;

int main (){
    const int DATA_NUM = 10;
    int scores[DATA_NUM] = {2, 30, 80, 99, 100, 73, 88, 73, 62, 9};
    int flag = -1;
    int selected_score;

    cout << "Enter the score you're looking for." << endl;
    cin >> selected_score;

    for (int i = 0; i < DATA_NUM; i++){
        if (scores[i] == selected_score){
            cout << "It's found in " << i + 1 << "th in the score list." << endl;
            return 0;
        }
    }
    cout << "It's not found.'" << endl;
    return 0;
}
