<h4>Example</h4>

```
#include <iostream>
#include "date.hpp"

int main() {
  std::cout << "Current date: " << date("%Y-%m-%d %H:%M:%S") << "\n";
  std::cout << "Current date plus 1 day: " << date("%Y-%m-%d %H:%M:%S", 86400) << "\n";
  std::cout << "Current date minus 1 day: " << date("%Y-%m-%d %H:%M:%S", -86400) << "\n";
  return 0;
}

```

<h4>Compile</h4>

```
g++ date.cpp -o date
```

<h4>Run</h4>

```
./date
```

<H4>Output</H4>

```
root@localhost:~# ./date  
Current date: 2022-09-20  
Current date plus 1 day: 2022-09-21  
Current date minus 1 day: 2022-09-19  
root@localhost:~#
```
