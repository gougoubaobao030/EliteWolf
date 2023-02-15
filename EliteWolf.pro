QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    argumenttime.cpp \
    bubble.cpp \
    debater.cpp \
    ebutton.cpp \
    elitephoto.cpp \
    main.cpp \
    game.cpp \
    photomanagement.cpp \
    welcome.cpp

HEADERS += \
    argumenttime.h \
    bubble.h \
    debater.h \
    ebutton.h \
    elitephoto.h \
    game.h \
    photomanagement.h \
    welcome.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
