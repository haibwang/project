/********************************************************************************
** Form generated from reading UI file 'QtClass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCLASS_H
#define UI_QTCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtClassClass
{
public:
    QAction *actionactPopMenu;
    QAction *action_init;
    QAction *action_clear;
    QAction *action_del;
    QAction *action_insert;
    QAction *action_append;
    QWidget *centralWidget;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QCalendarWidget *calendarWidget;
    QLCDNumber *lcdNumber_s;
    QLabel *label;
    QLCDNumber *lcdNumber_m;
    QLCDNumber *lcdNumber_s2;
    QLCDNumber *lcdNumber_m2;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_reset;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_listWidgetInit;
    QToolButton *toolButton_listWidgetClear;
    QWidget *page_3;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_popMenu;
    QLabel *label_2;
    QLineEdit *itemlineEdit;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QtClassClass)
    {
        if (QtClassClass->objectName().isEmpty())
            QtClassClass->setObjectName(QStringLiteral("QtClassClass"));
        QtClassClass->resize(600, 561);
        QtClassClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/QtClass/qt-logo.ico"), QSize(), QIcon::Normal, QIcon::On);
        QtClassClass->setWindowIcon(icon);
        actionactPopMenu = new QAction(QtClassClass);
        actionactPopMenu->setObjectName(QStringLiteral("actionactPopMenu"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/images/textjustify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionactPopMenu->setIcon(icon1);
        action_init = new QAction(QtClassClass);
        action_init->setObjectName(QStringLiteral("action_init"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_init->setIcon(icon2);
        action_clear = new QAction(QtClassClass);
        action_clear->setObjectName(QStringLiteral("action_clear"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_clear->setIcon(icon3);
        action_del = new QAction(QtClassClass);
        action_del->setObjectName(QStringLiteral("action_del"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/images/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_del->setIcon(icon4);
        action_insert = new QAction(QtClassClass);
        action_insert->setObjectName(QStringLiteral("action_insert"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/images/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_insert->setIcon(icon5);
        action_append = new QAction(QtClassClass);
        action_append->setObjectName(QStringLiteral("action_append"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/image/images/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_append->setIcon(icon6);
        centralWidget = new QWidget(QtClassClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(0, 0, 118, 22));
        timeEdit->setCalendarPopup(true);
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(0, 20, 110, 22));
        dateEdit->setCalendarPopup(true);
        dateTimeEdit = new QDateTimeEdit(centralWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(120, 20, 194, 22));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 50, 251, 181));
        calendarWidget->setMouseTracking(true);
        calendarWidget->setTabletTracking(true);
        calendarWidget->setFirstDayOfWeek(Qt::Sunday);
        calendarWidget->setGridVisible(false);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::ISOWeekNumbers);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        lcdNumber_s = new QLCDNumber(centralWidget);
        lcdNumber_s->setObjectName(QStringLiteral("lcdNumber_s"));
        lcdNumber_s->setEnabled(true);
        lcdNumber_s->setGeometry(QRect(460, 0, 101, 111));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(28);
        lcdNumber_s->setFont(font);
        lcdNumber_s->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_s->setAutoFillBackground(false);
        lcdNumber_s->setFrameShape(QFrame::NoFrame);
        lcdNumber_s->setFrameShadow(QFrame::Raised);
        lcdNumber_s->setSmallDecimalPoint(false);
        lcdNumber_s->setDigitCount(2);
        lcdNumber_s->setMode(QLCDNumber::Dec);
        lcdNumber_s->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber_s->setProperty("value", QVariant(0));
        lcdNumber_s->setProperty("intValue", QVariant(0));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 30, 71, 78));
        label->setFont(font);
        lcdNumber_m = new QLCDNumber(centralWidget);
        lcdNumber_m->setObjectName(QStringLiteral("lcdNumber_m"));
        lcdNumber_m->setGeometry(QRect(320, 10, 131, 91));
        lcdNumber_m->setFont(font);
        lcdNumber_m->setFrameShape(QFrame::NoFrame);
        lcdNumber_m->setDigitCount(2);
        lcdNumber_s2 = new QLCDNumber(centralWidget);
        lcdNumber_s2->setObjectName(QStringLiteral("lcdNumber_s2"));
        lcdNumber_s2->setEnabled(true);
        lcdNumber_s2->setGeometry(QRect(410, 0, 101, 111));
        lcdNumber_s2->setFont(font);
        lcdNumber_s2->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_s2->setAutoFillBackground(false);
        lcdNumber_s2->setFrameShape(QFrame::NoFrame);
        lcdNumber_s2->setFrameShadow(QFrame::Raised);
        lcdNumber_s2->setSmallDecimalPoint(false);
        lcdNumber_s2->setDigitCount(2);
        lcdNumber_s2->setMode(QLCDNumber::Dec);
        lcdNumber_s2->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber_s2->setProperty("value", QVariant(0));
        lcdNumber_s2->setProperty("intValue", QVariant(0));
        lcdNumber_m2 = new QLCDNumber(centralWidget);
        lcdNumber_m2->setObjectName(QStringLiteral("lcdNumber_m2"));
        lcdNumber_m2->setEnabled(true);
        lcdNumber_m2->setGeometry(QRect(280, 0, 101, 111));
        lcdNumber_m2->setFont(font);
        lcdNumber_m2->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_m2->setAutoFillBackground(false);
        lcdNumber_m2->setFrameShape(QFrame::NoFrame);
        lcdNumber_m2->setFrameShadow(QFrame::Raised);
        lcdNumber_m2->setSmallDecimalPoint(false);
        lcdNumber_m2->setDigitCount(2);
        lcdNumber_m2->setMode(QLCDNumber::Dec);
        lcdNumber_m2->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber_m2->setProperty("value", QVariant(0));
        lcdNumber_m2->setProperty("intValue", QVariant(0));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 0, 69, 22));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 110, 231, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCheckable(false);

        horizontalLayout->addWidget(pushButton);

        pushButton_pause = new QPushButton(layoutWidget);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setCheckable(false);

        horizontalLayout->addWidget(pushButton_pause);

        pushButton_reset = new QPushButton(layoutWidget);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));

        horizontalLayout->addWidget(pushButton_reset);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(0, 240, 581, 261));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(120, 0));
        toolBox->setMaximumSize(QSize(200, 16777215));
        toolBox->setBaseSize(QSize(80, 0));
        toolBox->setMouseTracking(false);
        toolBox->setTabletTracking(false);
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(false);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 200, 183));
        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 31, 111, 44));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_listWidgetInit = new QToolButton(widget);
        toolButton_listWidgetInit->setObjectName(QStringLiteral("toolButton_listWidgetInit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_listWidgetInit->sizePolicy().hasHeightForWidth());
        toolButton_listWidgetInit->setSizePolicy(sizePolicy);
        toolButton_listWidgetInit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(toolButton_listWidgetInit);

        toolButton_listWidgetClear = new QToolButton(widget);
        toolButton_listWidgetClear->setObjectName(QStringLiteral("toolButton_listWidgetClear"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton_listWidgetClear->sizePolicy().hasHeightForWidth());
        toolButton_listWidgetClear->setSizePolicy(sizePolicy1);
        toolButton_listWidgetClear->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(toolButton_listWidgetClear);

        toolBox->addItem(page, QStringLiteral("Page 1"));
        toolButton_listWidgetClear->raise();
        toolButton_listWidgetInit->raise();
        widget->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        toolBox->addItem(page_3, QString::fromUtf8("\351\241\265"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 200, 183));
        toolBox->addItem(page_2, QStringLiteral("Page 2"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 60, 321, 161));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        widget1 = new QWidget(tab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 20, 341, 22));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_popMenu = new QToolButton(widget1);
        toolButton_popMenu->setObjectName(QStringLiteral("toolButton_popMenu"));
        toolButton_popMenu->setContextMenuPolicy(Qt::NoContextMenu);
        toolButton_popMenu->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButton_popMenu);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        itemlineEdit = new QLineEdit(widget1);
        itemlineEdit->setObjectName(QStringLiteral("itemlineEdit"));

        horizontalLayout_2->addWidget(itemlineEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        splitter->addWidget(tabWidget);
        QtClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtClassClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        QtClassClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtClassClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtClassClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(QtClassClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        QtClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionactPopMenu);
        mainToolBar->addAction(action_init);
        mainToolBar->addAction(action_clear);
        mainToolBar->addAction(action_append);
        mainToolBar->addAction(action_del);
        mainToolBar->addAction(action_insert);

        retranslateUi(QtClassClass);

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QtClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtClassClass)
    {
        QtClassClass->setWindowTitle(QApplication::translate("QtClassClass", "ui\345\255\246\344\271\240", Q_NULLPTR));
        actionactPopMenu->setText(QApplication::translate("QtClassClass", "actPopMenu", Q_NULLPTR));
        action_init->setText(QApplication::translate("QtClassClass", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
        action_clear->setText(QApplication::translate("QtClassClass", "\346\270\205\346\245\232\345\210\227\350\241\250", Q_NULLPTR));
        action_del->setText(QApplication::translate("QtClassClass", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
        action_insert->setText(QApplication::translate("QtClassClass", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
        action_append->setText(QApplication::translate("QtClassClass", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
        label->setText(QApplication::translate("QtClassClass", ":", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("QtClassClass", "\344\270\212\346\265\267", Q_NULLPTR)
         << QApplication::translate("QtClassClass", "\345\214\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("QtClassClass", "\346\235\255\345\267\236", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("QtClassClass", "\345\274\200\345\247\213", Q_NULLPTR));
        pushButton_pause->setText(QApplication::translate("QtClassClass", "\346\232\202\345\201\234", Q_NULLPTR));
        pushButton_reset->setText(QApplication::translate("QtClassClass", "\351\207\215\347\275\256", Q_NULLPTR));
        toolButton_listWidgetInit->setText(QApplication::translate("QtClassClass", "listWidgetInit", Q_NULLPTR));
        toolButton_listWidgetClear->setText(QApplication::translate("QtClassClass", "listWidgetClear", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QtClassClass", "Page 1", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("QtClassClass", "\351\241\265", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("QtClassClass", "Page 2", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QtClassClass", "item", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QtClassClass", "item2", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolButton_popMenu->setText(QApplication::translate("QtClassClass", "toolButton_init", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtClassClass", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", Q_NULLPTR));
        itemlineEdit->setText(QApplication::translate("QtClassClass", "dd", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QtClassClass", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QtClassClass", "Tab 2", Q_NULLPTR));
        menu->setTitle(QApplication::translate("QtClassClass", "\350\217\234\345\215\225", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("QtClassClass", "\345\267\245\345\205\267\346\240\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtClassClass: public Ui_QtClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCLASS_H
