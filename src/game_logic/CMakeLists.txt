cmake_minimum_required(VERSION 2.8)
project(src)

add_library(BOARD
    piece.cpp
    board.cpp
)

# Add  every file which are needed to make exe tic_tac_toe
add_executable(tic_tac_toe
    game_runner.cpp
)

target_link_libraries(tic_tac_toe
    BOARD
    ${CMAKE_THREAD_LIBS_INIT}
)

#SET( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g -pg" )
#SET( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -g -pg" )