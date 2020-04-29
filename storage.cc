#include <iostream>
#include "storage.h"
#include <fstream>
#include <string>

using namespace std;

storage::storage() {
    // Nothing yet
}

void storage::insert(string ownerName,
    string boatName,
    int boatLength,
    int boat) {
    struct userRecord * record =
                 (struct userRecord*) malloc(sizeof(struct userRecord));
                 
        record->ownerName = ownerName;
        record->boatName = boatName;
        record->boatLength = boatLength;
        record->boat = boat;
        record->next = head;
        head = record;

        writeData(ownerName, boatName, boatLength, boat);
}

void storage::display() {
    struct userRecord* ptr;

    ptr = head;
    cout << "Saved details" << endl;
    while(ptr != NULL) {
        cout << "Hello " << ptr->ownerName
        << ", your boat " << ptr->boatName
        << " is " << ptr->boatLength <<
        "m. " << "Your boat type is " << boat[ptr->boat]
        << endl;
        ptr = ptr->next;
    }
}

void storage::writeData(string ownerName,
                    string boatName,
                    int boatLength,
                    int boat) {
    // File stream variable
    ofstream outfile;

    // Variable to hold data to write to file as string
    string data;
    data = ownerName + " " + boatName + " "
            + to_string(boatLength) + " "
            + to_string(boat);
     
    outfile.open("saved_data.txt");
    outfile << data;
    outfile.close();
}

void storage::readFile() {
    string readData;
    ifstream infile;
    infile.open("saved_data.txt");
    if (infile.is_open()) {
        while(getline(infile, readData)) {
            cout << readData << endl;
        }   
    }
    else {
        cout << "Unable to open file, or file doesnt not exist" << endl;
    }
}