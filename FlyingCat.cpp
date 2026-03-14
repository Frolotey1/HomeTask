#include "FlyingCat.h"

FlyingCat::FlyingCat() = default;
FlyingCat::FlyingCat(const std::string flyingcat_name, const std::string type) {
    this->flyingcat_name = flyingcat_name;
    this->type = type;
}
std::string FlyingCat::get_flyingcat_name() const {return this->flyingcat_name;}
std::string FlyingCat::get_type() const {return this->type;}

