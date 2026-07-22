#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> vec;
  
   //create empty vector
   cout << "size = " << vec.size() <<endl;//size = 0 
   //push_back  karna ho to
  vec.push_back(6);
   vec.push_back(26);
    vec.push_back(46);
  cout << "after push back size = " << vec.size() <<endl;
  vec.pop_back();//46 pop


  cout << vec.front() << endl;//6
  cout << vec.back() << endl;//26
  cout << vec.at(1) << endl;//26


//    for(int val : vec) {//for each loop
//     cout << val << endl;
//    }
  
    return 0;
}