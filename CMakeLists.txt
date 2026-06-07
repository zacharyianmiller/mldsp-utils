cmake_minimum_required(VERSION 3.15)

project(mldsp-utils)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(mldsp-utils STATIC)

target_sources(mldsp-utils
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/modules/math/mldsp_Math.cpp
)

target_include_directories(mldsp-utils
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/modules/math
        # ${CMAKE_CURRENT_SOURCE_DIR}/modules/dsp
)