#ifndef _LOC_LOG_H_
#define _LOC_LOG_H_

#include <string>
#include <time.h>

enum LogLevel { info, warn, error };

class logger {
private:
	std::string LogfilePath;

public:
	logger(std::string path);
	void log(LogLevel level,std::string LogString);

};

#endif // !_LOC_LOG_H_