cmake_minimum_required(VERSION 3.10)

# Enable group projects in folders
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "cmake")

set(Boost_DIR C:/local/Boost_1_80_0)
set(Boost_INCLUDE_DIR C:/local/Boost_1_80_0)
set(Boost_FILESYSTEM_LIBRARY_RELEASE C:/local/Boost_1_80_0/lib64-msvc-14.3/libboost_filesystem-vc143-mt-x64-1_80.lib)
set(Boost_FILESYSTEM_LIBRARY_DEBUG C:/local/Boost_1_80_0/lib64-msvc-14.3/libboost_filesystem-vc143-mt-gd-x64-1_80.lib)
set(Boost_LIBRARY_DIR_DEBUG C:/local/Boost_1_80_0/lib64-msvc-14.3)
set(Boost_LIBRARY_DIR_RELEASE C:/local/Boost_1_80_0/lib64-msvc-14.3)

set(FLEX_EXECUTABLE C:/local/WinFlexBison/win_flex.exe)
set(BISON_EXECUTABLE C:/local/WinFlexBison/win_bison.exe)

project(rigisim)

set(CMAKE_CXX_STANDARD 11)

add_executable(rigisim WIN32
    # Source files
    src/main.cpp
    src/utils.cpp
    src/rigisim_application.cpp
    src/logger.cpp

    # Include files
    include/delta.h
    include/utils.h
    include/info.h
    include/logger.h
    include/rigisim_application.h
)

target_link_libraries(rigisim
    delta-basic
    delta-physics
    simple-2d-constraint-solver )

target_include_directories(rigisim
    PUBLIC dependencies/submodules)

add_subdirectory(dependencies)
