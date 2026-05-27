#include<iostream>
using namespace std;
int main(){
    int n = 4;

    for(int i = 0; i < n; i++) {// outer  i
     char ch = 'A';
        for(int j = 0; j< n; j++){//inner j
           cout << ch << " ";
           ch = ch + 1; // ch --> character he jb hm char ke ander number add krte he to ye (char + int) or (65 +1 == B)aur ye dono  conversion implisite hota he
        }
        cout << endl;
    }

//output
// A B C D 
// A B C D 
// A B C D 
// A B C D 







////////////////////////////

    for(int i = 1; i<=n; i++) { // outer loop 
        for(int j = 1; j<= n; j++){// inner loop
            cout << " " << j;

        }
        cout << endl;
    }





    return 0;
}