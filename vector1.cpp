#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> vec = {'a', 'b', 'c', 'd', 'e'};
  
   //if you want to print size of vector
   cout << "size = " << vec.size() <<endl;

   for(char val : vec) {//for each loop
    cout << val << endl;
   }
  
    return 0;
}