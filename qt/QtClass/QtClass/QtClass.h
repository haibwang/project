#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QListWidget>
#include <QMenu>
#include <QPoint>
#include <QTimer>
#include "ui_QtClass.h"

class QtClass : public QMainWindow
{
    Q_OBJECT

public:
    QtClass(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtClassClass ui;
    qint32 sec;
    QTimer timer;

    void setActionForToolButton(void);
    void setToolButoonPopMenu(void);

private slots:
    void on_timer_timeout(void);
    void on_bt_clicked(void);
    void on_bt_pause_clicked(void);
	void on_bt_reset_clicked(void);
    void on_act_init(void);
	void on_act_del(void);
	void on_act_clear(void);
	void on_act_foreach(void);
	void on_act_insert(void);
	void on_act_append(void);
    void on_item_changed(QListWidgetItem* current, QListWidgetItem* previous);
    void on_customContextMenuRequested(const QPoint &pos);
   
};
