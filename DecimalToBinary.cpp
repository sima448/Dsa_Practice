#include<iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0;
    int pow = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow = pow*10;
    }
     return ans;//binary form;
}
// int main(){
//     int decNum = 50;
//     cout<<decToBinary(decNum) << endl;
//    return 0;
// }
//answer==> 110010

int main() {

    for(int i = 1; i <=10; i++){
        cout<< decToBinary<<endl;
    }

    return 0;
}
//answer
// 1
// 10
// 11 
// 100
// 101
// 110
// 111
// 1000
// 1001
// 1010