cmake_minimum_required(VERSION 3.20)
project(airQualityProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

#find_package(Qt5Test REQUIRED)
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

#enable_testing(true)
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
#add_test(NAME ${PROJECT_NAME}_node COMMAND ${PROJECT_NAME}_node )
target_link_libraries(${PROJECT_NAME}_node
        ${QT_LIBRARIES}
        ${catkin_LIBRARIES}
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Qml
        Qt5::Quick
        Qt5::Positioning
#        Qt5::Test
        )

qt5_use_modules(${PROJECT_NAME}_node Widgets Core Gui Concurrent
        QuickWidgets Quick Core Gui Quick Qml
        )
SET(COVERAGE_FLAGS "--cs-on --cs-count")
SET(CMAKE_CXX_FLAGS_COVERAGE
        "${CMAKE_CXX_FLAGS_RELEASE} ${COVERAGE_FLAGS}" CACHE STRING
        "Flags used by the C++ compiler during coverage builds."
        FORCE )
SET(CMAKE_C_FLAGS_COVERAGE
        "${CMAKE_C_FLAGS_RELEASE} ${COVERAGE_FLAGS}" CACHE STRING
        "Flags used by the C compiler during coverage builds."
        FORCE )
SET(CMAKE_EXE_LINKER_FLAGS_COVERAGE
        "${CMAKE_EXE_LINKER_FLAGS_RELEASE} ${COVERAGE_FLAGS}" CACHE STRING
        "Flags used for linking binaries during coverage builds."
        FORCE )
SET(CMAKE_SHARED_LINKER_FLAGS_COVERAGE
        "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} ${COVERAGE_FLAGS}" CACHE STRING
        "Flags used by the shared libraries linker during coverage builds."
        FORCE )
SET( CMAKE_STATIC_LINKER_FLAGS_COVERAGE
        "${CMAKE_STATIC_LINKER_FLAGS_RELEASE} ${COVERAGE_FLAGS}" CACHE STRING
        "Flags used by the static libraries linker during coverage builds."
        FORCE )
MARK_AS_ADVANCED(
        CMAKE_CXX_FLAGS_COVERAGE
        CMAKE_C_FLAGS_COVERAGE
        CMAKE_EXE_LINKER_FLAGS_COVERAGE
        CMAKE_SHARED_LINKER_FLAGS_COVERAGE
        CMAKE_STATIC_LINKER_FLAGS_COVERAGE
        COMPILE_DEFINITIONS_COVERAGE
)

