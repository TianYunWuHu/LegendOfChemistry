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
    //�ۺ���������

private:
    Ui::LegendOfChemistryClass ui;
};
