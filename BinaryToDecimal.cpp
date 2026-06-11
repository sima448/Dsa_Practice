#include<iostream>
using namespace std;

int BinaryToDecimal(int binNum) {
  int ans = 0;
  int pow = 1;

  while(binNum > 0) {
      int rem = binNum % 10;
      ans +=  rem*pow;
      binNum /= 10;
      pow = pow*2;

  }
  return ans; //decimal

}

int main(){
      int binNum = 101010;
      cout <<BinaryToDecimal(binNum) <<endl;

    return 0;
}