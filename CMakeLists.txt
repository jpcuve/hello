cmake_minimum_required(VERSION 3.5)
project(hello)

set(CMAKE_CXX_STANDARD 11)
find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
# Add other flags to the compiler
add_definitions(${GTKMM_CFLAGS_OTHER})


set(SOURCE_FILES main.cpp HelloWorldWindow.cpp HelloWorldWindow.h SwitchWindow.cpp SwitchWindow.h)
add_executable(hello ${SOURCE_FILES})
target_link_libraries(hello ${GTKMM_LIBRARIES})
