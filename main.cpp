#include <iostream>
#include <SFML/Graphics.hpp>
#include "UI/Window.hpp"

int main() {
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    Window mainWindow;
    mainWindow.setWidth(desktop.width);
    mainWindow.setHeight(desktop.height);
    mainWindow.CreateWindow();

    mainWindow.Update();
    return 0;
}
