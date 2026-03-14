#include "Cat.h"
#include "Dog.h"
#include "Bird.h"
#include "FlyingCat.h"

int main() {
    Dog dog{"Hund",12,"DeutschSchafer","Gaf"};
    dog.set_data(dog.get_dog_name(),dog.get_dog_age(),dog.get_dog_breed(),dog.get_dog_action());
    dog.data();

    Cat cat{"Katze",11,"Seamsisch","Meow"};
    cat.set_data(cat.get_cat_name(),cat.get_cat_age(),cat.get_cat_breed(),cat.get_cat_action());
    cat.data();

    Bird bird{"Adler",8,"Vogel","Kar"};
    bird.set_data(bird.get_bird_name(),bird.get_bird_age(),bird.get_bird_breed(),bird.get_bird_action());
    bird.data();

    FlyingCat flyingcat{"Vogelkatze","komisch"};
    std::cout << "Имя: " << flyingcat.get_flyingcat_name() << "\n";
    std::cout << "Тип: " << flyingcat.get_type() << std::endl;

    return 0;
}
