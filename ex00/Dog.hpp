#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog& other);
        Dog &operator=(const Dog &other);
        ~Dog();

        virtual void makeSound() const;
};

#endif

