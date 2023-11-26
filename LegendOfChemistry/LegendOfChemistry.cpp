#include "LegendOfChemistry.h"

LegendOfChemistry::LegendOfChemistry(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

LegendOfChemistry::~LegendOfChemistry()
{}

void LegendOfChemistry::on_pushButton_clicked() {
	IonCard a(C), b(C), c(Al);
	Logger.log(debug, QString::number(a == b));
	Logger.log(debug, QString::number(a == c));
}