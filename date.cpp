#include <iostream>
#include "date.hpp"

int main() {
  std::cout << "Current date: " << date("%Y-%m-%d %H:%M:%S") << "\n";
  std::cout << "Current date plus 1 day: " << date("%Y-%m-%d %H:%M:%S", 86400) << "\n";
  std::cout << "Current date minus 1 day: " << date("%Y-%m-%d %H:%M:%S", -86400) << "\n";
  return 0;
}
