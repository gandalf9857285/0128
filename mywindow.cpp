#include "mywindow.h"

MyWindow::MyWindow() {
this->setGeometry(100,100,800,600);
}

  void MyWindow :: paintEvent(QPaintEvent *event) {
  QPainter *p= new QPainter(this);
  QPen pen1(Qt::green, 2, Qt::SolidLine);
  QBrush brush1("#c56c00");
p->setPen(pen1);
p->drawLine(80,210,80,150);//вертикальная бамп
p->drawLine(80,210,300,210);//низ
p->drawLine(80,150,100,100);
p->drawLine(100,100,200,100);//крыша
p->drawLine(200,100,250,150);//стекло
p->drawLine(250,150,300,150);
p->drawLine(300,150,300,210);//порше
p->drawLine(80,150,250,150);
p->drawLine(200,150,200,100);
p->drawLine(150,150,150,100);//окна

p->setBrush(brush1);
  p->drawEllipse(100,200,50,50);//wheel

  p->setBrush(brush1);
    p->drawEllipse(200,200,50,50);//wheel


}
