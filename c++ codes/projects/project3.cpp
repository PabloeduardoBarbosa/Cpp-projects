#include <iostream>

using namespace std;

int main(){
    int numbers[5];
    for(int i = 0; i <= 5; i++){
        cout <<  "Numbers: " << endl;
        cin >> numbers[i];
    }
    for(int i = 0; i <= 5; i++){
        cout << *(numbers+i) << "  ";
    }
}