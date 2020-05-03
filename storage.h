#ifndef _STORAGE_H_
#define _STORAGE_H_
#include <string>
#include <vector>

using namespace std;

class storage {
    public:
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
         * Write linked list data to file
         * @param string ownerName
         * @param string boatName
         * @param int boatLength
         * @param int boat
         * @return void
         * */
        void writeData(string ownerName,
                        string boatName,
                        int boatLength,
                        int boat);

        /**
        * Read data saved to file
        * @return void
        * */
        void readFile();

        /**
         * Delete a specific record from file
         * @param int num
         * @return void
         * */
        void deleteRecord(int num);

        void updateFile(vector <string> vec);

};
#endif