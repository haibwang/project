#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QtWidgets/QMessageBox>
#include <QTextStream>
#include "ui_notepad.h"


class notepad : public QMainWindow
{
    Q_OBJECT

public:
    notepad(QWidget *parent = Q_NULLPTR);

private:
    Ui::notepadClass ui;
    QLabel          *curFileLabel;
    QProgressBar    *progressbar;
    QSpinBox        *spinBox;
    QFontComboBox   *fontComboBox;
    QFile           *openFile;
    QString         title;

private slots:
    void on_fontComboBox_currentIndexChanged(const QString &arg);
    void on_spinBox_valueChanged(int value);
    void on_actBold_clicked(bool);
    void on_text_selectChanged(void);
	void on_actOpen_clicked(void);
	void on_actSaveAs_clicked(void);
	void on_actSave_clicked(void);
	void on_actClose_clicked(void);
	void on_actNew_clicked(void);
    void on_text_textChanged(void);
};
