#include <QtWidgets/QMainWindow>
#include "ui_LegendOfChemistry.h"
#include "src/log.h"
#include "src/card.h"
#include <qprocess.h>

class LegendOfChemistry : public QMainWindow
{
	Q_OBJECT

public:
	LegendOfChemistry(QWidget* parent = nullptr);
	~LegendOfChemistry();

private slots:
	//槽函数在这里
	void on_pushButton_clicked();

private:
	Ui::LegendOfChemistryClass ui;
	//日志对象
	logger Logger;

};

