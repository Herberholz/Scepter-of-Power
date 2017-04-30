#include "game.h"


int main()
{
    Operation game;
    int choice = 0;

    do
    {
        choice = game.start_menu();

        switch(choice)
        {
            case 1:
                //create character here
                game.character_creation();
                break;
            case 2:
                //load character and continue game
                game.load();
                break;
            case 3:
                cout << "\nGoodbye!" << endl;
                break;
            default:
                cout << "Error" << endl;
        }

    }while(choice != 3);

    return 0;
}


