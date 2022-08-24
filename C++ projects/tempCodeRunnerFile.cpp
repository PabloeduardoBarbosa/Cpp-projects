#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Type your age: " << endl;
    int age;
    cin >> age;
    if(age <= 12){
        cout << "You are just too young for me!" << endl;
    }else if(age <= 25){
        cout << "Hummm... you maybe interesting!" << endl;
    }else{
        cout << "Nah... you are old!" << endl;
    }
    return 0;
}