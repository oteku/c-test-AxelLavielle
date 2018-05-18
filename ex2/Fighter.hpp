#include <string>

class Fighter
{
private:
  std::string name;

  int health;

  int damagePerAttack;

public:
  Fighter(std::string name, int health, int damagePerAttack)
  {
    this->name = name;
    this->health = health;
    this->damagePerAttack = damagePerAttack;
  }

  ~Fighter() { };

  std::string getName()
  {
    return name;
  }

  int getHealth()
  {
    return health;
  }

  int getDamagePerAttack()
  {
    return damagePerAttack;
  }

  void setHealth(int value)
  {
    health = value;
  }
};
