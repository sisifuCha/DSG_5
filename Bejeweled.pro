QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Global.cpp \
    cconfig.cpp \
    cgamedlg.cpp \
    cgamelogic.cpp \
    chelpdlg.cpp \
    cmaildlg.cpp \
    cmusicplayer.cpp \
    cnamedlg.cpp \
    crankdlg.cpp \
    cranklogic.cpp \
    cthemedlg.cpp \
    main.cpp \
    cbejeweleddlg.cpp \
    smtp.cpp

HEADERS += \
    Global.h \
    cbejeweleddlg.h \
    cconfig.h \
    cgamedlg.h \
    cgamelogic.h \
    chelpdlg.h \
    cmaildlg.h \
    cmusicplayer.h \
    cnamedlg.h \
    crankdlg.h \
    cranklogic.h \
    cthemedlg.h \
    smtp.h

FORMS += \
    cbejeweleddlg.ui \
    cgamedlg.ui \
    chelpdlg.ui \
    cmaildlg.ui \
    cnamedlg.ui \
    crankdlg.ui \
    cthemedlg.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc \
    resource.qrc

QT += multimediawidgets
QT += network


# RC_ICONS = exe_ico.ico
