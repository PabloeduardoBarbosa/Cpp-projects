#include <iostream>

using namespace std;

int numbers(int a, int b){
    return a + b;
}

int main(){
    int(*ptr)(int, int) = numbers;
    cout << ptr(3, 5) << endl;
    cout << numbers(4, 7);
}