#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_AttackDamage = 20;
    this->_EnergyPoints = 50;
    this->_Hintpoints = 100;
    std::cout << "ScarvTrap Constructor is Called" << std::endl;

}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_AttackDamage = 20;
    this->_EnergyPoints = 50;
    this->_Hintpoints = 100;
    std::cout << "ScarvTrap "<< this->_Name <<" Constructor is Called" << std::endl;

}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
     *this = copy;
     std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
        this->_AttackDamage = copy._AttackDamage;
        this->_EnergyPoints = copy._EnergyPoints;
        this->_Hintpoints = copy._Hintpoints;
        this->_Name = copy._Name;
      return(*this);
}

ScavTrap::~ScavTrap()
{
     std::cout << "ScarvTrap Deconstructor , by :)" << std::endl; 
}

void ScavTrap::attack(const std::string& target)
    {
        if(this->_EnergyPoints <= 0 )
            std::cout << "it's over , I can't attack (No Energie Points Left) :(" << std::endl;
        else if( this->_Hintpoints <= 0){
             std::cout << "it's over , I can't attack (No Hint Points Left) :(" << std::endl;
        }
        else{
             std::cout << "ScavTrap "  << this->_Name << " attacks " << target <<", causing "  << this->_AttackDamage << " points of damage!" <<  std::endl;
                this->_Hintpoints--;
                this->_EnergyPoints--;
        }
        return ;
    }
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" <<std::endl;
    return;
}