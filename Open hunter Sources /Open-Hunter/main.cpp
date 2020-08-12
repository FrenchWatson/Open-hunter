#include "mainwindow.h"
#include <QApplication>
#include <qtextcodec.h>

int main(int argc, char *argv[])
{
    //Supprime les problèmes avec les accents
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
