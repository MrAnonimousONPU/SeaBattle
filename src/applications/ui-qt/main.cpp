#include "Widget.hpp"

#include <MockIPC.hpp>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w(std::make_shared<MockIPC>());
    w.show();

    return a.exec();
}
