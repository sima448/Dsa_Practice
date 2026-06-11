#include<iostream>
using namespace std;



int reverseAnIntegerN(int num){
  int rev = 0;

    while(num > 0){
    int rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;
     
    }
    return rev;
}


int main() {
      int num = 25;
      cout<< reverseAnIntegerN(num) <<endl;
       cout << reverseAnIntegerN(123) << endl;
       



    return 0;
}