#ifndef CAT_H
#define CAT_H
#include "Animal.h"
class Cat : public Animal {
    std::string cat_name = "";
    unsigned int cat_age = 0;
    std::string cat_breed = "";
    std::string cat_action = "";
public:
    explicit Cat();
    explicit Cat(const std::string cat_name, const unsigned int cat_age, const std::string cat_breed, const std::string cat_action);
    void purr(const std::string&& set_purr); // мурчание
    void scratch(const std::string&& set_scratch); // царапание
    void wash(const std::string&& set_wash); // мыться
    std::string get_cat_name() const;
    unsigned int get_cat_age() const;
    std::string get_cat_breed() const;
    std::string get_cat_action() const;
    Cat(const Cat& other_cat);
};

#endif // CAT_H
