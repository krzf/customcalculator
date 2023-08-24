/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
    QLabel *result_show;
    QPushButton *pushButton_skobkapravo;
    QPushButton *pushButton_skobkaleva;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_div;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_0;
    QPushButton *equals;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_del;
    QPushButton *pushButton_log;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_mraz;
    QPushButton *variable_x;
    QPushButton *pushButton_mod;
    QLineEdit *input_x;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(595, 489);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: black;\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        result_show = new QLabel(centralwidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(50, 0, 421, 91));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        result_show->setFont(font);
        result_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: rgb(34, 135, 140);\n"
" qproperty-alignment: 'AlignVCenter | AlignRight';\n"
" border: 1px solid black;\n"
"}\n"
"background-color : red;"));
        pushButton_skobkapravo = new QPushButton(centralwidget);
        pushButton_skobkapravo->setObjectName(QString::fromUtf8("pushButton_skobkapravo"));
        pushButton_skobkapravo->setGeometry(QRect(50, 90, 70, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic UI Semilight"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setKerning(true);
        pushButton_skobkapravo->setFont(font1);
        pushButton_skobkapravo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: gray;\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_skobkaleva = new QPushButton(centralwidget);
        pushButton_skobkaleva->setObjectName(QString::fromUtf8("pushButton_skobkaleva"));
        pushButton_skobkaleva->setGeometry(QRect(120, 90, 70, 70));
        pushButton_skobkaleva->setFont(font1);
        pushButton_skobkaleva->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: gray;\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 160, 70, 70));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255, 255, 255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(190, 160, 70, 70));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255, 255, 255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(120, 160, 70, 70));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255, 255, 255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 230, 70, 70));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(0, 0, 255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 230, 70, 70));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(0, 0, 255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 230, 70, 70));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(0, 0, 255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(50, 300, 70, 70));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255, 0, 0);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 300, 70, 70));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255, 0, 0);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 300, 70, 70));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255, 0, 0);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(260, 90, 70, 70));
        pushButton_div->setFont(font1);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	 background-color: rgb(184, 77, 6);\n"
"    border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
""));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(260, 230, 70, 70));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	 background-color: rgb(184, 77, 6);\n"
"    border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
""));
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(260, 160, 70, 70));
        pushButton_mult->setFont(font1);
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	 background-color: rgb(184, 77, 6);\n"
"    border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
""));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(260, 300, 70, 70));
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	 background-color: rgb(184, 77, 6);\n"
"    border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(120, 370, 70, 70));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color:gray;\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        equals = new QPushButton(centralwidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(260, 370, 70, 70));
        equals->setFont(font1);
        equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	 background-color: rgb(184, 77, 6);\n"
"    border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
""));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(190, 370, 70, 70));
        pushButton_dot->setFont(font1);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: gray;\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(400, 90, 71, 151));
        pushButton_del->setFont(font1);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	 background-color: rgb(96, 168, 255);\n"
"    border: 1px solid black;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
""));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(330, 140, 71, 51));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(50, 370, 70, 70));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(400, 240, 71, 41));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(330, 320, 71, 41));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(330, 280, 71, 41));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(330, 240, 71, 41));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(400, 280, 71, 41));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(400, 320, 71, 41));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(330, 190, 71, 51));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_mraz = new QPushButton(centralwidget);
        pushButton_mraz->setObjectName(QString::fromUtf8("pushButton_mraz"));
        pushButton_mraz->setGeometry(QRect(330, 90, 71, 51));
        pushButton_mraz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        variable_x = new QPushButton(centralwidget);
        variable_x->setObjectName(QString::fromUtf8("variable_x"));
        variable_x->setEnabled(true);
        variable_x->setGeometry(QRect(330, 360, 141, 81));
        variable_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(190, 90, 70, 70));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
" background-color: rgb(255,255,255);\n"
"    border: 1px solid  black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        input_x = new QLineEdit(centralwidget);
        input_x->setObjectName(QString::fromUtf8("input_x"));
        input_x->setGeometry(QRect(70, 440, 401, 51));
        input_x->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 240, 107)"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 440, 421, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 139, 244)"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        result_show->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_skobkapravo->setText(QApplication::translate("MainWindow", "(", nullptr));
        pushButton_skobkaleva->setText(QApplication::translate("MainWindow", ")", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_div->setText(QApplication::translate("MainWindow", " /", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_mult->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        equals->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_del->setText(QApplication::translate("MainWindow", "del", nullptr));
        pushButton_log->setText(QApplication::translate("MainWindow", "log", nullptr));
        pushButton_ln->setText(QApplication::translate("MainWindow", "ln", nullptr));
        pushButton_asin->setText(QApplication::translate("MainWindow", "asin", nullptr));
        pushButton_tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        pushButton_cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        pushButton_acos->setText(QApplication::translate("MainWindow", "acos", nullptr));
        pushButton_atan->setText(QApplication::translate("MainWindow", "atan", nullptr));
        pushButton_sqrt->setText(QApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_mraz->setText(QApplication::translate("MainWindow", "^", nullptr));
        variable_x->setText(QApplication::translate("MainWindow", "x", nullptr));
        pushButton_mod->setText(QApplication::translate("MainWindow", "mod", nullptr));
        label->setText(QApplication::translate("MainWindow", "  x=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
