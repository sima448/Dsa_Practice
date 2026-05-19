#include<iostream>
using namespace std;

int main() {
    int marks;
    cout <<"Enter marks : ";
    cin >> marks;

    if(marks>=90){
        cout<<"Gread A";
    } else if (marks >= 60 && marks < 90) {
        cout <<"Gread B";
    } else if (marks >= 20 && marks < 60) {
        cout <<"Gread C";
    } else {
        cout <<"Fail";
    }
    cout << endl;
   return 0;
}