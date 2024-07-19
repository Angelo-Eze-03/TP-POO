#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "documento.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());

    // Obtener referencias a los widgets del archivo UI
    labelDatosPersona = ui->labelDatosPersona;
    buttonJugar = ui->buttonJugar;
    // Conectar el botón "JUGAR" con el slot
    connect(buttonJugar, &QPushButton::clicked, this, &MainWindow::on_buttonJugar_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{
   ui->dateEdit->setDate(QDate::currentDate());
    (void)date;
}

void MainWindow::on_buttonJugar_clicked()
{
    doc.GenerarPersona(labelDatosPersona);
}


void MainWindow::on_labelDatosPersona_linkActivated(const QString &link)
{
    (void)link;
}

void MainWindow::on_aprobar1_clicked()
{
    // Implementa la funcionalidad que necesitas para este botón aquí.
}

void MainWindow::on_lcdNumber_3_overflow()
{
    // Implementa la funcionalidad que necesitas para este botón aquí.
}

void MainWindow::on_denegar1_clicked()
{
    // Implementa la funcionalidad que necesitas para este botón aquí.
}
