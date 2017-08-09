/* Natalia Q. Echeverri - CS161
Write a class called Hero that represents an adventure game character. A Hero should have fields for its strength, hit points,
speed and money. There should be set and get methods for each field, and a constructor that takes four integer values and passes
them to the relevant set methods. The default constructor should set each field to 1. There should be a method called takeDamage
that takes an int as a parameter and subtracts that amount from a Hero's hit points (using the appropriate set method) and return
true if the Hero is still alive (more than 0 hit points), but false otherwise.
Write a main method (in the .cpp file) that asks the user for values of the hero's attributes and uses them to create a Hero
object. You should then have a loop that asks the user how much damage the Hero sustained, makes the Hero sustain that damage,
and prints out the Hero's attributes (all of them, even though only one of them is changing). When the Hero dies, the loop should
end and you should print out that the Hero has met an untimely demise (or words to that effect).
Input validation: none required */

#include <iostream>
#include "Hero.hpp"

using namespace std;

Hero::Hero(){                        //default constructor
    setStrength(1);
    setHitPoints(1);
    setSpeed(1);
    setMoney(1);
}

Hero::Hero(int strengthIn, int hitPointsIn, int speedIn, int moneyIn){       //overloaded constructor
    setStrength(strengthIn);
    setHitPoints(hitPointsIn);
    setSpeed(speedIn);
    setMoney(moneyIn);
}

void Hero::setStrength(int strengthIn){
    strength = strengthIn;
}

void Hero::setHitPoints(int hitPointsIn){
    hitPoints = hitPointsIn;
}

void Hero::setSpeed(int speedIn){
    speed = speedIn;
}

void Hero::setMoney(int moneyIn){
    money = moneyIn;
}

int Hero::getStrength(){
    return strength;
}

int Hero::getHitPoints(){
    return hitPoints;
}

int Hero::getSpeed(){
    return speed;
}

int Hero::getMoney(){
    return money;
}

bool Hero::takeDamage(int damageIn){

    int damage;

    damage = getHitPoints();
    damage -= damageIn;
    setHitPoints(damage);

    if (hitPoints <= 0)
        return false;
        else
            return true;
}


int main (){

    int userStrength, userHitPoints, userSpeed, userMoney, userDamage;
    bool stillAlive;

    cout << "Let's create your hero!" << endl;
    cout << "Initial Strength: ";
    cin >> userStrength;
    cout << "Initial Hit Points: ";
    cin >> userHitPoints;
    cout << "Initial Speed: ";
    cin >> userSpeed;
    cout << "initial Money: ";
    cin >> userMoney;
    cout << endl;

    Hero userHero;

    userHero.setStrength(userStrength);
    userHero.setHitPoints(userHitPoints);
    userHero.setSpeed(userSpeed);
    userHero.setMoney(userMoney);

   do{
    cout << endl;
    cout << "Damage sustained: ";
    cin >> userDamage;
    stillAlive = userHero.takeDamage(userDamage);
    cout << endl;
    cout << "Strength: " << userHero.getStrength() << endl;
    cout << "Hit Points: " << userHero.getHitPoints() << endl;
    cout << "Speed: " << userHero.getSpeed() << endl;
    cout << "Money: " << userHero.getMoney() << endl;
    } while (stillAlive == true);

    cout << "Sorry! Your hero has deceased." << endl;

    return 0;

}
