#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>

class MyGraphicsView: public QGraphicsView
{
  Q_OBJECT
public:
  MyGraphicsView( QWidget *parent = 0) : QGraphicsView(parent), addText(false) {}
  void setAddText(bool state) {addText = state;}
  public slots:
  void mousePressEvent( QMouseEvent * event );

 private:
  bool addText;

};
#endif // MAINWINDOW_H
