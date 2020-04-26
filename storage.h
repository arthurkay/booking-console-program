#ifndef _STORAGE_H_
#define _STORAGE_H_
#include <string>

using namespace std;

class storage {
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
            userRecord* next;
        };

        void insert(string owner,
                    string boatName,
                    int boatLength,
                    int boat);

        string boat[3] = {
            "Narrow",
            "Sailing",
            "Motor"
        };

        void display();

        // Linked list instance variable
        struct userRecord* head = NULL;


    private:

};
#endif
