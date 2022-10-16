#include <iostream>
#include <memory>

using namespace std;

int main(){
    unique_ptr<int>unPtr1 = make_unique<int>(32);
    cout << *u  nPtr1;
}