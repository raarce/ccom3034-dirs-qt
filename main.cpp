#include <QtCore/QCoreApplication>
#include <QtDebug>
#include <QDir>
#include <QFileInfo>

void listDirContents(QString st) {
    QDir D(st);
    QFileInfoList L = D.entryInfoList(QDir::Files | QDir::NoDotAndDotDot);//QDir::NoDotAndDotDot);
    qDebug() << "Files: ";
    for (int i=0; i<L.size(); i++) {
        qDebug() << "\t" << L[i].fileName();
    }

    L = D.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);//QDir::NoDotAndDotDot);
    qDebug() << "SubDirs: ";
    for (int i=0; i<L.size(); i++) {
        qDebug() << "\t" << L[i].fileName() ;
    }
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    listDirContents("/Users/rarce/Dropbox/CCOM3034/2012-Fall/exam1");
    qDebug() << "hello world";
    return 0;
}
