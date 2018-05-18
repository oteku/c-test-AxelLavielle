#include <iostream>
#include "Fighter.hpp"



std::string fight(Fighter fighter1, Fighter fighter2)
{
  bool turn = true;
  
  while (fighter1.getHealth() > 0 && fighter2.getHealth() > 0)
    {
      if (turn)
	fighter2.setHealth(fighter2.getHealth() - fighter1.getDamagePerAttack());
      else
	fighter1.setHealth(fighter1.getHealth() - fighter2.getDamagePerAttack());
      turn = !turn;
    }
  if (fighter1.getHealth() > 0)
    return (fighter1.getName());
  return (fighter2.getName());
}

int main(int ac, char **av)
{
  Fighter f1("Fighter 1", 34, 3);
  Fighter f2("Fighter 2", 35, 3);

  std::cout << fight(f1, f2) << std::endl;
}
