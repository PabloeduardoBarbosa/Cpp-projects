#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    string name;
    int age;

    cout << "Tell me your name: " << endl;
    cin >> name;

    cout << "Now tell me your age: " << endl;
    cin >> age;

    if(name == "Pablo" && age == 18){
        cout << "Wow, that's the real good one!" << endl;
    }else{
        cout << "Well, ive hoped more!" << endl;
    }
    return 0;
}