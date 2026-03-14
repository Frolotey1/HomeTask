#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"

class Bird : public Animal {
    std::string bird_name = "";
    unsigned int bird_age = 0;
    std::string bird_breed = "";
    std::string bird_action = "";
public:
    explicit Bird();
    explicit Bird(const std::string bird_name, const unsigned int bird_age, const std::string bird_breed, const std::string bird_action);
    void fly(const std::string&& set_fly);
    void peck(const std::string&& set_peck); // клевать
    std::string get_bird_name() const;
    unsigned int get_bird_age() const;
    std::string get_bird_breed() const;
    std::string get_bird_action() const;
    Bird(const Bird& other_bird);
};

#endif // BIRD_H
