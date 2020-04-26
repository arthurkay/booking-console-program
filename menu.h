#ifndef _MENU_H_
#define _MENU_H_
#include <string>

using namespace std;

class menu {
    private:
        const int maxLength = 15;
        const int maxDraft = 5;
        const int lengthMarina = 150;
        int boatLength;
        int boatDraft;
        int boatType;
        string b_owner;
        string b_name;
        void getInfo();
        void selectBoat(int option);
        void saveData();

    public:
        void menuOptions();
        void newBooking();
        void deleteRecord();
        void displayRecord();
        void exitProgram();
        void unknown();
        void selected(int option);
        bool isAvailable(int length, int draft);
        int amount(int length, int duration);
        void proceedOrExit(char option);
            
};
#endif