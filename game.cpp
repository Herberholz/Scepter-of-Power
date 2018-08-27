#include "game.h"



//Constructor
Game::Game()
{
}

//Destructor
Game::~Game()
{
}


//Task:
int Game::startMenu()
{
    int response;

    cout << "\n\n  ****************Sceptor of Power************\n" << endl;
    cout << "  --------------------------------------------" << endl;
    cout << "(\tPlease select option by number:\t\t)" << endl
         << "(\t1.) New Game\t\t\t\t)" << endl
         << "(\t2.) Load Game\t\t\t\t)" << endl
         << "(\t3.) Quit\t\t\t\t)" << endl;
    cout << "  --------------------------------------------" << endl;

    cin >> response;
    cin.ignore(100, '\n');

    return response;
}



//Task:
int Game::newGame()
{
    plot.intro();
    person.characterCreation();

    return 0;
}



//Task: Save character data and story progression to file.
int Game::save()
{

    return 0;
}



//Task: Load all possible save files, must display options and ask user to choose
int Game::load()
{

    return 0;
}
