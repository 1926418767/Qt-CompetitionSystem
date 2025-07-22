QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administrator.cpp \
    administretor/addpc.cpp \
    administretor/createevent.cpp \
    administretor/eventinfo.cpp \
    administretor/pcinfo.cpp \
    administretor/roominfo.cpp \
    administretor/teameventinfo.cpp \
    database.cpp \
    login.cpp \
    main.cpp \
    register.cpp \
    stucenter.cpp \
    studentPage/createteam.cpp \
    studentPage/enrollevent.cpp \
    studentPage/infoteam.cpp \
    studentPage/modifyteam.cpp \
    studentPage/stuinfo.cpp \
    teacherPage/teacherinfo.cpp \
    teachercenter.cpp \
    verify.cpp

HEADERS += \
    administrator.h \
    administretor/addpc.h \
    administretor/createevent.h \
    administretor/eventinfo.h \
    administretor/pcinfo.h \
    administretor/roominfo.h \
    administretor/teameventinfo.h \
    database.h \
    login.h \
    register.h \
    stucenter.h \
    studentPage/createteam.h \
    studentPage/enrollevent.h \
    studentPage/infoteam.h \
    studentPage/modifyteam.h \
    studentPage/stuinfo.h \
    teacherPage/teacherinfo.h \
    teachercenter.h \
    verify.h

FORMS += \
    administrator.ui \
    administretor/addpc.ui \
    administretor/createevent.ui \
    administretor/eventinfo.ui \
    administretor/pcinfo.ui \
    administretor/roominfo.ui \
    administretor/teameventinfo.ui \
    login.ui \
    register.ui \
    stucenter.ui \
    studentPage/createteam.ui \
    studentPage/enrollevent.ui \
    studentPage/infoteam.ui \
    studentPage/modifyteam.ui \
    studentPage/stuinfo.ui \
    teacherPage/teacherinfo.ui \
    teachercenter.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
