#ifndef DIAMONTRAP_HPP
#  define DIAMONTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamonTrap : public FragTrap , public ScavTrap
{
    private:
        std::string _Name;
    public:
        DiamonTrap();
        DiamonTrap(std::string name);
        DiamonTrap(const DiamonTrap &copy);
        DiamonTrap& operator=(const DiamonTrap &copy);
        virtual ~DiamonTrap();
        void attack(std::string &target);
        void whoAmI();
};


#endif