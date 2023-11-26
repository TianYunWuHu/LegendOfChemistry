#include "LegendOfChemistry.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
#include "src/log.h"

logger Logger;

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
	LegendOfChemistry w;
	Logger.log(info, "我终于修好了");
	Logger.log(info, "log");
	w.show();
	return a.exec();
}
