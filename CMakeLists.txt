cmake_minimum_required(VERSION 2.8.12)
project(navbar_i3)

set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O3")
set(CMAKE_CXX_FLAGS_RELEASE "-g3 -O3")

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(${PROJECT_NAME}
        src/main.cpp
        include/RunFromTerminal.h
        src/RunFromTerminal.cpp
        qml.qrc)

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Quick)
