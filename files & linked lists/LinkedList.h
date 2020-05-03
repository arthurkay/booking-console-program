#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include <string>

using namespace std;

class LinkedList {
    public:
        /**
        *  Struct object for data storage
        *
        * */
        struct userRecord {
            string ownerName;
            string boatName;
            int boatLength;
            // Index for the boattype array
            int boat;
            struct userRecord* next;
        };

        struct userRecord* head = NULL;

        void insert(string ownerName,
                        string boatName,
                        int boatLength,
                        int boat);

        /**
         * Display all entries from the file system
         * */
        void display();

};
#endif