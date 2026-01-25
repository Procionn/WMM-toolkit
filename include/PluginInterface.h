#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QObject>

class PluginInterface : public QObject
{
public:
    PluginInterface() = default;
    virtual ~PluginInterface() = default;
    virtual void plugin_main() = 0;
    virtual QString name() = 0;
};

#endif // PLUGININTERFACE_H
