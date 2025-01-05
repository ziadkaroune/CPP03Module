#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
 
     // test ClapTrap Derivee (ScavTrap)
    ScavTrap s("ronaldo");
    s.attack("ziad");
    s.guardGate();


    /* test ClapTrap the base class
    for(int i = 0 ; i < 11 ; i++)
    {
        s.attack(target); // - 1 energie point 
        std::cout << " Energie Point :" << s.showEnergiePoint() << std::endl; // energie points left
    }
      s.beRepaired(5);
      s.takeDamage(10);
   
         std::cout << " Hint Point :" << s.showHintPoint() << std::endl;    //10
        s.attack(target); // -1
         std::cout << " Hint Point :" << s.showHintPoint() << std::endl;   // 9
        s.beRepaired(5); // 9 + 5 =14
        std::cout << " Hint Point :" << s.showHintPoint() << std::endl;  // 14
         s.takeDamage(15); // 14 - 10 = 10
          std::cout << " Hint Point :" << s.showHintPoint() << std::endl;  
        std::cout << " Energie Point :" << s.showEnergiePoint() << std::endl;  // 10 - 1 - 1 = 8
        s.attack(target); 
         std::cout << " Energie Point :" << s.showEnergiePoint() << std::endl;  
      */   
      
    return 0;
}