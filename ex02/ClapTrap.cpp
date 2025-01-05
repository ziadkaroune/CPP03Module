#include "ClapTrap.hpp"

   ClapTrap::ClapTrap() :_Name("default player") , _AttackDamage(0) , _EnergyPoints(10) , _Hintpoints(10)
   {
        std::cout << "CLapTrap contractor is created" << std::endl;
   }

   ClapTrap::ClapTrap(std::string Name) :_Name(Name) , _AttackDamage(0) , _EnergyPoints(10) , _Hintpoints(10)
   {
      std::cout << "CLapTrap " << this->_Name << " contractor is created" << std::endl;
   }

    ClapTrap::~ClapTrap()
    {
        std::cout << "CLapTrap deconstructor" << std::endl;
    }

     ClapTrap::ClapTrap(const ClapTrap &copy):_Name(copy._Name) , _AttackDamage(copy._AttackDamage) , _EnergyPoints(copy._EnergyPoints) , _Hintpoints(copy._Hintpoints)
     {
            *this = copy;
     }

   
    ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
    {
        this->_AttackDamage = copy._AttackDamage;
        this->_EnergyPoints = copy._EnergyPoints;
        this->_Hintpoints = copy._Hintpoints;
        this->_Name = copy._Name;
      return(*this);
    }
    
    void ClapTrap::attack(const std::string& target)
    {
        if(this->_EnergyPoints <= 0 )
            std::cout << "it's over , I can't attack (No Energie Points Left) :(" << std::endl;
        else if( this->_Hintpoints <= 0){
             std::cout << "it's over , I can't attack (No Hint Points Left) :(" << std::endl;
        }
        else{
             std::cout << "ClapTrap "  << this->_Name << " attacks " << target <<", causing "  << this->_AttackDamage << " points of damage!" <<  std::endl;
                this->_Hintpoints--;
                this->_EnergyPoints--;
        }
        return ;
    }
    void ClapTrap::takeDamage(unsigned int amount)
    {
            if(this->_Hintpoints > amount)
                this->_Hintpoints -= amount; 
            else    
                 this->_Hintpoints = 0;  // more logical not be nagative points
            std::cout << this->_Name << "was attacked , Hints point(s) left : " << this->_Hintpoints << " points" << std::endl;
        return ;
    }
    void  ClapTrap::beRepaired(unsigned int amount)
    {
        if(this->_EnergyPoints <= 0)
            std::cout << "i can't repair myself no Energie points left" << std::endl;
        std::cout << "ClapTrap "  << this->_Name << " is repared , (+ " << amount <<  " )"<< std::endl;
        this->_Hintpoints += amount;
         this->_EnergyPoints--;
        return ;
    }

    int ClapTrap::showEnergiePoint()
    {
        if(this->_EnergyPoints < 0)
            return 0;
        return this->_EnergyPoints;
    }
    int ClapTrap::showHintPoint()
    {
        if(this->_Hintpoints < 0)
            return 0;
        return this->_Hintpoints;
    }