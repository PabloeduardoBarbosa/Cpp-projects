#include <iostream>

using namespace std;

void printName(string* namePrint){
    cout << *namePrint << endl;
}

void printAge(int* agePrint){
    cout << *agePrint << endl;
}

void print(void* ptr, char type){
    switch(type){
        case 'i': cout << *((int*)ptr) << endl; 
            break;
        case 's': cout << *((string*)ptr) << endl;
            break;
    }
}

int main(){
    int age = 18;
    string name = "Pablo";
    // printName(&name);
    // printAge(&age);
    print(&age, 'i');
    print(&name, 's');
}