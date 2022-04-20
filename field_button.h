#pragma once
#include <QPushButton>
#include <game.h>

class FieldButton : public QPushButton
{
    Q_OBJECT

public:
    FieldButton(QWidget* parent = nullptr);
    ~FieldButton();

    static int fb_X;   // X кнопки
    static int fb_Y;   // Y кнопки

    int getX() const;
    int getY() const;

    Game g;

private:
    int fb_Xbtn = 0;
    int fb_Ybtn = 0;
};
