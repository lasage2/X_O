#include "game.h"
#include <field.h>
#include <QGridLayout>

Field::Field(QWidget* parent)
  : QWidget(parent)
  , g(3)
{
    QGridLayout* gl = new QGridLayout(this);

    mapper = new QSignalMapper(this);

    for (int rows = 0; rows < g.getBoardSize(); rows++) {
        for (int cols = 0; cols < g.getBoardSize(); cols++) {
            field_button = new FieldButton(this);
            field_button->setObjectName(QString::number(field_button->getY()) + QString::number(field_button->getX()));
            field_button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            gl->addWidget(field_button, rows, cols);
            connect(field_button, SIGNAL(clicked()), mapper, SLOT(map()));
            // mapper->setMapping(field_button,);
        }
    }
    setLayout(gl);
    connect(field_button, SIGNAL(clicked()), this, SLOT(turn()));
}

Field::~Field()
{
    for (int i = 0; i < g.getBoardSize() * g.getBoardSize(); i++) {
        delete field_button;
    }
}
