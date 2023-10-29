#include "log.h"

//����־�ļ�
logger::logger() {
	LogFile.open("latest.log", std::ios::out | std::ios::trunc);
}

//�ر���־�ļ�
logger::~logger() {
	LogFile.close();
}

//��ȡ��ǰϵͳʱ��
std::string logger::GetTime() {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	return ("[" + ((ltm->tm_hour < 10) ? ("0" + std::to_string(ltm->tm_hour)) : std::to_string(ltm->tm_hour))
		+ ":" + ((ltm->tm_min < 10) ? ("0" + std::to_string(ltm->tm_min)) : std::to_string(ltm->tm_min))
		+ ":" + ((ltm->tm_sec < 10) ? ("0" + std::to_string(ltm->tm_sec)) : std::to_string(ltm->tm_sec))
		+ "]");
}

//���������̨����־�ļ�
void logger::log(LogLevel level, std::string LogString) {
	QString time = QString::fromStdString(logger::GetTime());
	QString	QLogString = QString::fromStdString(LogString);
	switch (level)
	{
	case info:
		qDebug() << time << "[Info]" << QLogString << "\n";
		LogFile << logger::GetTime() << "[Info]" << LogString << "\n";
		break;
	case warn:
		qDebug() << time << "[Warn]" << QLogString << "\n";
		LogFile << logger::GetTime() << "[Warn]" << LogString << "\n";
		break;
	case error:
		qDebug() << time << "[Error]" << QLogString << "\n";
		LogFile << logger::GetTime() << "[Error]" << LogString << "\n";
		break;
	case debug:
		qDebug() << time << "[Debug]" << QLogString << "\n";
		LogFile << logger::GetTime() << "[Debug]" << LogString << "\n";
		break;
	}
}