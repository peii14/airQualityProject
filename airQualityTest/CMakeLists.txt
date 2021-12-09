CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

PROJECT(validation
        LANGUAGES CXX)


find_package(Qt5Test REQUIRED)
find_package(Qt5Gui REQUIRED)
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
SET(CMAKE_AUTOMOC ON)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_STANDARD 11)
ENABLE_TESTING()

add_executable(${PROJECT_NAME} tst_validation.cpp)
add_test(${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Gui Qt5::Test  ${QT_LIBRARIES}
    ${catkin_LIBRARIES}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::Qml
    Qt5::Quick
    Qt5::Positioning)

