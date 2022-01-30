#ifndef MYWINDOW_H
#define MYWINDOW_H
#include<QWidget>
#include<QPainter>
#include<QPaintEvent>
class MyWindow : public QWidget
{
public:
    MyWindow();

protected:
    void paintEvent (QPaintEvent  *event);
};

#endif // MYWINDOW_H
