//Scepter of Power
//The purpose of this header file is to hold the class that contributes to the
//game flow.

#include "race.h"



//Purpose:
class Operation
{
    public: 
        Operation();
        ~Operation();
        int start_menu();
        int character_creation();
        int save();
        int load();
        void story_1();
        void story_2();
        void story_3();
              
    private:
        Race * person;
        char * raceName;      
        int selection;

};
