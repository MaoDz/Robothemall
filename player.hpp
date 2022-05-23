#ifndef PLAYER_H
#define PLAYER_H

#include "character.hpp"
#include "renderer.hpp"
#include "renderer_interface.hpp"
#include <cmath>
#include <iostream>
#include "foes.hpp"
#include <vector>
#include <sys/time.h>
#include <ctime>

using namespace std;

class Player : virtual public Character{
  private :
    bool up,right,down,left, _shoot, _shootDelay;
    struct timeval previousShot, currentShot;
    sf::Clock timeCounter;
    std::vector<sf::Keyboard::Key> command4Direction;

  public :
    Player(int health,sf::Vector2f position, float speed);
    //~Player();
    void display(Renderer& r) const { r.displayEntity(*this);}


    void move(sf::Event& event, sf::Time& dt, Map& map);
    void shoot(Map& map);
    void shootDelay();
    // ACCESSEURS


};

#endif
