#ifndef _MENU_H_
#define _MENU_H_
#include <string>

using namespace std;

class menu {
    private:

        // private linked list variables
        int maxLength = 15;
        int maxDraft = 5;
        int lengthMarina = 150;
        int boatLength;
        int boatDraft;
        int boatType;
        string b_owner;
        string b_name;

        /**
         * Request from the user their details
         * */
        void getInfo();

        /**
         * Choose a boat from the storage array
         * @param int
         * */
        void selectBoat(int option);

        /**
        * Temporary store data in a struct
        * @return void
        * */ 
        void saveData();

    public:

        /**
         * Show the menu options
         * @return void
         * */
        void menuOptions();

        /**
         * Start the booking process
         * @return void
         * */
        void newBooking();

        /**
         * Delete an entry from the list
         * @return void
         * */
        void deleteRecord();

        /**
         * Show all records available
         * @return void
         * */
        void displayRecord();

        /**
         * Terminate the console program
         * @return void
         * */
        void exitProgram();

        /**
         * Show a custom meddage when a user selects an invalid option
         * @return void
         * */
        void unknown();
        void selected(int option);

        /**
         * Check if the draft and length doesn't go beyond the set threshold
         * @param int length
         * @param int draft
         * */
        bool isAvailable(int length, int draft);
        
        /**
        * Give the total cost based on boat length & duration
        * @param int length
        * @param int duration
        * @return int
        * */ 
        int amount(int length, int duration);

        /**
         * Ask end user if they want to proceed or not
        * @param char option)
        * @return void
        * */
        void proceedOrExit(char option);
            
};
#endif