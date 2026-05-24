#include<iostream>
using namespace std;
int main(){
     int i ,n;
     cout << "Enter the Number : ";
     cin>>n;

     int fact = 1;
     //int current;
     for(i = 1; i<=n; i++) {
      fact = fact * i;
     }

    cout << "Factor of number = " << fact << endl;
    return 0;
}