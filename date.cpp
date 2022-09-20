#include <iostream>
#include "date.hpp"

int main() {
  std::cout << "Current date: " << date() << "\n";
  std::cout << "Current date + 1day: " << date("%Y-%m-%d", 86400) << "\n";
  std::cout << "Current date - 1day: " << date("%Y-%m-%d", -86400) << "\n";
  return 0;
}
