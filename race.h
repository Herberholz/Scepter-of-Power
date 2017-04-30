//Cody Herberholz, 4/18/2016
//Holds races

//Stats are held in file when saved

#include "profession.h"

struct Attributes
{
    int strength;
    int dexterity;
    int vitality;
    int intelligence;
    int wisdom;
    int charisma;
};

struct Features
{
    int initiative;
    int armor;
    int damage;
};


class Race
{
    public:
        Race();
        virtual ~Race();
        int new_profession();
        int assignValues(int choice);
        void displayRole();
        void displayStats();

    protected:
        Attributes stats;
        Features slate;
        Profession * role;
        char * roleName;
};

//use human to create a profession via role
class Human: public Race
{
    public:
        Human();
        ~Human();

    protected:

};

class Elf: public Race
{
    public:
        Elf();
        ~Elf();

    protected:

};

class Orc: public Race
{
    public:
        Orc();
        ~Orc();

    protected:

};
