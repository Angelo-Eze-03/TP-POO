/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *aprobar1;
    QPushButton *denegar1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_2;
    QDateEdit *dateEdit;
    QPushButton *Jugar;
    QFrame *frame_2;
    QLabel *labelDatosPersona;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(967, 502);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(110, 50, 711, 351));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_5 = new QWidget(frame);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(160, 200, 421, 131));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        aprobar1 = new QPushButton(verticalLayoutWidget_5);
        aprobar1->setObjectName("aprobar1");
        aprobar1->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(aprobar1);

        denegar1 = new QPushButton(verticalLayoutWidget_5);
        denegar1->setObjectName("denegar1");
        denegar1->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(denegar1);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(verticalLayoutWidget_5);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget_5);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);


        verticalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lcdNumber_3 = new QLCDNumber(verticalLayoutWidget_5);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout_3->addWidget(lcdNumber_3);

        lcdNumber_2 = new QLCDNumber(verticalLayoutWidget_5);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout_3->addWidget(lcdNumber_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        dateEdit = new QDateEdit(verticalLayoutWidget_5);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setEnabled(true);
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 255, 255);"));
        dateEdit->setInputMethodHints(Qt::ImhNone);
        dateEdit->setWrapping(false);
        dateEdit->setFrame(false);
        dateEdit->setKeyboardTracking(false);
        dateEdit->setTimeSpec(Qt::UTC);

        verticalLayout_5->addWidget(dateEdit);

        Jugar = new QPushButton(frame);
        Jugar->setObjectName("Jugar");
        Jugar->setGeometry(QRect(20, 300, 80, 21));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(160, 10, 421, 181));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        labelDatosPersona = new QLabel(frame_2);
        labelDatosPersona->setObjectName("labelDatosPersona");
        labelDatosPersona->setGeometry(QRect(120, 50, 151, 61));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PaperPlease", nullptr));
        aprobar1->setText(QCoreApplication::translate("MainWindow", "Aprobar", nullptr));
        denegar1->setText(QCoreApplication::translate("MainWindow", "Denegar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Multas", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Puntos ", nullptr));
        Jugar->setText(QCoreApplication::translate("MainWindow", "Jugar", nullptr));
        labelDatosPersona->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
