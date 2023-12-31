//
// Created by Rostyslav on 21.09.2023.
//
#include "SFML/System/Vector2.hpp"
#include "vector"
#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP


class Piece {
public:
    int value;
    sf::Vector2i _position;
    virtual std::vector<sf::Vector2i> PossibleMoves();
};


#endif //CHESS_PIECE_HPP
