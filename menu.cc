#include <iostream>
#include <string>
#include "menu.h"

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
    cout << "Selected Booking" << endl;
}

void menu::deleteRecord() {
    cout << "Selected delete record" << endl;
}

void menu::displayRecord() {
    cout << "Selected display record" << endl;
}

void menu::exitProgram() {
    cout << "Selected exit program" << endl;
}

void menu::unknown() {
    cout << "Please select a valid option" << endl;
}