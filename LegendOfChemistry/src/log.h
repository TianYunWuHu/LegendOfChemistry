﻿#ifndef _LOC_LOG_H_
#define _LOC_LOG_H_

#include <qdebug.h>
#include <qfile.h>
#include <QTime>
#include <qtextstream.h>

enum LogLevel { info, warn, error, debug };

class logger {
private:
	QFile LogFile;

public:
	logger();
	~logger();
	void log(LogLevel level, QString LogString);


};

#endif // !_LOC_LOG_H_