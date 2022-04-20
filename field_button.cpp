#include <field_button.h>

FieldButton::FieldButton(QWidget* parent)
  : QPushButton(parent)
  , g(3)
{
    if (fb_X < g.getBoardSize()) {
        fb_Xbtn = fb_X;
        fb_Ybtn = fb_Y;
        fb_X++;
    } else {
        fb_Ybtn = fb_Y;
        fb_Xbtn = fb_X;
        fb_Y++;
        fb_X = 1;
    }
}

FieldButton::~FieldButton()
{}

int FieldButton::getX() const
{
    return fb_Xbtn;
}

int FieldButton::getY() const
{
    return fb_Ybtn;
}

int FieldButton::fb_X = 1;
int FieldButton::fb_Y = 1;
