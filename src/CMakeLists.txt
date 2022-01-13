set(test_SRCS
    test.cpp
)

ecm_qt_declare_logging_category(test_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_TEST
    CATEGORY_NAME "kdevelop.plugin.test"
)

kdevplatform_add_plugin(test
    JSON test.json
    SOURCES ${test_SRCS}
)

target_link_libraries(test
    KDev::Interfaces
)
