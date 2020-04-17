#ifndef _MENU_H_
#define _MENU_H_
#include <string>

using namespace std;

class menu {
    private:
        const int maxLength = 15;
        const int maxDraft = 5;
        const int lengthMarina = 150;
        string boatType[3] = {"narrow", "sailing", "motor"};
    
    public:
        void menuOptions();
        void newBooking();
        void deleteRecord();
        void displayRecord();
        void exitProgram();
        void unknown();
        void selected(int option);
            
};
#endif