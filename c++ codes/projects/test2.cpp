#include <iostream>

using namespace std;

void getName(string *nameGet){
    cout << *nameGet << endl;
}

void getAge(int *ageGet){
    cout << *ageGet << endl;
}

void getBoth(void *ptr, char type){
    switch(type){
        case 'i': cout << *((int*)ptr) << endl;
        case 'c': cout << *((string*)ptr) << endl;
    }
}

int main(){
    string name = "Pablo";
    int age = 18;
    getBoth(&name, 'c');
}