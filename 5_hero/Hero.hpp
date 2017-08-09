//Hero class specification file
#ifndef HERO_HPP
#define HERO_HPP

//Hero class declaration
class Hero
{
  private:
      int strength, hitPoints, speed, money;

  public:
      Hero();                           //default constructor
      Hero (int, int, int, int);        //overloaded constructor
      void setStrength(int);
      void setHitPoints(int);
      void setSpeed(int);
      void setMoney(int);
      int getStrength();
      int getHitPoints();
      int getSpeed();
      int getMoney();
      bool takeDamage(int);
};
#endif // HERO_HPP
