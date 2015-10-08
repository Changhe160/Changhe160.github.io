#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete m_dlg;
}

void MainWindow::on_actionNew_Dialog_triggered()
{
    QDialog mydlg;
    mydlg.setModal(true);
    mydlg.exec();
    //mydlg.show();
   // m_dlg=new QDialog(this);
   // m_dlg->show();
}
