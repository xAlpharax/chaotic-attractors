#include "LorenzAttractor.h"
#include <SFML/Graphics.hpp>

int main() {

    /// Create a window

    bool isFullscreen = true;

    sf::RenderWindow window;
        window.create(sf::VideoMode(1980, 1080), "Attractors", (isFullscreen ? sf::Style::Fullscreen : sf::Style::Default), sf::ContextSettings());
        // window.create(sf::VideoMode(1980, 1080), "Attractors", sf::Style::Default, sf::ContextSettings());
        window.setPosition(sf::Vector2i(0, 0));
        window.setVerticalSyncEnabled(true);
        window.setFramerateLimit(144);

    /// Create an instance of the LorenzAttractor class
    LorenzAttractor lorenz;

    /// Run the Lorenz Attractor simulation
    lorenz.run(window);

}
