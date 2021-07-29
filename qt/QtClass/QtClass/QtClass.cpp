#include "QtClass.h"
#include <QTimer>

QtClass::QtClass(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    sec = 0;
    timer.stop();
    timer.setInterval(1000);
	ui.comboBox->addItem("chendu");
	ui.tabWidget->setTabText(0, "hello");
	ui.tabWidget->setTabText(1, "world");

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(on_bt_clicked()));
	QObject::connect(ui.pushButton_pause, SIGNAL(clicked()), this, SLOT(on_bt_pause_clicked()));
	QObject::connect(ui.pushButton_reset, SIGNAL(clicked()), this, SLOT(on_bt_reset_clicked()));
    QObject::connect(&timer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
	QObject::connect(ui.action_init, SIGNAL(triggered()), this, SLOT(on_act_init()));
	QObject::connect(ui.actionactPopMenu, SIGNAL(triggered()), ui.action_init, SLOT(trigger()));
	QObject::connect(ui.action_del, SIGNAL(triggered()), this, SLOT(on_act_del()));
	QObject::connect(ui.action_clear, SIGNAL(triggered()), this, SLOT(on_act_clear()));
	QObject::connect(ui.action_insert, SIGNAL(triggered()), this, SLOT(on_act_insert()));
	QObject::connect(ui.action_append, SIGNAL(triggered()), this, SLOT(on_act_append()));
	QObject::connect(ui.listWidget, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)),
		this, SLOT(on_item_changed(QListWidgetItem*, QListWidgetItem*)));

	//ui.listWidget->setContextMenuPolicy(Qt::CustomContextMenu);//可以通过UI设计器设置该属性
	QObject::connect(ui.listWidget, SIGNAL(customContextMenuRequested(const QPoint &)),this,
		SLOT(on_customContextMenuRequested(const QPoint &)));

	setActionForToolButton();
	setToolButoonPopMenu();
}


void QtClass::on_timer_timeout(void)
{
    sec++;
	ui.lcdNumber_s->display(sec % 10);
	ui.lcdNumber_s2->display(sec % 60 /10);
	ui.lcdNumber_m->display((sec / 60) % 10);
	ui.lcdNumber_m2->display((sec / 600) % 6);
	qDebug("%d", sec);
 }

void QtClass::on_bt_clicked(void)
{

	timer.start();
	ui.pushButton_pause->setEnabled(true);
	ui.pushButton->setEnabled(false);
	
}

void QtClass::on_bt_pause_clicked(void)
{

    timer.stop();
    ui.pushButton->setChecked(false);
    ui.pushButton_pause->setEnabled(false);
    ui.pushButton->setEnabled(true);

}

void QtClass::on_bt_reset_clicked(void)
{
    sec = 0;
	ui.lcdNumber_s->display(sec % 10);
	ui.lcdNumber_s2->display((sec / 10)%10);
	ui.lcdNumber_m->display((sec / 60)%10);
	ui.lcdNumber_m2->display((sec / 60)/10);
	//ui.pushButton->setChecked(false);
    ui.pushButton_pause->setEnabled(true);
}

void QtClass::on_act_init()
{
	QListWidgetItem *item;

	for (int i=0; i < 5; i++)
	{
		QString name = QString::asprintf("iteam_%d", i);
		item = new QListWidgetItem();
		item->setText(name);
		item->setCheckState(Qt::Unchecked);
		item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsDropEnabled|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
		ui.listWidget->addItem(item);
	}
}

void QtClass::on_act_del(void)
{
	QListWidgetItem* item;

	delete ui.listWidget->takeItem(ui.listWidget->currentRow());

}

void QtClass::on_act_clear(void)
{
	
	ui.listWidget->clear();
}


void QtClass::on_act_foreach(void)
{
	QListWidgetItem* item;

	int count=ui.listWidget->count();

	for (int i = 0; i < count; i++)
	{
		delete ui.listWidget->takeItem(ui.listWidget->currentRow());
	}

}

void QtClass::on_act_insert(void)
{
	QListWidgetItem* item;

	item = new QListWidgetItem();
	item->setText("insert item");
	item->setCheckState(Qt::Checked);

	ui.listWidget->insertItem(ui.listWidget->currentRow(), item);
}

void QtClass::on_act_append(void)
{
	QListWidgetItem* item;

	item = new QListWidgetItem();
	item->setText("append item");
	item->setCheckState(Qt::Checked);

	ui.listWidget->addItem(item);
}

void QtClass::on_item_changed(QListWidgetItem *current, QListWidgetItem * previous)
{
	QString str;

	if (current)
	{
		str ="current:"+ current->text();
		if (previous)
		{
			str += "   previous:"+previous->text();
			ui.itemlineEdit->setText(str);
		}
		else
		{
			ui.itemlineEdit->setText(str);
		}
	}
}

void QtClass::on_customContextMenuRequested(const QPoint &pos)
{
	Q_UNUSED(pos);
	QMenu *menu = new QMenu(this);
	menu->addAction(ui.action_clear);
	menu->addAction(ui.action_del);
	menu->addAction(ui.action_insert);
	menu->addAction(ui.action_append);
	menu->exec(QCursor::pos());
	delete menu;
}

void QtClass::setActionForToolButton(void)
{
	ui.toolButton_listWidgetInit->setDefaultAction(ui.action_init);
	ui.toolButton_listWidgetClear->setDefaultAction(ui.action_clear);
}

void QtClass:: setToolButoonPopMenu(void)
{
	ui.toolButton_popMenu->setPopupMode(QToolButton::MenuButtonPopup);//设置按钮的小三角
	ui.toolButton_popMenu->setDefaultAction(ui.actionactPopMenu);//设置非菜单的默认action
	ui.toolButton_popMenu->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	QMenu* menu;
	menu = new QMenu(this);
	menu->addAction(ui.action_insert);
	menu->addAction(ui.action_append);
	menu->addAction(ui.action_del);
	ui.toolButton_popMenu->setMenu(menu);//给小三角添加菜单
}

