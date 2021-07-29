/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_underline;
    QCheckBox *checkBox_italic;
    QCheckBox *checkBox_bold;
    QFontComboBox *fontComboBox;
    QComboBox *fontSizeComboBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_black;
    QRadioButton *radioButton_red;
    QRadioButton *radioButton_blue;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_ok;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_cancle;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *widgetClass)
    {
        if (widgetClass->objectName().isEmpty())
            widgetClass->setObjectName(QStringLiteral("widgetClass"));
        widgetClass->resize(600, 576);
        centralWidget = new QWidget(widgetClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 410, 539, 31));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 441, 381));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_underline = new QCheckBox(groupBox);
        checkBox_underline->setObjectName(QStringLiteral("checkBox_underline"));
        checkBox_underline->setChecked(true);

        verticalLayout->addWidget(checkBox_underline);

        checkBox_italic = new QCheckBox(groupBox);
        checkBox_italic->setObjectName(QStringLiteral("checkBox_italic"));

        verticalLayout->addWidget(checkBox_italic);

        checkBox_bold = new QCheckBox(groupBox);
        checkBox_bold->setObjectName(QStringLiteral("checkBox_bold"));
        checkBox_bold->setChecked(true);

        verticalLayout->addWidget(checkBox_bold);


        horizontalLayout_4->addLayout(verticalLayout);

        fontComboBox = new QFontComboBox(groupBox);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout_4->addWidget(fontComboBox, 0, Qt::AlignTop);

        fontSizeComboBox = new QComboBox(groupBox);
        fontSizeComboBox->setObjectName(QStringLiteral("fontSizeComboBox"));

        horizontalLayout_4->addWidget(fontSizeComboBox, 0, Qt::AlignTop);


        verticalLayout_2->addWidget(groupBox, 0, Qt::AlignTop);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_black = new QRadioButton(groupBox_2);
        radioButton_black->setObjectName(QStringLiteral("radioButton_black"));

        horizontalLayout->addWidget(radioButton_black);

        radioButton_red = new QRadioButton(groupBox_2);
        radioButton_red->setObjectName(QStringLiteral("radioButton_red"));

        horizontalLayout->addWidget(radioButton_red);

        radioButton_blue = new QRadioButton(groupBox_2);
        radioButton_blue->setObjectName(QStringLiteral("radioButton_blue"));
        radioButton_blue->setChecked(true);

        horizontalLayout->addWidget(radioButton_blue);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_2);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(14);
        textEdit->setFont(font);

        verticalLayout_2->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_ok = new QPushButton(widget);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        horizontalLayout_2->addWidget(pushButton_ok);

        horizontalSpacer_2 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_cancle = new QPushButton(widget);
        pushButton_cancle->setObjectName(QStringLiteral("pushButton_cancle"));

        horizontalLayout_2->addWidget(pushButton_cancle);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_exit = new QPushButton(widget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        horizontalLayout_2->addWidget(pushButton_exit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        widgetClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(widgetClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        widgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(widgetClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        widgetClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(widgetClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        widgetClass->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(pushButton_ok);
#endif // QT_NO_SHORTCUT

        retranslateUi(widgetClass);
        QObject::connect(checkBox_underline, SIGNAL(clicked(bool)), textEdit, SLOT(setFontUnderline(bool)));
        QObject::connect(checkBox_italic, SIGNAL(clicked(bool)), textEdit, SLOT(setFontItalic(bool)));
        QObject::connect(pushButton_ok, SIGNAL(clicked()), textEdit, SLOT(selectAll()));
        QObject::connect(pushButton_cancle, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(pushButton_exit, SIGNAL(clicked()), widgetClass, SLOT(close()));

        QMetaObject::connectSlotsByName(widgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *widgetClass)
    {
        widgetClass->setWindowTitle(QApplication::translate("widgetClass", "widget", Q_NULLPTR));
        label->setText(QApplication::translate("widgetClass", "\344\274\231\344\274\264\345\205\263\347\263\273(&B)", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("widgetClass", "GroupBox", Q_NULLPTR));
        checkBox_underline->setText(QApplication::translate("widgetClass", "underline", Q_NULLPTR));
        checkBox_italic->setText(QApplication::translate("widgetClass", "italic", Q_NULLPTR));
        checkBox_bold->setText(QApplication::translate("widgetClass", "bold", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("widgetClass", "GroupBox", Q_NULLPTR));
        radioButton_black->setText(QApplication::translate("widgetClass", "balck", Q_NULLPTR));
        radioButton_red->setText(QApplication::translate("widgetClass", "red", Q_NULLPTR));
        radioButton_blue->setText(QApplication::translate("widgetClass", "blue", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("widgetClass", "ok", Q_NULLPTR));
        pushButton_cancle->setText(QApplication::translate("widgetClass", "cancle", Q_NULLPTR));
        pushButton_exit->setText(QApplication::translate("widgetClass", "exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widgetClass: public Ui_widgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
