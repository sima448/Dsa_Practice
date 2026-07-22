#include <iostream>
#include <vector>
using namespace std;

int main() {
   //vector<int> vec;//first way //Segmentation fault (core dumped)
   //vector<int> vec = {1, 2, 3}; //second way  // 1
   vector<int> vec(5, 0);//third way // 0 0 0 0 0
   cout << vec[0] << endl;
      cout << vec[1] << endl;
      cout << vec[2] << endl;
      cout << vec[3] << endl;
      cout << vec[4] << endl;

    return 0;
}