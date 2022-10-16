#include <iostream>

using namespace std;

int getMax(int numbers[], int size){
    int max = numbers[0];
    for(int i = 0; i < size; i ++){
        if(numbers[i] > max)
        max = numbers[i];
    }
    return max;
}

int getMin(int numbers[], int size){
    int min = numbers[0];
    for(int i = 0; i < size; i++){
        if(numbers[i] < min)
        min = numbers[i];
    }
    return min;
}

void getBoth(int numbers[], int size, int *max, int *min){
    for(int i = 0; i < size; i++){
        if(numbers[i] > *max)
        *max = numbers[i];
        if(numbers[i] < *min)
        *min = numbers[i];
    }
}

int main(){
    int numbers[5] = {32, 4, 23, 6, 3};
    
    int max = numbers[0];
    int min = numbers[0];

    getBoth(numbers, 5, &max, &min);

    cout << "The max value is: " << max << endl;
    cout << "The min value is: " << min << endl;
}