/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QCustomPlot *widget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_xmin;
    QLabel *label_xmax;
    QLineEdit *x_min;
    QLineEdit *x_max;
    QPushButton *build_graphics;
    QLabel *expression;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_ymin;
    QLabel *label_ymax;
    QLineEdit *y_min;
    QLineEdit *y_max;

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->resize(608, 478);
        Graph->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        widget = new QCustomPlot(Graph);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 591, 361));
        widget->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        gridLayoutWidget = new QWidget(Graph);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 430, 421, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_xmin = new QLabel(gridLayoutWidget);
        label_xmin->setObjectName(QString::fromUtf8("label_xmin"));

        gridLayout->addWidget(label_xmin, 0, 0, 1, 1);

        label_xmax = new QLabel(gridLayoutWidget);
        label_xmax->setObjectName(QString::fromUtf8("label_xmax"));

        gridLayout->addWidget(label_xmax, 0, 2, 1, 1);

        x_min = new QLineEdit(gridLayoutWidget);
        x_min->setObjectName(QString::fromUtf8("x_min"));

        gridLayout->addWidget(x_min, 0, 1, 1, 1);

        x_max = new QLineEdit(gridLayoutWidget);
        x_max->setObjectName(QString::fromUtf8("x_max"));

        gridLayout->addWidget(x_max, 0, 3, 1, 1);

        build_graphics = new QPushButton(Graph);
        build_graphics->setObjectName(QString::fromUtf8("build_graphics"));
        build_graphics->setGeometry(QRect(450, 390, 151, 81));
        expression = new QLabel(Graph);
        expression->setObjectName(QString::fromUtf8("expression"));
        expression->setGeometry(QRect(100, 0, 461, 20));
        gridLayoutWidget_2 = new QWidget(Graph);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 390, 421, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_ymin = new QLabel(gridLayoutWidget_2);
        label_ymin->setObjectName(QString::fromUtf8("label_ymin"));

        gridLayout_2->addWidget(label_ymin, 0, 0, 1, 1);

        label_ymax = new QLabel(gridLayoutWidget_2);
        label_ymax->setObjectName(QString::fromUtf8("label_ymax"));

        gridLayout_2->addWidget(label_ymax, 0, 2, 1, 1);

        y_min = new QLineEdit(gridLayoutWidget_2);
        y_min->setObjectName(QString::fromUtf8("y_min"));

        gridLayout_2->addWidget(y_min, 0, 1, 1, 1);

        y_max = new QLineEdit(gridLayoutWidget_2);
        y_max->setObjectName(QString::fromUtf8("y_max"));

        gridLayout_2->addWidget(y_max, 0, 3, 1, 1);


        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QApplication::translate("Graph", "Form", nullptr));
        label_xmin->setText(QApplication::translate("Graph", "    Xmin", nullptr));
        label_xmax->setText(QApplication::translate("Graph", "    Xmax", nullptr));
        x_min->setText(QApplication::translate("Graph", "-10", nullptr));
        x_max->setText(QApplication::translate("Graph", "10", nullptr));
        build_graphics->setText(QApplication::translate("Graph", "build", nullptr));
        expression->setText(QApplication::translate("Graph", "sinx", nullptr));
        label_ymin->setText(QApplication::translate("Graph", "    Ymin", nullptr));
        label_ymax->setText(QApplication::translate("Graph", "    Ymax", nullptr));
        y_min->setText(QApplication::translate("Graph", "-1", nullptr));
        y_max->setText(QApplication::translate("Graph", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
