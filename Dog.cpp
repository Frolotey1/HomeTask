#include "Dog.h"

Dog::Dog() = default;
Dog::Dog(const std::string dog_name, const unsigned int dog_age, const std::string dog_breed, const std::string dog_action) {
    this->dog_name = dog_name;
    this->dog_age = dog_age;
    this->dog_breed = dog_breed;
    this->dog_action = dog_action;
}
Dog::Dog(const Dog& other_dog) {
    this->dog_name = other_dog.dog_name;
    this->dog_age = other_dog.dog_age;
    this->dog_breed = other_dog.dog_breed;
    this->dog_action = other_dog.dog_action;
}
void Dog::chew_a_bone(const std::string&& set_chew_a_bone) {
    std::cout << set_chew_a_bone << std::endl;
}
void Dog::bite(const std::string&& set_bite) {
    std::cout << set_bite << std::endl;
}
void Dog::wash(const std::string&& set_wash) {
    std::cout << set_wash << std::endl;
}
std::string Dog::get_dog_name() const {return this->dog_name;}
unsigned int Dog::get_dog_age() const {return this->dog_age;}
std::string Dog::get_dog_breed() const {return this->dog_breed;}
std::string Dog::get_dog_action() const {return this->dog_action;}

