#include <iostream>

using namespace std;

void print(void* ptr, char type){
  switch(type){
    //if we forget the star symbol, we are going to see the location, not the number   
  case 'i': cout << *((int*)ptr) << endl;
	break;
  case 'c': cout << * ((char*)ptr) << endl;
  }
}

int main(){

  int number = 21;
  char letter = 't';
  print(&number, 'i');
  print(&letter, 'c'); 

}