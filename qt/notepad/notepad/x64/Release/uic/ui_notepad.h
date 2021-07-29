/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notepadClass
{
public:
    QAction *actOpen;
    QAction *actCopy;
    QAction *actCut;
    QAction *actPaste;
    QAction *actSelectAll;
    QAction *actBold;
    QAction *actSave;
    QAction *actItalic;
    QAction *actUnderline;
    QAction *actClose;
    QAction *actNew;
    QAction *actSaveAs;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_file;
    QMenu *menu_edit;
    QMenu *menu_style;
    QToolBar *mainToolBar_file;
    QStatusBar *statusBar;
    QToolBar *toolBar_edit;
    QToolBar *toolBar_style;

    void setupUi(QMainWindow *notepadClass)
    {
        if (notepadClass->objectName().isEmpty())
            notepadClass->setObjectName(QStringLiteral("notepadClass"));
        notepadClass->resize(596, 445);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/images/qt32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        notepadClass->setWindowIcon(icon);
        actOpen = new QAction(notepadClass);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/image/images/new.png"), QSize(), QIcon::Normal, QIcon::On);
        actOpen->setIcon(icon1);
        actCopy = new QAction(notepadClass);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/images/copy.png"), QSize(), QIcon::Normal, QIcon::On);
        actCopy->setIcon(icon2);
        actCut = new QAction(notepadClass);
        actCut->setObjectName(QStringLiteral("actCut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon3);
        actPaste = new QAction(notepadClass);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/images/paste.png"), QSize(), QIcon::Normal, QIcon::On);
        actPaste->setIcon(icon4);
        actSelectAll = new QAction(notepadClass);
        actSelectAll->setObjectName(QStringLiteral("actSelectAll"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/images/open.png"), QSize(), QIcon::Normal, QIcon::On);
        actSelectAll->setIcon(icon5);
        actBold = new QAction(notepadClass);
        actBold->setObjectName(QStringLiteral("actBold"));
        actBold->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/image/images/textbold.png"), QSize(), QIcon::Normal, QIcon::On);
        actBold->setIcon(icon6);
        actSave = new QAction(notepadClass);
        actSave->setObjectName(QStringLiteral("actSave"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/image/images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon7);
        actItalic = new QAction(notepadClass);
        actItalic->setObjectName(QStringLiteral("actItalic"));
        actItalic->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/image/images/textitalic.png"), QSize(), QIcon::Normal, QIcon::On);
        actItalic->setIcon(icon8);
        actUnderline = new QAction(notepadClass);
        actUnderline->setObjectName(QStringLiteral("actUnderline"));
        actUnderline->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/image/images/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUnderline->setIcon(icon9);
        actClose = new QAction(notepadClass);
        actClose->setObjectName(QStringLiteral("actClose"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/image/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::On);
        actClose->setIcon(icon10);
        actNew = new QAction(notepadClass);
        actNew->setObjectName(QStringLiteral("actNew"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/image/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon11);
        actSaveAs = new QAction(notepadClass);
        actSaveAs->setObjectName(QStringLiteral("actSaveAs"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/image/images/exportpdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSaveAs->setIcon(icon12);
        centralWidget = new QWidget(notepadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(13, 10, 571, 351));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(12);
        textEdit->setFont(font);
        notepadClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(notepadClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 596, 23));
        menu_file = new QMenu(menuBar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        menu_edit = new QMenu(menuBar);
        menu_edit->setObjectName(QStringLiteral("menu_edit"));
        menu_style = new QMenu(menuBar);
        menu_style->setObjectName(QStringLiteral("menu_style"));
        notepadClass->setMenuBar(menuBar);
        mainToolBar_file = new QToolBar(notepadClass);
        mainToolBar_file->setObjectName(QStringLiteral("mainToolBar_file"));
        mainToolBar_file->setToolButtonStyle(Qt::ToolButtonIconOnly);
        notepadClass->addToolBar(Qt::TopToolBarArea, mainToolBar_file);
        statusBar = new QStatusBar(notepadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setPointSize(12);
        statusBar->setFont(font1);
        notepadClass->setStatusBar(statusBar);
        toolBar_edit = new QToolBar(notepadClass);
        toolBar_edit->setObjectName(QStringLiteral("toolBar_edit"));
        toolBar_edit->setToolButtonStyle(Qt::ToolButtonIconOnly);
        notepadClass->addToolBar(Qt::TopToolBarArea, toolBar_edit);
        toolBar_style = new QToolBar(notepadClass);
        toolBar_style->setObjectName(QStringLiteral("toolBar_style"));
        toolBar_style->setToolButtonStyle(Qt::ToolButtonIconOnly);
        notepadClass->addToolBar(Qt::TopToolBarArea, toolBar_style);

        menuBar->addAction(menu_file->menuAction());
        menuBar->addAction(menu_edit->menuAction());
        menuBar->addAction(menu_style->menuAction());
        menu_file->addAction(actNew);
        menu_file->addSeparator();
        menu_file->addAction(actOpen);
        menu_file->addAction(actClose);
        menu_file->addSeparator();
        menu_file->addAction(actSave);
        menu_edit->addAction(actCopy);
        menu_edit->addAction(actCut);
        menu_edit->addAction(actPaste);
        menu_edit->addAction(actSelectAll);
        menu_style->addAction(actBold);
        menu_style->addAction(actItalic);
        menu_style->addAction(actUnderline);
        menu_style->addSeparator();
        mainToolBar_file->addAction(actNew);
        mainToolBar_file->addAction(actOpen);
        mainToolBar_file->addAction(actClose);
        mainToolBar_file->addAction(actSave);
        mainToolBar_file->addAction(actSaveAs);
        toolBar_edit->addAction(actCopy);
        toolBar_edit->addAction(actCut);
        toolBar_edit->addAction(actPaste);
        toolBar_style->addAction(actBold);
        toolBar_style->addAction(actItalic);
        toolBar_style->addAction(actUnderline);

        retranslateUi(notepadClass);
        QObject::connect(actCut, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(actPaste, SIGNAL(triggered()), textEdit, SLOT(paste()));
        QObject::connect(actCopy, SIGNAL(triggered()), textEdit, SLOT(copy()));
        QObject::connect(actItalic, SIGNAL(triggered(bool)), textEdit, SLOT(setFontItalic(bool)));
        QObject::connect(actUnderline, SIGNAL(triggered(bool)), textEdit, SLOT(setFontUnderline(bool)));

        QMetaObject::connectSlotsByName(notepadClass);
    } // setupUi

    void retranslateUi(QMainWindow *notepadClass)
    {
        notepadClass->setWindowTitle(QApplication::translate("notepadClass", "notepad", Q_NULLPTR));
        actOpen->setText(QApplication::translate("notepadClass", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("notepadClass", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actOpen->setShortcut(QApplication::translate("notepadClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("notepadClass", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("notepadClass", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("notepadClass", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCut->setText(QApplication::translate("notepadClass", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("notepadClass", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("notepadClass", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("notepadClass", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("notepadClass", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("notepadClass", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actSelectAll->setText(QApplication::translate("notepadClass", "\345\205\250\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelectAll->setToolTip(QApplication::translate("notepadClass", "\345\205\250\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actSelectAll->setShortcut(QApplication::translate("notepadClass", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actBold->setText(QApplication::translate("notepadClass", "\347\262\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actBold->setToolTip(QApplication::translate("notepadClass", "\345\212\240\347\262\227\345\255\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave->setText(QApplication::translate("notepadClass", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave->setToolTip(QApplication::translate("notepadClass", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actSave->setShortcut(QApplication::translate("notepadClass", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actItalic->setText(QApplication::translate("notepadClass", "\346\226\234\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actItalic->setToolTip(QApplication::translate("notepadClass", "\346\226\234\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actUnderline->setText(QApplication::translate("notepadClass", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actUnderline->setToolTip(QApplication::translate("notepadClass", "\346\267\273\345\212\240\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("notepadClass", "\345\205\263\351\227\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("notepadClass", "\345\205\263\351\227\255\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actNew->setText(QApplication::translate("notepadClass", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actNew->setToolTip(QApplication::translate("notepadClass", "\346\226\260\345\273\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actNew->setShortcut(QApplication::translate("notepadClass", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actSaveAs->setText(QApplication::translate("notepadClass", "\345\217\246\345\255\230\344\270\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSaveAs->setToolTip(QApplication::translate("notepadClass", "\345\217\246\345\255\230\344\270\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actSaveAs->setShortcut(QApplication::translate("notepadClass", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        menu_file->setTitle(QApplication::translate("notepadClass", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_edit->setTitle(QApplication::translate("notepadClass", "\347\274\226\350\276\221(&E)", Q_NULLPTR));
        menu_style->setTitle(QApplication::translate("notepadClass", "\346\240\274\345\274\217(&S)", Q_NULLPTR));
        mainToolBar_file->setWindowTitle(QApplication::translate("notepadClass", "\346\226\207\344\273\266", Q_NULLPTR));
        toolBar_edit->setWindowTitle(QApplication::translate("notepadClass", "\347\274\226\350\276\221", Q_NULLPTR));
        toolBar_style->setWindowTitle(QApplication::translate("notepadClass", "\346\240\274\345\274\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class notepadClass: public Ui_notepadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
