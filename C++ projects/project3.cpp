#include <iostream>
#include <cmath>

using namespace std;

double power(double base, int exponent){
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent){
    double myPower = power(base, exponent);
    cout << base << " This is the base that you typed " << exponent << " This is the exponent that you typed " << myPower << endl;
}

int main (){
    double base;
    int exponent;
    cout << "Type the base: " << endl;
    cin >> base;
    cout << "Type the exponent" << endl;
    cin >> exponent;
    print_pow(base, exponent);
}