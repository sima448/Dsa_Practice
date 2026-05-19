#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the Charactor : ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "Lowercase";
    }
    else if(ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase";
    } else {
        cout << "character does not match";
    }
    cout << endl;
    return 0;

}