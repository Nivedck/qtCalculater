/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *firstNumtxt;
    QLabel *secNumtxt;
    QLineEdit *firstBox;
    QLineEdit *secBox;
    QPushButton *additon;
    QPushButton *substraction;
    QPushButton *multiplication;
    QPushButton *division;
    QLabel *restxt;
    QLineEdit *resBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(842, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        firstNumtxt = new QLabel(centralwidget);
        firstNumtxt->setObjectName("firstNumtxt");
        firstNumtxt->setGeometry(QRect(120, 110, 141, 41));
        secNumtxt = new QLabel(centralwidget);
        secNumtxt->setObjectName("secNumtxt");
        secNumtxt->setGeometry(QRect(120, 200, 141, 41));
        firstBox = new QLineEdit(centralwidget);
        firstBox->setObjectName("firstBox");
        firstBox->setGeometry(QRect(270, 110, 191, 41));
        secBox = new QLineEdit(centralwidget);
        secBox->setObjectName("secBox");
        secBox->setGeometry(QRect(270, 200, 191, 41));
        additon = new QPushButton(centralwidget);
        additon->setObjectName("additon");
        additon->setGeometry(QRect(120, 290, 51, 51));
        QFont font;
        font.setPointSize(20);
        additon->setFont(font);
        substraction = new QPushButton(centralwidget);
        substraction->setObjectName("substraction");
        substraction->setGeometry(QRect(240, 290, 51, 51));
        substraction->setFont(font);
        multiplication = new QPushButton(centralwidget);
        multiplication->setObjectName("multiplication");
        multiplication->setGeometry(QRect(360, 290, 51, 51));
        QFont font1;
        font1.setPointSize(14);
        multiplication->setFont(font1);
        division = new QPushButton(centralwidget);
        division->setObjectName("division");
        division->setGeometry(QRect(470, 290, 51, 51));
        division->setFont(font1);
        restxt = new QLabel(centralwidget);
        restxt->setObjectName("restxt");
        restxt->setGeometry(QRect(120, 390, 121, 61));
        resBox = new QLineEdit(centralwidget);
        resBox->setObjectName("resBox");
        resBox->setGeometry(QRect(270, 400, 191, 41));
        resBox->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        firstNumtxt->setText(QCoreApplication::translate("MainWindow", "First Number :", nullptr));
        secNumtxt->setText(QCoreApplication::translate("MainWindow", "Second Number:", nullptr));
        additon->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        substraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiplication->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        restxt->setText(QCoreApplication::translate("MainWindow", "Result  : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
