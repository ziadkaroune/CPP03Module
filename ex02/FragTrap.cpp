#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_AttackDamage = 30;
    this->_EnergyPoints = 100;
    this->_Hintpoints = 100;
    std::cout << "FragTrap Constructor is Called" << std::endl;

}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_AttackDamage = 30;
    this->_EnergyPoints = 100;
    this->_Hintpoints = 100;
    std::cout << "FragTrap "<< this->_Name <<" Constructor is Called" << std::endl;

}
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
     *this = copy;
     std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
        this->_AttackDamage = copy._AttackDamage;
        this->_EnergyPoints = copy._EnergyPoints;
        this->_Hintpoints = copy._Hintpoints;
        this->_Name = copy._Name;
      return(*this);
}

FragTrap::~FragTrap()
{
     std::cout << "FragTrap Deconstructor , by :)" << std::endl; 
}
 void FragTrap::highFivesGuys(void)
 {
        std::cout << "FragTrap requests a high five! " << std::endl;
 }
 