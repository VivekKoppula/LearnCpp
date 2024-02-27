#include <iostream>
#include <string>
#include <limits>

int main()
{
  // Three way comparison operator : spaceship operator <=>

  int n1{5};
  int n2{5};
  int n3{0};

  auto result = (n1 <=> n2);

  std::cout << std::boolalpha;
  std::cout << "n1 > n2 : " << ((n1 <=> n2) > 0) << std::endl; // true
  std::cout << "n1 >= n2 : " << ((n1 <=> n2) >= 0) << std::endl;
  std::cout << "n1 == n2 : " << ((n1 <=> n2) == 0) << std::endl;
  std::cout << "n1 < n2 : " << ((n1 <=> n2) < 0) << std::endl;
  std::cout << "n1 <= n2 : " << ((n1 <=> n2) <= 0) << std::endl;

  return 0;
}