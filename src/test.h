#ifndef TEST_H
#define TEST_H

#include <interfaces/iplugin.h>

class test : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    test(QObject* parent, const QVariantList& args);
};

#endif // TEST_H
