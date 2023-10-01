//
// Created by Rostyslav on 01.10.2023.
//

#include "Square.hpp"

Square::Square(sf::Color color, sf::Vector2f &size, sf::Vector2f &position) :_color(color), _size(size), _position(position) {
    _rectangle.setSize(_size);
    _rectangle.setPosition(_position);
    _rectangle.setFillColor(_color);
}

