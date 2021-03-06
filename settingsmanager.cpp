#include "settingsmanager.h"
#include <QSettings>
#include <QDebug>
#include <QCoreApplication>

SettingsManager::SettingsManager()
{
    Q_ASSERT_X(QCoreApplication::applicationName() != "", Q_FUNC_INFO, "QCoreApplication::applicationName() must be set in order to use settings");
    Q_ASSERT_X(QCoreApplication::organizationName() != "", Q_FUNC_INFO, "QCoreApplication::organizationName() must be set in order to use settings");
}

QString SettingsManager::getUserName() const
{
    QSettings settings;
    settings.beginGroup("user");
    return settings.value("username", "no name has been set").toString();
    settings.endGroup();
}

void SettingsManager::setUserName(const QString &t_name)
{
    QSettings settings;
    settings.beginGroup("user");
    settings.setValue("username", QVariant::fromValue<QString>(t_name));
    settings.endGroup();
}
