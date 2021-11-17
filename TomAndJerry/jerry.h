#ifndef JERRY_H
#define JERRY_H
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
class Jerry : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
    int data[10][10];
    int row;
    int column;
public:
    Jerry(int board[10][10]);
    void setjerrydata(int board[10][10]);
//public slots:
    void keyPressEvent(QKeyEvent* event);
};

#endif // JERRY_H