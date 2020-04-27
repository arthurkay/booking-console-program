#include <iostream>
#include "storage.h"

using namespace std;

storage::storage() {
    //Nothing yet
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
    cout << "Hello " << ptr->ownerName
        << ", your boat " << ptr->boatName
        << " is " << ptr->boatLength <<
        "m. " << "Your boat type is " << boat[ptr->boat]
        << endl;
}