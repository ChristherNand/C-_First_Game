#include "Player.h"

Player::Player(float x, float y)
    : speed(200.0f) {
    shape.setSize(sf::Vector2f(50.0f, 50.0f));
    shape.setFillColor(sf::Color::Blue);
    shape.setPosition(x, y);
    velocity = sf::Vector2f(0.0f, 0.0f);
}

void Player::update(float deltaTime) {
    // Apply velocity to position
    shape.move(velocity * deltaTime);

    // Keep player within window bounds (assuming 800x600 window)
    sf::Vector2f pos = shape.getPosition();
    if (pos.x < 0) pos.x = 0;
    if (pos.y < 0) pos.y = 0;
    if (pos.x > 750) pos.x = 750;  // 800 - 50 (player width)
    if (pos.y > 550) pos.y = 550;  // 600 - 50 (player height)
    shape.setPosition(pos);
}

void Player::handleInput() {
    velocity = sf::Vector2f(0.0f, 0.0f);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        velocity.x = -speed;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        velocity.x = speed;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        velocity.y = -speed;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        velocity.y = speed;
    }
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(shape);
}

sf::Vector2f Player::getPosition() const {
    return shape.getPosition();
}

sf::FloatRect Player::getBounds() const {
    return shape.getGlobalBounds();
}
