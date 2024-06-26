#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main(){

  std::cout << std::endl;
  
  std::vector<int> myVec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
  for (auto v: myVec) std::cout << v << " ";
  std::cout << std::endl;
  auto newIt= std::remove_if(myVec.begin(), myVec.end(), [](int a){ return a % 2; } );
  for (auto v: myVec) std::cout << v << " ";
  std::cout << std::endl;
  
  myVec.erase(newIt, myVec.end());
  for (auto v: myVec) std::cout << v << " ";
  
  std::cout << "\n\n";
  
  std::string str{"Only for Testing Purpose."};
  std::cout << str << std::endl;
  str.erase(std::remove_if(str.begin(), str.end(), [](char c){ return std::isupper(c);} ), str.end());
  std::cout << str << std::endl;
  
  std::cout << std::endl;

}
