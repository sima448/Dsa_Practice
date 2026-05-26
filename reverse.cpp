#include<iostream>
using namespace std;

int main(){
    int  n = 345, rev = 0, rem;

    while(n > 0) {
        rem = n % 10;
        rev = rev *10 + rem;
        n = n / 10;
    }
    cout << rev << endl;
    

 return 0;
}