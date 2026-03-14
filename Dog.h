#ifndef DOG_H
#define DOG_H
#include "Animal.h"
class Dog : public Animal {
    std::string dog_name = "";
    unsigned int dog_age = 0;
    std::string dog_breed = "";
    std::string dog_action = "";
public:
    explicit Dog();
    explicit Dog(const std::string dog_name, const unsigned int dog_age, const std::string dog_breed, const std::string dog_action);
    void chew_a_bone(const std::string&& set_chew_a_bone); // грызть косточку
    void bite(const std::string&& set_bite); // кусаться
    void wash(const std::string&& set_wash); // мыться
    std::string get_dog_name() const;
    unsigned int get_dog_age() const;
    std::string get_dog_breed() const;
    std::string get_dog_action() const;
    Dog(const Dog& other_dog);
};

#endif // DOG_H
