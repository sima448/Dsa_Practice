#include<iostream>
using namespace std;
int main(){
    int i, n = 20;
    int sum = 0;
    for(i = 1; i <= n; i++){
        if(i%3 == 0){
            sum += i;
        }
    }
    cout << "All Sum of Divisible by 3 = " << sum << endl;

    return 0;
}
