cmake_minimum_required(VERSION 3.20)
project(airQualityProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Concurrent CONFIG REQUIRED)
find_package(Qt5Positioning CONFIG REQUIRED)
find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

FIND_PACKAGE(Qt5Quick REQUIRED)
FIND_PACKAGE(Qt5Widgets REQUIRED)
FIND_PACKAGE(Qt5Qml REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
#set(QRC_RESOURCES ${CMAKE_CURRENT_SOURCE_DIR} resource.qrc)

file(GLOB MAPS_SRCS *.cpp)
file(GLOB MAPS_HDRS *.h)

qt5_wrap_ui(QT_MOC_UI ui/mainwindow.ui)
qt5_wrap_cpp(QT_MOC_HPP
        ${MAPS_HDRS}
        )

include_directories(
        include
        ${catkin_INCLUDE_DIRS}
        ${Qt5Widgets_INCLUDE_DIRS}
        ${Qt5Core_INCLUDE_DIRS}
        ${Qt5Gui_INCLUDE_DIRS}
        ${Qt5Concurrent_INCLUDE_DIRS}
        ${Eigen_INCLUDE_DIRS}
        ${QtQml_INCLUDE_DIRS}
)
add_library(${PROJECT_NAME}
        ${MAPS_SRCS}
        ${QT_MOC_HPP}
        ${QT_MOC_UI}
        )
#add_executable(airQualityProject main.cpp)
add_executable(${PROJECT_NAME}_node ${MAPS_SRCS} ${QT_MOC_HPP} ${QT_RESOURCES} ${QRC_RESOURCES})
#add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(${PROJECT_NAME}_node
        ${QT_LIBRARIES}
        ${catkin_LIBRARIES}
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Qml
        Qt5::Quick
        Qt5::Positioning
        )

qt5_use_modules(${PROJECT_NAME}_node Widgets Core Gui Concurrent
        QuickWidgets Quick Core Gui Quick Qml
        )


