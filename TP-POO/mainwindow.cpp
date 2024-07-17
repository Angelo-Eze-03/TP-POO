#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "persona.h"
#include "nivel.h"
#include "documento.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_aprobar1_clicked()
{
    //corroborar
    //sume puntos
    //pasar al siguiente
    //generar otra persona
    //mostrar otra persona

}


void MainWindow::on_denegar1_clicked()
{
    //corroborar
    //sume puntos
    //guardar los datos erroneos
    //pasar al siguiente
    //generar otra persona
    //mostrar otra persona
}


void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{
   ui->dateEdit->setDate(QDate::currentDate());
}

void MainWindow::on_labelDatosPersona_linkActivated(const QString &link)
{
    ui->labelDatosPersona->setText();
}

