#include<iostream>
using namespace std;

int printHello(){
    cout<<"hello"<<endl;
    return 8;
}
int main(){
     printHello();//hello
     int val = printHello();
     cout<< "val = " << val <<endl;

     
// hello
// hello
// val = 8



     //or
     cout <<printHello() <<endl;
    //  hello
    //  8
    return 0;
}