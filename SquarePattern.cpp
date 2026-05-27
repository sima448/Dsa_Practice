#include<iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1; i<=n; i++) { // outer loop 
        for(int j = 1; j<= n; j++){// inner loop
            cout << " " << j;

        }
        cout << endl;
    }
    //output
    //  1 2 3 4
    //  1 2 3 4
    //  1 2 3 4
    //  1 2 3 4





/*
   int n = 4;
    for(int i = 0; i<=n-1; i++) { // outer loop 
        for(int j = 0; j<= n-1; j++){// inner loop
            cout << " " << "*";

        }
        cout << endl;
    }
 //output
//    * * * *
//    * * * *
//    * * * *
//    * * * *
*/











    return 0;
}