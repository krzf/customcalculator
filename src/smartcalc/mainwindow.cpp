#include "mainwindow.h"
#include "ui_mainwindow.h"


double num_first;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_mult,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_div,SIGNAL(clicked()),this,SLOT(digits_numbers()));

    connect(ui->pushButton_sin,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_cos,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_tan,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_atan,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_acos,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_asin,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_ln,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_log,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    //
    connect(ui->pushButton_mod,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_sqrt,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_mraz,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->variable_x,SIGNAL(clicked()),this,SLOT(digits_numbers()));

      connect(ui->pushButton_skobkaleva,SIGNAL(clicked()),this,SLOT(digits_numbers()));
      connect(ui->pushButton_skobkapravo,SIGNAL(clicked()),this,SLOT(digits_numbers()));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete graph;
}

void MainWindow::digits_numbers() {
  QPushButton *button = (QPushButton *)sender();
  QString input = ui->result_show->text();
  if (input == "0") {
    ui->result_show->clear();
  }
  QString newlabel = ui->result_show->text() + button->text();
  ui->result_show->setText(newlabel);
}
void MainWindow::on_pushButton_dot_clicked()
{
    if (!(ui->result_show->text().endsWith('.')))
        ui->result_show->setText(ui->result_show->text() + ".");
}


void MainWindow::on_pushButton_del_clicked()
{
      ui->pushButton_plus->setChecked(false);
      ui->pushButton_minus->setChecked(false);
      ui->pushButton_div->setChecked(false);
      ui->pushButton_mult->setChecked(false);

       ui->result_show->setText("0");
}


void MainWindow::on_equals_clicked() {
  QString str = ui->result_show->text();
  QByteArray byte_string = str.toLocal8Bit();
  char *equation = byte_string.data();
  if ((str.contains('x')) && (ui->input_x->text() == "") &&
      (!valid(equation))) {
    graph = new Graph;
    graph->show();
    graph->graphics(equation);
  } else {
    double x;
    double *X = NULL;
    if ((str.contains('x')) && ui->input_x->text() != "") {
      x = ui->input_x->text().toDouble();
      X = &x;
    }
    double res = 0;
    if (!calculator(equation, X, &res)) {
      QString numberResult = QString::number(res, 'g', 15);
      ui->result_show->setText(numberResult);
    }
  }
}

