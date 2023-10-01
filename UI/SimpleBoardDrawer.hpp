//
// Created by Rostyslav on 01.10.2023.
//
#include <SFML/Graphics.hpp>
#ifndef CHESS_SIMPLEBOARDDRAWER_HPP
#define CHESS_SIMPLEBOARDDRAWER_HPP


class SimpleBoardDrawer {
public:
    explicit SimpleBoardDrawer(sf::Window& m_window);
    void Update();
private:
    sf::Window& window;
};


#endif //CHESS_SIMPLEBOARDDRAWER_HPP
