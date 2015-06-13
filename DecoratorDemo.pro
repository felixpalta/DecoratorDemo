TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    espresso.cpp \
    houseblend.cpp \
    darkroast.cpp \
    decaf.cpp \
    mocha.cpp

*g++*{
QMAKE_CXXFLAGS +=   -Weffc++ -std=c++11 -pedantic -Wall -Wextra \
                    -Wunreachable-code -Wshadow \
                    -Wold-style-cast -Wnon-virtual-dtor  \
                    -Woverloaded-virtual \
                    -Wenum-compare  \
                                        #OFF for QT
                    -Wctor-dtor-privacy	\
                    -Wsign-conversion  \
                    -Wconversion \
}

HEADERS += \
    beverage.h \
    condimentdecorator.h \
    espresso.h \
    houseblend.h \
    darkroast.h \
    decaf.h \
    mocha.h
