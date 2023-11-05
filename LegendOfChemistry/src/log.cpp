#include "log.h"

//打开日志文件
logger::logger() {
	LogFile.setFileName("last.log");
	LogFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
}

//关闭日志文件
logger::~logger() {
	LogFile.close();
}

//获取当前系统时间
std::string logger::GetTime() {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	return ("[" + ((ltm->tm_hour < 10) ? ("0" + std::to_string(ltm->tm_hour)) : std::to_string(ltm->tm_hour))
		+ ":" + ((ltm->tm_min < 10) ? ("0" + std::to_string(ltm->tm_min)) : std::to_string(ltm->tm_min))
		+ ":" + ((ltm->tm_sec < 10) ? ("0" + std::to_string(ltm->tm_sec)) : std::to_string(ltm->tm_sec))
		+ "]");
}

//输出到调试台和日志文件
void logger::log(LogLevel level, std::string logString) {
	QString time = QString::fromStdString(logger::GetTime());
	QString LogString = QString::fromStdString(logString);
	QTextStream logFile(&LogFile);
	switch (level)
	{
	case info:
		qDebug() << time + "[Info]" + LogString;
		logFile << time << "[Info]" << LogString << endl;
		break;
	case warn:
		qDebug() << time + "[Warn]" + LogString;
		logFile << time << "[Warn]" << LogString << endl;
		break;
	case error:
		qDebug() << time + "[Error]" + LogString;
		logFile << time << "[Error]" << LogString << endl;
		break;
	case debug:
		qDebug() << time + "[Debug]" + LogString;
		logFile << time << "[Debug]" << LogString << endl;
		break;
	}
}