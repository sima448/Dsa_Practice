#include<iostream>
using namespace std;


int x = 10;// global variable  ==> it es access anywhere

void fun() {
    int y = 20; //local variable ==> it is access within scope
    cout<<"Inside fun()" <<endl;
    cout<< "Global x = " << x <<endl;
    cout<< "Local y = " << y <<endl;
}

int main() {
      int z = 30;// local variable;
      cout<<"Inside main()" <<endl;
      cout<< "Global x = " << x <<endl;
      cout<< "Local z = " << z <<endl;
     cout<<endl;
     fun();
      return 0;
}
// Inside main()
// Global x = 10
// Local z = 30

// Inside fun()
// Global x = 10
// Local y = 20