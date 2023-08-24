#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QLabel>
#include <QMainWindow>
#include <QPixmap>
#include <QString>
#include <graph.h>
extern "C"{
#include "../smartcalc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Graph *graph;
private slots:
void on_equals_clicked();
    void digits_numbers();
    void on_pushButton_dot_clicked();

    void on_pushButton_del_clicked();
    
};
#endif // MAINWINDOW_H
