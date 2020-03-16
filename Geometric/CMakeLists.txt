#
# The interface of pose graph by Ceres And G2O  
# Author: Kang Yifei
# Email: ccyclonel@126.com
#
cmake_minimum_required( VERSION 2.8 )
project(Geometric)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(${PROJECT_NAME} src/euler_function.cc)