#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QVector>
#include <QPoint>
#include <QKeyEvent>
#include <QtCore/qglobal.h>

class Game : public QWidget
{
public:
    Game();

protected:
    void timerEvent(QTimerEvent*) override;
    void keyPressEvent(QKeyEvent *) override;
    void paintEvent(QPaintEvent *event) override;

private:

    static const int DOT_WIDTH  = 20;
    static const int DOT_HEIGHT = 20;
    static const int FIELD_WIDTH  = 20;
    static const int FIELD_HEIGHT  = 20;
    static const int DELAY = 150;

    void doDrawing();
    void localApple();
    void move();
    void check_field();
    void gameOver();
    void check_apple();

    int timeId;

    QPoint m_apple;

    enum Directions {
        left, right, up, down
    };

    Directions m_dir;

    bool m_inGame;
    QVector<QPoint> m_dots;


    void initGame();

};

#endif // GAME_H
