#include <QApplication>
#include "mywindow.h"
#include "Snake.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//MyWindow  *w = new MyWindow ();
//w->show();

Snake window;
 window.setWindowTitle("Snake");
 window.show();


    return a.exec();
}
