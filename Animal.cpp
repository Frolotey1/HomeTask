#include "Animal.h"

Animal::Animal() = default;
Animal::Animal(std::string name, unsigned int age, std::string breed, std::string action) {
    this->name = name;
    this->age = age;
    this->breed = breed;
    this->action = action;
}
std::string Animal::get_name() const {return this->name;}
unsigned int Animal::get_age() const {return this->age;}
std::string Animal::get_breed() const {return this->breed;}
std::string Animal::get_action() const {return this->action;}
void Animal::data() {
    std::cout << std::format("Животное '{}' с возрастом {} лет и породой '{}' делает '{}'",get_name(),get_age(),get_breed(),get_action()) << std::endl;
}
void Animal::set_data(const std::string set_name, const unsigned int set_age,const std::string set_breed, const std::string set_action) {
    this->name = set_name;
    this->age = set_age;
    this->breed = set_breed;
    this->action = set_action;
}
