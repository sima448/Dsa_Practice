#include<iostream>
using namespace std;
/*
int main() {
    int i, n;
    cout << "Enter Number : ";
    cin>>n;
    bool isPrime = true;//1
    for(i = 2; i <= n-1; i++) {
        if(n%i == 0) {//non prime
            isPrime = false;//0
            break;
        }
    
    }


    if(isPrime == true) {
        cout << "prime no.\n";

    } else{
        cout << "Non prime no.\n";
    }
    // in this code check all factore of each number 
    return 0;
}*/

 int main() {
    int i, n;
    cout << "Enter Number : ";
    cin>>n;
    bool isPrime = true;//1
    for(i = 2; i * i <= n; i++) {
        if(n%i == 0) {//non prime
            isPrime = false;//0
            break;
        }
    
    }


    if(isPrime == true) {
        cout << "prime no.\n";

    } else{
        cout << "Non prime no.\n";
    }
    // in this code check all factore of each number 
    return 0;
}
