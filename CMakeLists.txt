cmake_minimum_required (VERSION 3.31)

arieo_engine_project(
    arieo_sample_module
    ALIAS arieo::modules::sample
    PROJECT_TYPE module
    SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/private/src/*.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/private/src/*/*.cpp
    INTERFACES
        arieo::interface::sample
    LIBS
        arieo::base
        arieo::core
)