cmake_minimum_required(VERSION 2.8)

# Set the project name
project(tic_tac_toe)

# =================================== load Dependencies globally for all subdirs ===================================
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/src/cmake")

# Find the packages
# find_package(BoostLib REQUIRED) # uses FindBoost.cmake in cmake dir
find_package(CLI11 REQUIRED) # using https://cliutils.gitlab.io/CLI11Tutorial/

# Include the package's header files
include_directories(${CLI11_INCLUDE_DIR})
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src/includes") # contains OUR headers


# ============================================ Build individual subdirs ============================================
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin) # store produce binaries in src/bin/*
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# add more folders here as needed (i.e. game_logic/src)
add_subdirectory(src/game_logic)
