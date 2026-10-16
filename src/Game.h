
#ifndef SFML_GAME_H
#define SFML_GAME_H

#include <SFML/Graphics.hpp>

class Game
{
 public:
  Game(sf::RenderWindow& window);
  ~Game();
  bool init();
  void update(float dt);
  void render();
  void mouseButtonPressed(const sf::Event::MouseButtonPressed* event);
  void mouseButtonReleased(const sf::Event::MouseButtonReleased* event);
  void keyPressed(const sf::Event::KeyPressed* event);
  void keyReleased(const sf::Event::KeyReleased* event);
  void newAnimal();
  void dragSprite(sf::Sprite* sprite);

  bool should_accept;

  sf::Sprite* dragged = nullptr;
  sf::Vector2f drag_offset;

  //controlls
  bool spaceKey = false;


  //sprites/textures
  sf::Sprite* character;
  sf::Sprite* passport;

  sf::Texture* animals = new sf::Texture[3];
  sf::Texture* passports = new sf::Texture[3];

 private:
  sf::RenderWindow& window;
  
  sf::Texture background_texture;
  sf::Sprite background = sf::Sprite(background_texture);

};

#endif // SFML_GAME_H
