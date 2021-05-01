cmake_minimum_required(VERSION 3.0.0)
project(quad_tree VERSION 0.1.0)
SET(QTCP_PROJECT_DIR ${PROJECT_SOURCE_DIR})
include(CTest)
enable_testing()

add_executable(quad_tree main.cpp point.h point.cpp node.h node.cpp qtree.h qtree.cpp)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/points.tsv
    ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
