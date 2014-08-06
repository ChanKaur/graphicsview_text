#include "mainwindow.h"

MyMainWindow::MyMainWindow( QWidget * ) {
  setupUi(this);
  QGraphicsScene *scene = new QGraphicsScene;
  scene->setSceneRect( -100.0, -100.0, 200.0, 200.0 );
  toolButton->setCheckable(true);
  graphicsView->setScene(scene);

}
