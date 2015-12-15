cmake_minimum_required(VERSION 2.8.4)
project(saebim)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(fltk)

if (CYGWIN)
    SET(CMAKE_CXX_FLAGS "-L/usr/local/lib -lzmq")
    SET(FLTK_DIR "C:/cygwin64/usr/include/FL/")
endif ()
if (UNIX)
    find_package(zmq)
endif ()

set(SOURCE_FILES main.cpp fl_connection_panel_ui.cxx fl_connection_panel_ui.h connection_panel_ui.cpp connection_panel_ui.h)
add_executable(saebim ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(saebim zmq fltk)

