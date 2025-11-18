#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player {
public:
    Player(float x, float y);

    void update(float deltaTime);
    void handleInput();
    void draw(sf::RenderWindow& window);

    sf::Vector2f getPosition() const;
    sf::FloatRect getBounds() const;
    void setPosition(const sf::Vector2f& position);

private:
    sf::RectangleShape shape;
    sf::Vector2f velocity;
    float speed;
};

#endif
