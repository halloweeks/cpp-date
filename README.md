# cpp-date

<p>Example</p>

```
#include <iostream>
#include "date.hpp"

int main() {
  std::cout << "Current date: " << date() << "\n";
  std::cout << "Current date + 1day: " << date("%Y-%m-%d", 86400) << "\n";
  std::cout << "Current date - 1day: " << date("%Y-%m-%d", -86400) << "\n";
  return 0;
}

```

<H4>Output</H4>

<Code>
root@localhost:~# ./date  
Current date: 2022-09-20  
Current date + 1day: 2022-09-21  
Current date - 1day: 2022-09-19  
root@localhost:~#
</Code>
