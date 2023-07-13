import qbs
CppApplication {
    Depends { name: "Qt.quick" }
    install: true
    // Additional import path used to resolve QML modules in Qt Creator's code model
    property pathList qmlImportPaths: []

    files: [
        "datamodel.cpp",
        "datamodel.h",
        "main.cpp",
    ]

    Group {
        Qt.core.resourcePrefix: "untitled3/"
        fileTags: ["qt.qml.qml", "qt.core.resource_data"]
        files: ["Main.qml"]
    }
}
