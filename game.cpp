#include "game.h"



//Constructor
Operation::Operation(): raceName(0), selection(0) {}

//Destructor
Operation::~Operation()
{
    if(person)
    {
        delete person;
        person = NULL;
    }
    if(raceName)
    {
        delete raceName;
        raceName = NULL;
    }
}


//Task:
int Operation::start_menu()
{
    int response;

        //clear_screen();
        cout << "\n\n\t\t\t\t\t\t  ****************Sceptor of Power************\n" << endl;
        cout << "\t\t\t\t\t\t  --------------------------------------------" << endl;
        cout << "\t\t\t\t\t\t(\tPlease select option by number:\t\t)" << endl
             << "\t\t\t\t\t\t(\t1.) New Game\t\t\t\t)" << endl
             << "\t\t\t\t\t\t(\t2.) Load Game\t\t\t\t)" << endl
             << "\t\t\t\t\t\t(\t3.) Quit\t\t\t\t)" << endl;
        cout << "\t\t\t\t\t\t  --------------------------------------------" << endl;
        cout << "\n\n\t\t\t\t\t\t\t\t\t";

        cin >> response;
        cin.ignore(100, '\n');

    return response;
}



//Task:
int Operation::character_creation()
{
    int choice = 0;
    int roleOption = 0;

    cout << "\n****Character Selection*****" << endl;
    cout << "1) Human " << endl;
    cout << "2) Elf " << endl;
    cout << "3) Orc " << endl;

    cout << "\n\nPlease select a number: ";
    cin >> choice;
    cin.ignore(100, '\n');

    switch(choice)
    {
        case 1: 
            person = new Human;
            raceName = new char[6];
            strcpy(raceName, "Human");
            break;

        case 2:
            person = new Elf;
            raceName = new char[4];
            strcpy(raceName, "Elf");
            break;
        
        case 3:
            person = new Orc;
            raceName = new char[4];
            strcpy(raceName, "Orc");
            break;
    }


    roleOption = person->new_profession(); //create new role for race
    person->assignValues(roleOption); //assign values based off role choice
    
    cout << "\n\nRace: " << raceName << endl;
    person->displayRole();
    person->displayStats();

    return 0;
}



//Task:
int Operation::save()
{

    return 0;
}



//Task:
int Operation::load()
{

    return 0;
}



//Task:
void Operation::story_1()
{

}



//Task:
void Operation::story_2()
{

}



//Task:
void Operation::story_3()
{

}

