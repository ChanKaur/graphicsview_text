#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include "mygraphicsview.h"
#include <QGraphicsScene>
#include "ui_mainwindow.h"
#include <QtCore>

class MyMainWindow: public QMainWindow, private Ui::MainWindow
{
  Q_OBJECT
 public:
  MyMainWindow( QWidget *parent = 0 );

  public slots:
  void on_toolButton_clicked( bool checked ) {
      graphicsView->setAddText(checked); }


};
#endif // MAINWINDOW_H
