//
// Created by Rostyslav on 01.10.2023.
//
#include "SFML/Graphics.hpp"

#ifndef CHESS_SQUARE_HPP
#define CHESS_SQUARE_HPP


class Square {
public:
    Square(sf::Color color, sf::Vector2f& size, sf::Vector2f& position);
private:
    sf::RectangleShape _rectangle;
    sf::Color& _color;
    sf::Vector2f& _size;
    sf::Vector2f& _position;
};


#endif //CHESS_SQUARE_HPP
