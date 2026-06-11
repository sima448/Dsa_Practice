#include<iostream>
using namespace std;

int main() {

    cout << sizeof(int) << endl; // 4 bytes ==> 32 bits ==> -2^32 to +2^32 - 1
    cout<< sizeof(long int) << endl; // 8bytes 
    cout << sizeof(short int) << endl;//2bytes
    cout << sizeof(long long int) << endl;//8bytes
    cout << sizeof(signed int) << endl;//4bytes
    cout << sizeof(unsigned int) << endl;//4bytes  ==> store only positive value
    return 0;
}