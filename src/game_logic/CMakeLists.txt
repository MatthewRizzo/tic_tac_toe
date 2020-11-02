cmake_minimum_required(VERSION 2.8)
project(src)

# Add  every file which are needed to make exe tic_tac_toe
add_executable(tic_tac_toe
    game_runner.cpp
    board.cpp
)

target_link_libraries(tic_tac_toe ${CMAKE_THREAD_LIBS_INIT})

# Google's implementation of Malloc that is "faster" -- optional
if (Tcmalloc_FOUND)
    target_link_libraries(tic_tac_toe ${Tcmalloc_LIBRARIES})
    # Add other binaries that might use this
else()
    message(WARNING "Tcmalloc not found")
endif(Tcmalloc_FOUND)

#SET( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g -pg" )
#SET( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -g -pg" )