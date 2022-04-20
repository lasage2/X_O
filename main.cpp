#include <QApplication>
#include <field.h>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Field w;
    w.show();

    return a.exec();
}
