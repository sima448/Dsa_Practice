#include<iostream>
using namespace std;

int main() {
    int marks;
    cout <<"Enter marks : ";
    cin >> marks;

    if(marks>=90){
        cout<<"Gread A";
    } else if (marks >= 80) {
        cout <<"Gread B";
    } else if (marks >= 60) {
        cout <<"Gread c";
    } else if (marks >= 40) {
        cout <<"Gread D";
    } else if (marks >= 20) {
        cout <<"Gread E";
    } else {
        cout <<"Fail";
    }
    cout << endl;
   return 0;
}