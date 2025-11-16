#include "Game.h"
#include <iostream>

Game::Game()
    : window(sf::VideoMode(800, 600), "Simple Game - Hello World!"),
      player(375.0f, 275.0f),
      isMovingUp(false), isMovingDown(false),
      isMovingLeft(false), isMovingRight(false) {

    window.setFramerateLimit(60);
}

void Game::run() {
    sf::Clock clock;

    while (window.isOpen()) {
        float deltaTime = clock.restart().asSeconds();

        processEvents();
        update(deltaTime);
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::KeyPressed:
                handlePlayerInput(event.key.code, true);
                break;
            case sf::Event::KeyReleased:
                handlePlayerInput(event.key.code, false);
                break;
            case sf::Event::Closed:
                window.close();
                break;
        }
    }
}

void Game::update(float deltaTime) {
    player.handleInput();
    player.update(deltaTime);
}

void Game::render() {
    window.clear(sf::Color::Black);
    player.draw(window);
    window.display();
}

void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed) {
    switch (key) {
        case sf::Keyboard::W:
            isMovingUp = isPressed;
            break;
        case sf::Keyboard::S:
            isMovingDown = isPressed;
            break;
        case sf::Keyboard::A:
            isMovingLeft = isPressed;
            break;
        case sf::Keyboard::D:
            isMovingRight = isPressed;
            break;
        case sf::Keyboard::Escape:
            window.close();
            break;
    }
}
