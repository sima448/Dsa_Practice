#include<iostream>
using namespace std;
int main() {
int oddSum = 0;
int n = 20;
  for(int i = 1; i <= n; i++) {
    if(i%2 != 0){
   cout << i << " ";
        oddSum = oddSum +i;
      }
     }
    cout << "oddSum = " << oddSum << endl;
    
return 0;
}