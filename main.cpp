#include <SFML/Graphics.hpp>
#include "LorenzAttractor.h"

int main() {

    /// Create the window

    bool isFullscreen = true;

    sf::RenderWindow window;
        window.create(sf::VideoMode(1980, 1080), "Chaotic Attractors", (isFullscreen ? sf::Style::Fullscreen : sf::Style::Default), sf::ContextSettings());
        window.setPosition(sf::Vector2i(0, 0));
        window.setVerticalSyncEnabled(true);
        window.setFramerateLimit(60);

    /// Create an instance of the LorenzAttractor class
    LorenzAttractor lorenz;

    /// Run the simulation
    lorenz.run(window);

    /// Profit
}
