cmake_minimum_required (VERSION 2.6)
project (quiz1)

#add_library(mesher SHARED mesher.cpp)

#add_library(solver solver.cpp)

add_executable(quiz1 quiz1.cpp)
target_link_libraries(quiz1)
