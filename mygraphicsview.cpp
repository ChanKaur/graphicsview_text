



#include "mygraphicsview.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QInputDialog>
#include <QGraphicsTextItem>




void MyGraphicsView::mousePressEvent( QMouseEvent * event )
{
  if( ! addText) return;

  const QPoint &pos = event->pos();
  bool ok;
  QString text = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                   tr("Please enter your text"), QLineEdit::Normal,
                                   "Replace with your text", &ok);

  if ( !ok || text.isEmpty()) return;

  QGraphicsTextItem *textItem = this->scene()->addText(text);
  textItem->setPos(mapToScene(pos));

}
