<h4>Example</h4>

Create ``main.cpp`` file



```
#include <iostream>
#include <time.h>

time_t time() {
	long int epoch = 0;
	time(&epoch);
	return epoch;
}

char *date(const char *format, long int epoch) {//const char *format = "%Y-%m-%d", long long add_second = 0) {
	time_t rawtime = epoch;
	tm* timeinfo;
	static char buffer [80];
	// time(&rawtime);
	// rawtime = rawtime + add_second;
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, format, timeinfo);
	return buffer;
}

int main() {
	time_t epoch = time();
	std::cout << "Unix Epoch: " << epoch << "\n";
	std::cout << "Date: " << date("%Y-%m-%d %H:%M:%S", epoch) << "\n";
	return 0;
}

```

<h4>Compile</h4>

```
g++ main.cpp -o main
```

<h4>Run</h4>

```
./main
```

<H4>Output</H4>

```
root@localhost:~# ./main
Unix Epoch: 1674843662
Date: 2023-01-27 23:51:02
root@localhost:~#
```
