#include <QCoreApplication>
#include "settingsmanager.h"
#include <QDebug>
//#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QCoreApplication::setOrganizationName("Good Company");
    QCoreApplication::setApplicationName("Best app");
    SettingsManager settingsManager;
    qDebug() << settingsManager.getUserName();
    qDebug() << "input new name";
    QTextStream s(stdin);
    QString value = s.readLine();
    settingsManager.setUserName(value);

    return 0/*a.exec()*/;
}
