//XXX fix preprocessor directives throughout files
#include <iostream>
#include <cstring>
#include "character.h"
using namespace std;


//Constructor
Character::Character()
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

    roleName = NULL;
}

//Destructor
Character::~Character()
{
    if(roleName)
    {
        delete [] roleName;
        roleName = NULL;
    }
}


//Task:
int Character::characterCreation()
{
    assignRole();
    initAttributes();
    display();

    return 0;
}


int Character::assignRole()
{
    char name[10];
    int choice = 0;
    int length = 0;

    do
    {
        cout << "\nPlease select your Role:" << endl;
        cout << "1) Warrior" << endl;
        cout << "2) Wizard" << endl;
        cout << "3) Archer" << endl;

        cin >> choice;
        cin.ignore(100, '\n');

        if(choice == 1)
        {
            strcpy(name, "Warrior");
        }
        else if(choice == 2)
        {
            strcpy(name, "Wizard");
        }
        else if(choice == 3)
        {
            strcpy(name, "Archer");
        }
        else
        {
            cout << "Please select the appropriate number" << endl;
        }
    }while(choice < 1 || choice > 3);

    //make sure to deallocate memory before moving pointer.
    if(roleName)
    {
        delete [] roleName;
        roleName = NULL;
    }

    length = strlen(name);
    roleName = new char[length+1];
    strcpy(roleName, name);

    return 0;
}



int Character::initAttributes()
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
    if(strcmp(roleName, "Warrior") == 0)
    {
        stats.strength = values[0];
        stats.vitality = values[1];
        stats.charisma = values[2];
        stats.wisdom = values[3];
        stats.dexterity = values[4];
        stats.intelligence = values[5];
    }
    //Mage Choice
    else if(strcmp(roleName, "Wizard") == 0)
    {
        stats.intelligence = values[0];
        stats.wisdom = values[1];
        stats.vitality = values[2];
        stats.charisma = values[3];
        stats.dexterity = values[4];
        stats.strength = values[5];
    }
    //Archer Choice
    else if(strcmp(roleName, "Archer") == 0)
    {
        stats.dexterity = values[0];
        stats.vitality = values[1];
        stats.charisma = values[2];
        stats.strength = values[3];
        stats.intelligence = values[4];
        stats.wisdom = values[5];
    }
    else
        cout << "Can't recognize Role" << endl;

    return 0;
}


void Character::display()
{
    cout << "\nRole: " << roleName << endl;
    cout << "\n********Stats*******" << endl;
    cout << "Strength: " << stats.strength << endl;
    cout << "Dexterity: " << stats.dexterity << endl;
    cout << "Vitality: " << stats.vitality << endl;
    cout << "Intelligence: " << stats.intelligence << endl;
    cout << "Wisdom: " << stats.wisdom << endl;
    cout << "Charisma: " << stats.charisma << endl;
}
