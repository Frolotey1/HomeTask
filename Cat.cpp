#include "Cat.h"

Cat::Cat() = default;
Cat::Cat(const std::string cat_name, const unsigned int cat_age, const std::string cat_breed, const std::string cat_action) {
    this->cat_name = cat_name;
    this->cat_age = cat_age;
    this->cat_breed = cat_breed;
    this->cat_action = cat_action;
}
Cat::Cat(const Cat& other_cat) {
    this->cat_name = other_cat.cat_name;
    this->cat_age = other_cat.cat_age;
    this->cat_breed = other_cat.cat_breed;
    this->cat_action = other_cat.cat_action;
}
void Cat::purr(const std::string&& set_purr) {
    std::cout << set_purr << std::endl;
}
void Cat::scratch(const std::string&& set_scratch) {
    std::cout << set_scratch << std::endl;
}
void Cat::wash(const std::string&& set_wash) {
    std::cout << set_wash << std::endl;
}
std::string Cat::get_cat_name() const {return this->cat_name;}
unsigned int Cat::get_cat_age() const {return this->cat_age;}
std::string Cat::get_cat_breed() const {return this->cat_breed;}
std::string Cat::get_cat_action() const {return this->cat_action;}



