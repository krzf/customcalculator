#ifndef GRAPH_H
#define GRAPH_H

#include <QVector>
#include <QWidget>
extern "C" {
#include "../smartcalc.h"
}
#define LIMIT 1000000
namespace Ui {
class Graph;
}

class Graph : public QWidget {
  Q_OBJECT

 public:
  explicit Graph(QWidget *parent = nullptr);
  void graphics(char *pstr);
  ~Graph();

 private slots:
  void on_build_graphics_clicked();

 private:
  Ui::Graph *ui;
  double x_start, x_end, y_start, y_end, step, X;

  QVector<double> x, y;
};

#endif  // GRAPH_H
