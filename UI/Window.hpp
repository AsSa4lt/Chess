//
// Created by Rostyslav on 21.09.2023.
//
#include <SFML/Graphics.hpp>
#include "TGUI/TGUI.hpp"
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <raymath.h>
#ifndef CHESS_WINDOW_HPP
#define CHESS_WINDOW_HPP


class Window {
public:
    Window();
    int getWidth();
    void setWidth(int _width);
    int getHeight();
    void setHeight(int _height);

    sf::RenderWindow& getWindow();

    void CreateWindow();
    void Update();

private:
    int height = 0;
    int width = 0;
    sf::RenderWindow window;
    tgui::Gui gui;
    static const int fps = 60;
};



#endif //CHESS_WINDOW_HPP
