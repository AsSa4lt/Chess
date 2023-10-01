//
// Created by Rostyslav on 01.10.2023.
//

#include "SimpleBoardDrawer.hpp"

SimpleBoardDrawer::SimpleBoardDrawer(sf::Window &m_window)  : window(m_window){
    int width = window.getSize().x;
    int height = window.getSize().y;
    int step = height / 8;

    int widthStart = width - height;

    for(int i = 0; i < 8; i++){
        std::vector<Square*> line;
        for(int j = 0; j < 8; j++){
            sf::Vector2f* position = new sf::Vector2f(widthStart + i * step, j*step);
            sf::Vector2f* size = new sf::Vector2f(step, step);
            if(i+j%2 == 0) {
                Square* buf = new Square(sf::Color::White, *size, *position);
                line.push_back(buf);
            }else{
                Square* buf = new Square(sf::Color::Black, *size, *position);
                line.push_back(buf);
            }
        }
        board.push_back(line);
    }
}

void SimpleBoardDrawer::Update() {
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
}
