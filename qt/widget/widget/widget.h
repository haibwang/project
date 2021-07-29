#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_widget.h"

class widget : public QMainWindow
{
    Q_OBJECT

public:
    widget(QWidget *parent = Q_NULLPTR);

private slots:
    void on_checkBox_clicked(bool checked);
    void on_radioBox_clicked(void);


private:
    Ui::widgetClass ui;
};
