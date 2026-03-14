#ifndef FLYINGCAT_H
#define FLYINGCAT_H
#include "Cat.h"
#include "Bird.h"
class FlyingCat : public Cat, Bird {
    std::string flyingcat_name;
    std::string type;
public:
    explicit FlyingCat();
    explicit FlyingCat(const std::string flyingcat_name, const std::string type);
    std::string get_flyingcat_name() const;
    std::string get_type() const;
};

#endif // FLYINGCAT_H
