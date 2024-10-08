#ifndef I_CHARACTER_HPP
# define I_CHARACTER_HPP
class AMateria;
# include "AMateria.hpp"

// interface for Character class

class ICharacter
{
    public:

        virtual ~ICharacter() {};
        virtual std::string const & getName() const = 0;
        virtual void equip( AMateria* m ) = 0;
        virtual void unequip( int idx ) = 0;
        virtual void use( int idx, ICharacter& target ) = 0;
};

#endif

