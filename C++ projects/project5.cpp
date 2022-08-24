#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    string name = "Pablo";
    string guess;
    cout << "Try to guess my name" << endl;
    cin >> guess;

    if(guess == name){
        cout << name << " This is my name" << endl;
    }else{
        cout << guess << " This is not my name" << endl;
    }
    return 0;
}