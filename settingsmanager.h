#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H
#include <QString>


class SettingsManager
{
public:
    SettingsManager();
    QString getUserName() const;
    void setUserName(const QString &t_name);
};

#endif // SETTINGSMANAGER_H
