#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include "documento.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_denegar_clicked();

    void on_aprobar1_clicked();

    void on_lcdNumber_3_overflow();

    void on_denegar1_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_labelDatosPersona_linkActivated(const QString &link);

    void on_botonJugar_clicked();

private:
    Ui::MainWindow *ui;
    QLabel *labelDatosPersona;
    QPushButton *botonJugar;
    Documento doc;
};
#endif // MAINWINDOW_H
