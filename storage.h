#ifndef _STORAGE_H_
#define _STORAGE_H_
#include <string>

using namespace std;

class storage {
    public:

        /**
         * Constructor method to initialize linked list
         * @return void
         * */
        storage();

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

        /**
         * create a new record from record passed as parameters 
        * @param string ownerName
        * @param string boatName
        * @param int boatLength
        * @param int boat
        * @return void
        * */
        void insert(string owner,
                    string boatName,
                    int boatLength,
                    int boat);

        /**
         * An array of boat types
         * */
        string boat[3] = {
            "Narrow",
            "Sailing",
            "Motor"
        };

        /**
        * Show all stored data
        * @return void
        * */
        void display();

        // Linked list instance variable
        struct userRecord* head = NULL;


    private:

};
#endif
