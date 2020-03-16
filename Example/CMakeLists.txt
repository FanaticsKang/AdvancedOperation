#
# Author: Kang Yifei
# Email: ccyclonel@126.com
#

cmake_minimum_required( VERSION 2.8 )
project(Example)

# CMake source could not be same with cmake binary.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create a separate directory for build files.
")
endif()

#set( CMAKE_BUILD_TYPE "Debug" )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )
include_directories(${PROJECT_SOURCE_DIR}/..)

set(Lib ${PROJECT_SOURCE_DIR}/../lib/libGeometric.a)

add_executable(Point2Line Geometric/point2line.cc)
target_link_libraries(Point2Line ${Lib})