#include "race.h"



//Constructor
Race::Race()
{
    srand(time(NULL));

    stats.strength = 0;
    stats.dexterity = 0;
    stats.vitality = 0;
    stats.intelligence = 0;
    stats.wisdom = 0;
    stats.charisma = 0;

    slate.initiative = 0;
    slate.armor = 0;
    slate.damage = 0;

    role = NULL;
    roleName = NULL;
}

//Destructor
Race::~Race()
{
    if(role)
    {
        delete role;
        role = NULL;
    }
    if(roleName)
    {
        delete roleName;
        roleName = NULL;
    }
}

int Race::new_profession()
{
    int choice = 0;

    cout << "\n****Profession Selection*****" << endl;
    cout << "1) Warrior " << endl;
    cout << "2) Mage " << endl;
    cout << "3) Archer " << endl;

    cout << "\nNow please choose your profession: ";
    cin >> choice;
    cin.ignore(100, '\n');

    switch(choice)
    {
        case 1: 
            role = new Warrior;
            roleName = new char[8];
            strcpy(roleName, "Warrior");
            break;

        case 2:
            role = new Mage;
            roleName = new char[5];
            strcpy(roleName, "Mage");
            break;

        case 3:
            role = new Archer;
            roleName = new char[7];
            strcpy(roleName, "Archer");
            break;
    }

    return choice;
}


int Race::assignValues(int choice)
{
    int values[6];
    int sum;
    int k = 0;
    int temp = 0;

    for(int i = 0; i < 6; ++i)
    {
        sum = 0;
        for(int j = 0; j < 3; ++j)
            sum += rand() % 7;
        values[i] = sum;
    }

    //insertion sort
    for(int i = 0; i < 5; ++i)
    {
        k = i;
        for(int j = i+1; j < 6; ++j)
            if(values[j] > values[k])
                k = j;
        temp = values[i];
        values[i] = values[k];
        values[k] = temp;
    }

    //Warrior Choice
    if(choice == 1)
    {
        stats.strength = values[0];
        stats.vitality = values[1];
        stats.charisma = values[2];
        stats.wisdom = values[3];
        stats.dexterity = values[4];
        stats.intelligence = values[5];
    }
    //Mage Choice
    if(choice == 2)
    {
        stats.intelligence = values[0];
        stats.wisdom = values[1];
        stats.vitality = values[2];
        stats.charisma = values[3];
        stats.dexterity = values[4];
        stats.strength = values[5];
    }
    //Archer Choice
    if(choice == 3)
    {
        stats.dexterity = values[0];
        stats.vitality = values[1];
        stats.charisma = values[2];
        stats.strength = values[3];
        stats.intelligence = values[4];
        stats.wisdom = values[5];
    }

    return 0;
}


void Race::displayRole()
{
    cout << "Role: " << roleName << endl;
}

void Race::displayStats()
{
    cout << "\n\n********Stats*******" << endl;
    cout << "Strength: " << stats.strength << endl;
    cout << "Dexterity: " << stats.dexterity << endl;
    cout << "Vitality: " << stats.vitality << endl;
    cout << "Intelligence: " << stats.intelligence << endl;
    cout << "Wisdom: " << stats.wisdom << endl;
    cout << "Charisma: " << stats.charisma << endl;
}


//Constructor
Human::Human() {}

//Destructor
Human::~Human() {}

//Constructor
Elf::Elf() {}

//Destructor
Elf::~Elf() {}

//Constructor
Orc::Orc() {}

//Destructor
Orc::~Orc() {}
