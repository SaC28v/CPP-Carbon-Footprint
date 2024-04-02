TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bicicleta.cpp \
        edificio.cpp \
        main.cpp \
        vehiculo.cpp

HEADERS += \
    IHuellaCarbono.h \
    bicicleta.h \
    edificio.h \
    vehiculo.h
