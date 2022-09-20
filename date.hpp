#ifndef DATE_H
#define DATE_H 1

#include <string.h>
#include <time.h>
#include <unistd.h>

std::string date(const char *format = "%Y-%m-%d", long long add_second = 0) {
  time_t rawtime;
  tm* timeinfo;
	char buffer [80];
	time(&rawtime);
	rawtime = rawtime + add_second;
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, format, timeinfo);
	return buffer;
}

#endif
