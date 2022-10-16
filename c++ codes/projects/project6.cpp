#include <iostream>

using namespace std;

int main(){
    
    int size;
    cout << "Insert the size that you want: " << endl;
    cin >> size;
    int* myArray = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Array [" << i << "]" << endl;
        cin >> myArray[i];
    }
    for(int i = 0; i < size; i++){
        cout << myArray[i] << "  ";
    }
}