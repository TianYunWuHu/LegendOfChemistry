#ifndef _LOC_LOG_H_
#define _LOC_LOG_H_

#include <string>
#include <time.h>
#include <qdebug.h>
#include <qfile.h>
#include <qtextstream.h>

enum LogLevel { info, warn, error, debug };

class logger {
private:
	QFile LogFile;

public:
	logger();
	~logger();
	void log(LogLevel level, std::string LogString);
	static std::string logger::GetTime();

};

#endif // !_LOC_LOG_H_