#include "notepad.h"


notepad::notepad(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.textEdit->setEnabled(false);

    curFileLabel = new QLabel;
    curFileLabel->setMidLineWidth(150);
    curFileLabel->setText("当前文件：");
    ui.statusBar->addWidget(curFileLabel);

    progressbar = new QProgressBar;
    progressbar->setMinimumWidth(200);
    progressbar->setMinimum(5);
    progressbar->setMaximum(50);
    QPalette pal;

    pal.setColor(QPalette::Text, Qt::blue);
    progressbar->setPalette(pal);
    progressbar->setValue(ui.textEdit->font().pointSize());
    ui.statusBar->addWidget(progressbar);


	fontComboBox = new QFontComboBox(this);
	fontComboBox->setMinimumWidth(50);
	//ui.toolBar_style->addWidget(new QLabel("字体"));
	ui.toolBar_style->addWidget(fontComboBox);

    ui.toolBar_style->addSeparator();
    spinBox = new QSpinBox;
    spinBox->setMinimum(5);
    spinBox->setMaximum(50);
    spinBox->setMinimumWidth(50);
    spinBox->setValue(ui.textEdit->font().pointSize());
    //ui.toolBar_style->addWidget(new QLabel("字体大小"));
    ui.toolBar_style->addWidget(spinBox);


    setCentralWidget(ui.textEdit); 

    QObject::connect(fontComboBox, SIGNAL(currentIndexChanged(const QString &)),
       this, SLOT(on_fontComboBox_currentIndexChanged(const QString &)));
    QObject::connect(spinBox, SIGNAL(valueChanged(int)), this, SLOT(on_spinBox_valueChanged(int)));
	QObject::connect(ui.textEdit, SIGNAL(selectionChanged()), this, SLOT(on_text_selectChanged()));
	QObject::connect(ui.textEdit, SIGNAL(textChanged()), this, SLOT(on_text_textChanged()));
	QObject::connect(ui.actBold, SIGNAL(triggered(bool)), this, SLOT(on_actBold_clicked(bool)));
    
    //File
	QObject::connect(ui.actOpen, SIGNAL(triggered()), this, SLOT(on_actOpen_clicked()));
	QObject::connect(ui.actSaveAs, SIGNAL(triggered()), this, SLOT(on_actSaveAs_clicked()));
	QObject::connect(ui.actSave, SIGNAL(triggered()), this, SLOT(on_actSave_clicked()));
	QObject::connect(ui.actClose, SIGNAL(triggered()), this, SLOT(on_actClose_clicked()));
	QObject::connect(ui.actNew, SIGNAL(triggered()), this, SLOT(on_actNew_clicked()));
}


void notepad::on_spinBox_valueChanged(int value)
{
    QTextCharFormat fmt;

    fmt.setFontPointSize(value);
    ui.textEdit->mergeCurrentCharFormat(fmt);
    progressbar->setValue(value);
}

void notepad::on_fontComboBox_currentIndexChanged(const QString &arg)
{
	QTextCharFormat fmt;

    fmt.setFontFamily(arg);
    ui.textEdit->mergeCurrentCharFormat(fmt);
}

void notepad::on_actBold_clicked(bool checked)
{
    QTextCharFormat fmt;
    QFont font;

    font.setBold(checked);
	fmt.setFont(font); 
    ui.textEdit->mergeCurrentCharFormat(fmt);
}

void notepad::on_text_selectChanged(void)
{
    QTextCharFormat fmt;
    QString arg;

    fmt = ui.textEdit->currentCharFormat();
    ui.actBold->setChecked(fmt.font().bold());
    ui.actItalic->setChecked(fmt.font().italic());
    ui.actUnderline->setChecked(fmt.font().underline());
    
    arg = fmt.font().family();
    fontComboBox->setCurrentText(arg);

    spinBox->setValue(fmt.font().pointSize());
}

void notepad::on_actOpen_clicked(void)
{
    QString path = QDir::currentPath();
    QString name = QFileDialog::getOpenFileName(this, "打开文件...", path, 
        "程序文件(*.h *.cpp) ;; 文本文件(*.txt) ;; 所有文件(*.*)");
    
    openFile = new QFile(name);
    openFile->open(QIODevice::ReadOnly);
    QTextStream* stream = new QTextStream(openFile);

    //QString str = openFile->readAll();//读取中文会乱码
    stream->setAutoDetectUnicode(true);
    QString str = stream->readAll();
 
    ui.textEdit->setText(str);
    ui.textEdit->setEnabled(true);
    openFile->close();
}

void notepad::on_actSaveAs_clicked(void)
{
    QFile *file;
    QString path;

    path = QDir::currentPath();
    QString name = QFileDialog::getSaveFileName(this, "另存为...", path);

    file = new QFile(name);
    file->open(QIODevice::WriteOnly|QIODevice::Text);
    QByteArray textByte = ui.textEdit->toPlainText().toUtf8();
    file->write(textByte, textByte.length());
    file->close();
}


void notepad::on_actSave_clicked(void)
{
    openFile->open(QIODevice::WriteOnly | QIODevice::Text);
    QString str = ui.textEdit->toPlainText();
    QByteArray textByte = str.toUtf8();
    openFile->write(textByte, textByte.length());
    openFile->close();
    title = "notepad";
    setWindowTitle(title);
} 


void notepad::on_actClose_clicked(void)
{
    if (title == "notepad *")
    {
        QMessageBox::StandardButton ret;

        ret = QMessageBox::question(this, "确认关闭文件", "保存后关闭？", QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        if (QMessageBox::Yes == ret)
        {
            on_actSave_clicked();
        }
        else if (QMessageBox::Cancel == ret)
        {
            return;
        }
    }
	ui.textEdit->setText("");
	ui.textEdit->setEnabled(false);
	
}

void notepad::on_actNew_clicked(void)
{
  
    QString path = QDir::currentPath();
    QString name = QFileDialog::getSaveFileName(this, "新建文件", path);
    if (name.isEmpty())
    {
        return;
    }
    openFile = new QFile(name);
    
    ui.textEdit->setEnabled(true);
}

void notepad::on_text_textChanged(void)
{
    static int flag = 1;
    if (1 != flag)
    {
		title = "notepad *";
		setWindowTitle(title);
    }
    else
    {
        flag = 0;
    }
}

