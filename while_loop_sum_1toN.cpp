#include<iostream>
using namespace std;
/*
int main() {
    int n = 50;
    int sum = 0;
    int i = 1;
    while(i <= n){
        sum = sum + i;
        i++;
    }
    cout << "sum = " << sum <<endl;
    return 0;
}
*/
//use break kye word
int main() {
    int n = 50;
    int sum = 0;
    int i = 1;
    while(i <= n){
        sum = sum + i;
        i++;//10
        if(i == 5){
            break;
        }
        //i++;//15
    }
    cout << "sum = " << sum <<endl;
    return 0;
}
