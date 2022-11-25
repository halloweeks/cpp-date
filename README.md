<h4>Example</h4>

```
#include <iostream>
#include "date.hpp"

int main() {
  std::cout << "Current date: " << date() << "\n";
  std::cout << "Current date plus 1 day: " << date("%Y-%m-%d", 86400) << "\n";
  std::cout << "Current date minus 1 day: " << date("%Y-%m-%d", -86400) << "\n";
  return 0;
}

```

<H4>Output</H4>

```
root@localhost:~# ./date  
Current date: 2022-09-20  
Current date plus 1 day: 2022-09-21  
Current date minus 1 day: 2022-09-19  
root@localhost:~#
```
