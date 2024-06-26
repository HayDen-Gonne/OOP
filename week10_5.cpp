#include <algorithm>
#include <iostream>
#include <vector>

int main(){

  std::cout << std::boolalpha << std::endl;

  auto even= [](int i){ return i%2;};

  std::vector<int> myVec{1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << "std::any_of(myVec.begin(), myVec.end(), even): " << std::any_of(myVec.begin(), myVec.end(), even) << std::endl;
  std::cout << "std::all_of(myVec.begin(), myVec.end(), even): " << std::all_of(myVec.begin(), myVec.end(), even) << std::endl;
  std::cout << "std::none_of(myVec.begin(), myVec.end(), even: " << std::none_of(myVec.begin(), myVec.end(), even) << std::endl;
  
 std::cout << std::endl;
 
 // true, false, false

}
