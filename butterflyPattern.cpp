#include<iostream>
using namespace std;
int main() {
   int n = 4;
    //upper half
    for(int i = 0; i<n; i++){
        //top-left stars
        for(int j = 0; j<=i; j++){
            cout<< "*";
        }
       // top space
        
            for(int j = 0; j< 2 * (n-i-1); j++){
              cout<<" ";
            }
        
        //top-Right stars
        for(int j = 0; j<=i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
    //bottom half 
    for(int i = n-1; i >= 0; i--) {
        //bottom-left stars
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        //space bottom
      for(int j = 0; j < 2 * (n-i-1); j++) {
        cout<<" ";

      }

      //bottom-right stars
       for(int j = 0; j<=i; j++) {
        cout<<"*";
       }
       cout<<endl;
    }



    return 0;
}
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

///or

// *------*
// **----**
// ***--***
// ********
// ********
// ***--***
// **----**
// *------*