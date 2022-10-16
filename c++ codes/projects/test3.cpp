#include <iostream>

using namespace std;

void numbers(){
    int* ptr = new int[12];
    ptr[3] = 24; 
    cout << "Example = " << ptr[3] << endl;
    delete[] ptr;
}

int main(){
    numbers();
}