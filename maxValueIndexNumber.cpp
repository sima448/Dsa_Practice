#include<iostream>
using namespace std;


int main() {
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int maxIndex = 0;

    for(int i = 0; i<size; i++) {
         if(arr[i] > arr[maxIndex]){
             maxIndex = i;
        }
    }
    cout << "Max Value Index Number = " << arr[maxIndex] << endl;
    cout << "Index = " <<maxIndex << endl;


    return 0;
}
