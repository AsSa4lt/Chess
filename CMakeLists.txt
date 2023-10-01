cmake_minimum_required(VERSION 3.24)
project(Chess)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chess main.cpp UI/Window.cpp UI/Window.hpp Pieces/Piece.cpp Pieces/Piece.hpp Pieces/Rook.cpp Pieces/Rook.hpp Controlers/PiecesController.cpp Controlers/PiecesController.hpp
        UI/Boards/SimpleBoardDrawer.cpp
        UI/Boards/SimpleBoardDrawer.hpp
        UI/Boards/Square.cpp
        UI/Boards/Square.hpp)
include_directories(/usr/local/include)

# Find SFML
find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Chess sfml-system sfml-window sfml-graphics sfml-audio sfml-network)

# Add TGUI
find_package(TGUI REQUIRED)
include_directories(${TGUI_INCLUDE_DIRS})
target_link_libraries(Chess tgui)