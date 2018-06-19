TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    Type1.cpp \
    Type2.cpp \
    Type3.cpp \
    TypeNode.cpp \
    FactoryTypes.cpp \
    Type.cpp \
    Helper.cpp

HEADERS += \
    Type1.h \
    Type2.h \
    Type3.h \
    TypeNode.h \
    FactoryTypes.h \
    Type.h \
    Helper.h
