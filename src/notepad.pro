TEMPLATE = app
TARGET = notepad

qtHaveModule(printsupport): QT += printsupport
requires(qtConfig(fontdialog))

SOURCES += \
    controller.cpp \
    crdt.cpp \
    crdtTest.cpp \
    main.cpp\
    messenger.cpp \
    messengerTest.cpp \
    notepad.cpp \
    vvector.cpp

HEADERS += notepad.h \
    controller.h \
    crdt.h \
    crdtTest.h \
    messenger.h \
    messengerTest.h \
    vvector.h

FORMS += notepad.ui

RESOURCES += \
    notepad.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tutorials/notepad
INSTALLS += target

