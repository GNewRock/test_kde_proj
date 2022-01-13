#include "test.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(testFactory, "test.json", registerPlugin<test>(); )

test::test(QObject *parent, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("test"), parent)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_TEST) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "test.moc"
