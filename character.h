//Cody Herberholz, 4/18/2016
//Holds races

//Stats are held in file when saved



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


class Character
{
    public:
        Character();
        ~Character();
        int characterCreation();
        int assignRole();
        int initAttributes();
        void levelUp();
        void display();

    private:
        int health;
        Attributes stats;
        Features slate;
        char * roleName;

};



class Enemy
{
    public:
        Enemy();

    private:
        int health;
};
