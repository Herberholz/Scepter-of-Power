//Scepter of Power
//Algorithm
//1. Intro displays and user is allowed to choose whether to start new game, 
//   load previous game, or quit.
//2. If new game is selected then new character is created.
//3. If load is selected then display all possible save files.
//4. If quit is chosen then exit game.
//End Algorithm

#include "game.h"


int main()
{
    Game rpg;
    int choice = 0;

    do
    {
        choice = rpg.startMenu();

        switch(choice)
        {
            //New Game
            case 1:
                rpg.newGame();
                break;
            //Load character and continue game
            case 2:
                if(rpg.load() == 0)
                    cout << "No Saved Files" << endl;
                break;
            //Quit
            case 3:
                cout << "\nGoodbye!" << endl;
                break;
            default:
                cout << "Invalid Main Menu Selection" << endl;
        }

    }while(choice != 3);

    return 0;
}


