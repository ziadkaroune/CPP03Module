#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    protected:
       std::string _Name;
       int _AttackDamage;
       int _EnergyPoints;
       int _Hintpoints;
    public:
    ClapTrap(); // constructor
    ClapTrap(std::string Name); 
    ClapTrap(const ClapTrap &copy); // copy constructor
    ClapTrap& operator=(const ClapTrap &copy); //copy assignment operator
    ~ClapTrap(); // desconstrcutor

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int showEnergiePoint();
    int showHintPoint();
};


#endif