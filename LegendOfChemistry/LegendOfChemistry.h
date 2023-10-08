#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LegendOfChemistry.h"
#include <qprocess.h>

class LegendOfChemistry : public QMainWindow
{
    Q_OBJECT

public:
    LegendOfChemistry(QWidget *parent = nullptr);
    ~LegendOfChemistry();

private slots:
    //槽函数在这里

private:
    Ui::LegendOfChemistryClass ui;
};
