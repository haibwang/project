#include "widget.h"
#include "qdialog.h"

#include <iostream>

widget::widget(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QObject::connect(ui.checkBox_bold, SIGNAL(clicked(bool)), this, SLOT(on_checkBox_clicked(bool)));
    QObject::connect(ui.radioButton_black, SIGNAL(clicked(bool)), this, SLOT(on_radioBox_clicked()));
    QObject::connect(ui.radioButton_red, SIGNAL(clicked(bool)), this, SLOT(on_radioBox_clicked()));
    QObject::connect(ui.radioButton_blue, SIGNAL(clicked(bool)), this, SLOT(on_radioBox_clicked()));
}


void widget::on_checkBox_clicked(bool checked)
{
    QFont font = ui.textEdit->font();

    font.setBold(checked);

    ui.textEdit->setFont(font);
}

void widget::on_radioBox_clicked(void)
{
    QPalette pale = ui.textEdit->palette();

    if (ui.radioButton_red->isChecked())
    {
        pale.setColor(QPalette::Text, Qt::red);
    }
    else if (ui.radioButton_blue->isChecked())
    {
        pale.setColor(QPalette::Text, Qt::blue);
    }
    else
    {
        pale.setColor(QPalette::Text, Qt::black);
    }

    ui.textEdit->setPalette(pale);
}


