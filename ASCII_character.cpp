#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "Enter the number : ";
    cin>>ch;
    if(ch >= 65 && ch <= 90) {
        cout << "Uppercase";
    } else if (ch >= 97 && ch <= 122) {
        cout << "Lowercase";
    } else {
        cout << "Differant character";
    }
    cout << endl;


    return 0;
}