#ifndef ANIMAL_H
#define ANIMAL_H
#include "Libraries.h"
class Animal {
    std::string name = "";
    unsigned int age = 0;
    std::string breed = ""; // порода типо
    std::string action = "";
public:
    explicit Animal();
    explicit Animal(std::string name, unsigned int age, std::string breed, std::string action);
    std::string get_name() const;
    unsigned int get_age() const;
    std::string get_breed() const;
    std::string get_action() const;
    void data();
    void set_data(const std::string new_name,const unsigned int age,const std::string set_breed, const std::string action);
};

#endif // ANIMAL_H
