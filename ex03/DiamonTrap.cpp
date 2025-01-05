#include "DiamonTrap.hpp"

DiamonTrap::DiamonTrap() : ClapTrap("Default_clap_name")
{
    this->_Name = "Default ClapTrap";
    this->_AttackDamage = FragTrap::_AttackDamage;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_Hintpoints =  FragTrap::_Hintpoints;
    std::cout << "DiamonTrap Constructor is Called" << std::endl;
}
DiamonTrap::DiamonTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->_Name = name;
    this->_AttackDamage = FragTrap::_AttackDamage;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_Hintpoints =  FragTrap::_Hintpoints;
    std::cout << "DiamonTrap name "<< this->_Name << "Constructor is Called" << std::endl;
}
DiamonTrap::DiamonTrap(const DiamonTrap &copy) : ClapTrap(copy) , FragTrap(copy) , ScavTrap(copy)
{
    *this = copy;
    std::cout << "DiamonTrap copy  Constructor is Called" << std::endl;
}
DiamonTrap &DiamonTrap::operator=(const DiamonTrap &copy)
{
    this->_Name = copy._Name + "_clap_name";
    this->_AttackDamage = copy._AttackDamage;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_Hintpoints =  copy._Hintpoints;
    return(*this);
}
void DiamonTrap::attack(std::string &target)
{
    ScavTrap::attack(target);
}
void DiamonTrap::whoAmI()
{
    std::cout << "My names's " << this->_Name << "and i am from Diamond ClapTrap" <<std::endl;
    return ;
}

DiamonTrap::~DiamonTrap()
{
      std::cout << "DiamonTrap DeConstructor , By :)" << std::endl;
}