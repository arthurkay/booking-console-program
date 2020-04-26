#include <iostream>
#include <string>
#include "menu.h"
#include "storage.h"

using namespace std;

void menu::menuOptions() {
    cout << "Please select an option below" << endl
    << "1.) Record new Booking" << endl
    << "2.) Delete a Record" << endl
    << "3.) Display all records" << endl
    << "4.) Exit the program" << endl;

    int opt;

    cin >> opt;

    selected(opt);

}

void menu::selected(int option) {
    switch(option) {
        case 1:
        newBooking();
        break;
        case 2:
        deleteRecord();
        break;
        case 3:
        displayRecord();
        break;
        case 4:
        exitProgram();
        break;
        default:
        unknown();
    }
}

void menu::newBooking() {
    int b_length;
    int b_draft;
    bool status;

    cout << "Please enter your boat length:" << endl;
    cin >> b_length;
    cout << "Please enter your boat draft:" << endl;
    cin >> b_draft;

    status = isAvailable(b_length, b_draft);

    if (status) {
        int duration;
        char option;
        cout << "How long do you wish to stay (Months) ?" << endl;
        cin >> duration;
        cout << "This will cost you " << amount(b_length, duration) << endl;
        cout << "Do you wish to proceed or cancel the transaction? (y/n)" << endl;
        cin >> option;
        proceedOrExit(option);
    }
    else {
        cout << "Boat length and/or draft exceed limit" << endl;
        menuOptions();
    }
}

void menu::deleteRecord() {
    cout << "Selected delete record" << endl;
}

void menu::displayRecord() {
      // Instantiate the storage class
    storage store;

    // Pull data from linked list
    store.display();
}

void menu::exitProgram() {
    cout << "Thank you for using this application" << endl;
    exit(0);
}

void menu::unknown() {
    cout << "Please select a valid option" << endl;
    menuOptions();
}

bool menu::isAvailable(int length, int draft) {
    if (length < maxLength && draft < maxDraft) {
        return true;
    }
    else {
        return false;
    }
}

int menu::amount(int length, int duration) {
    return 10 * length * duration;
}

void menu::proceedOrExit(char option) {
    switch(option) {
        case 'y':
        getInfo();
        break;
        case 'n':
        cout << "thank you for using this application" << endl;
        exit(0);
        break;
        default:
        cout << "Invalid option, bye!" << endl;
    }
}

/**
 * Ask for addtional information 
 * @return void
 * */
void menu::getInfo() {
    cout << "Please enter your name" << endl;
    cin >> b_owner;
    cin.ignore();
    cout << "Please enter name of boat" << endl;
    cin >> b_name;
    cout << "Select boat from list below" << endl
    << endl
    << "1.) Narrow" << endl
    << "2.) Sailing" << endl
    << "3.) Motor" << endl;
    int op;
    cin >> op;
    selectBoat(op);
    saveData();
    menuOptions();
}

/**
 * Select a boat type from the array list
 * @param int option
 * @return void
 * */
void menu::selectBoat(int option) {
    switch(option) {
        case 1:
        boatType = 1;
        break;
        case 2:
        boatType = 2;
        break;
        case 3:
        boatType = 3;
        break;
        default:
        cout << "Invalid option, please try again" << endl;
        getInfo();
    }
}

/**
 * Temporary store data in a struct
 * @return void
 * */ 
void menu::saveData() {
    // Instantiate the storage class
    storage store;

    // Save data in the struct
    store.insert(b_owner, b_name, boatLength, boatType);
}
