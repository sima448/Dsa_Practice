#include<iostream>
using namespace std;

// int sum(int a, int b) {
//     return a+b; // jo copy huaa he vo yaha aayega
// }


// int main() {
//    int x = 6, y = 4;//eska copy
//    cout<< sum(x, y) << endl;

//     return 0;
// }
// copy of argument is passed to function


int sum(int a, int b){
    a = a +10;//16
    b = b + 5;// 9
    return a+b;
}
int main() {
   int x = 6, y = 4;//copy of argument is passed to function a & b
   cout<< sum(x, y) << endl;
   cout<< x <<endl;
   cout<< y <<endl;

    return 0;
}