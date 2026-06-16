#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = -15;
    

    for(int i = 0; i < size; i++) {
        if(arr[i] == smallest) {
            cout << "Min Value Index Number = " << i <<endl;
            break;
        } 
    } 

    return 0;
}