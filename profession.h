//Scepter of Power
//Algorithm
//1. Intro displays and user is allowed to choose whether to start game, create character,
//   list saved characters, or quit.
//2. If character creation is chosen then user chooses race with error check if race is not
//   correct. Then user chooses class with error check and add character to saved characters.
//3. If list saved characters is chosen then display all saved characters.
//4. If quit is chosen then exit game.
//5. If user chooses start game give user option to choose to progress forward, open inventory
//   ,or list stats.
//End Algorithm

#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
using namespace std;

//Structs
//We need to store multiple items in an inventory. LLL is probably not the best
//choice. Possible options- array of structs with multiple data types, 
/*
struct war_inv
{
   char war_inventory[];
   war_inv * next;
};

struct mag_inv
{
   char mag_inventory[];
   mag_inv * next;
};

struct arc_inv
{
   char arc_inventory[];
   arc_inv * next;
};*/

//*******Possible to have one inventory??*******

//Abstract base class. Race class will hold this and be able to make a specific
//derived class
class Profession
{
    public:
        Profession();
        virtual ~Profession();

    protected:
        int health;

};


//classes
class Warrior: public Profession
{
   public:
        Warrior();
        ~Warrior();
        int war_battle(); 

   protected:
        int rage;
};

class Mage: public Profession
{
   public:
        Mage();
        ~Mage();
        int mag_battle();

   protected:
        int mana;
};

class Archer: public Profession
{
   public:
        Archer();
        ~Archer();
        int arc_battle();

   protected:
        int focus;
};
   
