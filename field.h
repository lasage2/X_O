#pragma once
#include <field_button.h>
#include <game.h>
#include <QWidget>
#include <QSignalMapper>

class Field : public QWidget
{
    Q_OBJECT

public:
    Field(QWidget* parent = nullptr);
    ~Field() override;

    FieldButton* field_button;
    Game g;
    QSignalMapper* mapper;
};
