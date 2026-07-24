#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;


    // vec.push_back(9);
    // vec.push_back(82);
    // vec.push_back(98);

    // cout << vec.size()<< endl;//3
    // cout << vec.capacity() <<endl;//4





    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(82);
    vec.push_back(98);

    cout << vec.size()<< endl;//5
    cout << vec.capacity() <<endl;//8

    return 0;
}