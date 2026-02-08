cmake_minimum_required (VERSION 3.31)

include($ENV{ARIEO_BUILDENV_PACKAGE_INSTALL_FOLDER}/cmake/build_environment.cmake)
project(ArieoEngine)

arieo_engine_project(
    arieo_sample_module
    ALIAS arieo::modules::sample
    PROJECT_TYPE module
    SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/private/src/*.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/private/src/*/*.cpp
    INTERFACES
        Arieo-Interface-Sample::arieo_sample_interface
    PRIVATE_LIBS
        arieo::base
        arieo::core
)