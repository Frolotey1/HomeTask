#include "Bird.h"

Bird::Bird() = default;
Bird::Bird(const std::string bird_name, const unsigned int bird_age, const std::string bird_breed, const std::string bird_action) {
    this->bird_name = bird_name;
    this->bird_age = bird_age;
    this->bird_breed = bird_breed;
    this->bird_action = bird_action;
}
Bird::Bird(const Bird& other_bird) {
    this->bird_name = other_bird.bird_name;
    this->bird_age = other_bird.bird_age;
    this->bird_breed = other_bird.bird_breed;
    this->bird_action = other_bird.bird_action;
}
void Bird::fly(const std::string&& set_fly) {
    std::cout << set_fly << std::endl;
}
void Bird::peck(const std::string&& set_peck) {
    std::cout << set_peck << std::endl;
}
std::string Bird::get_bird_name() const {return this->bird_name;}
unsigned int Bird::get_bird_age() const {return this->bird_age;}
std::string Bird::get_bird_breed() const {return this->bird_breed;}
std::string Bird::get_bird_action() const {return this->bird_action;}

