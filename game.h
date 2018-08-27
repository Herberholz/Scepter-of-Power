//Scepter of Power
//Algorithm
//End Algorithm


#include <iostream>
#include <cstring>
#include "character.h"
#include "story.h"
using namespace std;

class Game
{
    public: 
        Game();
        ~Game();
        int startMenu();
        int newGame();
        int save();
        int load();
              
    private:
        Character person; //*** Pointer or object ***
        Story plot;
};
