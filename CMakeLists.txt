cmake_minimum_required(VERSION 3.16)

project(Wirus VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

add_library(PLUGIN SHARED

)

target_include_directories(PLUGIN PRIVATE
  ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(PLUGIN PRIVATE
  Qt${QT_VERSION_MAJOR}::Widgets

)

set_target_properties(PLUGIN PROPERTIES
    PREFIX ""
)


set_target_properties(PLUGIN PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/plugins
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/plugins
)
