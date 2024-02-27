#include <iostream>
#include <string>
#include <limits>

int main()
{

  std::string m1{"Hello"};
  std::string m2{"World"}; // World comes after Hello in alphabetical order so it's
                           // considered to be greater.

  // Three way comparison operator : spaceship operator <=>

  int n1{5};
  int n2{5};
  // int n3{0};

  auto result = (n1 <=> n2);

  std::cout << std::boolalpha;
  std::cout << "n1 > n2 : " << ((n1 <=> n2) > 0) << std::endl; // true
  std::cout << "n1 >= n2 : " << ((n1 <=> n2) >= 0) << std::endl;
  std::cout << "n1 == n2 : " << ((n1 <=> n2) == 0) << std::endl;
  std::cout << "n1 < n2 : " << ((n1 <=> n2) < 0) << std::endl;
  std::cout << "n1 <= n2 : " << ((n1 <=> n2) <= 0) << std::endl;

  // Strong ordering

  int n4{5};
  int n5{5};

  std::cout << std::boolalpha;
  std::cout << "n4 > n5 : " << (n4 > n5) << std::endl;   // false
  std::cout << "n4 == n5 : " << (n4 == n5) << std::endl; // true :  Absolute equality
  std::cout << "n4 < n5 : " << (n4 < n5) << std::endl;   // false

  return 0;
}