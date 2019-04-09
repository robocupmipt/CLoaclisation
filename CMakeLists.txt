# Copyright (C) 2011 Aldebaran Robotics
cmake_minimum_required(VERSION 2.6.4 FATAL_ERROR)

# Define the name of the project
project(remoteloc)

# This include enable you to use qibuild framework
find_package(qibuild)


# Create a list of source files
set(_srcs
        src/kernelcloc.cpp
        src/remoteloc.cpp
        include/config.h
        include/kernelcloc.h
        include/remoteloc.h
        messenger/Custom.cpp
        main.cpp
        )



# Add a compile flag because code changes a little bit
# when we are compiling an executable
# This will let you use #ifdef HELLOWORLD_IS_REMOTE
# in the C++ code
add_definitions( " -DCLOCALIZATION_IS_REMOTE")

# Create an executable
qi_create_bin(remoteloc ${_srcs})

# Tell CMake that sayhelloworld depends on ALCOMMON and
# ALPROXIES.
# This will set the libraries to link sayhelloworld with,
# the include paths, and so on
target_include_directories(remoteloc PUBLIC "include")
qi_use_lib(remoteloc ALCOMMON ALPROXIES ALVISION OPENCV3_CORE OPENCV3_HIGHGUI OPENCV3_IMGCODECS OPENCV3_IMGPROC OPENCV3_OBJDETECT )
