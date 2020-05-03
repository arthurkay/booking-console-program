#include <iostream>
#include "storage.h"
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void storage::insert(string ownerName,
    string boatName,
    int boatLength,
    int boat) {
        ifstream ifile;
        vector <string> vData;

        ifile.open("saved_data.txt");
        if (ifile.is_open()) {

            string line;
            int lines = 0;

            while (getline(ifile, line)) {
                lines++;
                vData.push_back(line);
            }

            if (lines >= 1) {
                string new_entry = ownerName + " " + boatName + " "
                                    + to_string(boatLength) + " "
                                    + to_string(boat);
                vData.push_back(new_entry);
                cout << "Found " << lines << " boats(s) in file" << endl;
                updateFile(vData);
               
            }
            else {
                // Create a new file record
                writeData(ownerName, boatName, boatLength, boat);
            }
        }
        else {
            cout << "Unable to open \"saved_data.txt\" file" << endl;
        }
}

void storage::deleteRecord(int num) {
    ofstream outfile;
    ifstream infile;

    // Vector for storing strings from file
    vector <string> fileData;

    // Open file for reading
    infile.open("saved_data.txt");
    if (infile.is_open()) {
        string line;
        // Get all lines in the file and insert them n a vector
        while (getline(infile, line)) {
            fileData.push_back(line);
        }
        // Delete the selected entry from file
        num = num + 1;
        fileData.erase(fileData.begin() + num);
    }
    else {
        cout << "Unable to open file for reading saved data" << endl;
    }

    // Open file for writing
    outfile.open("saved_data.txt");
    if (outfile.is_open()) {
        for (string outFileData: fileData) {
            outfile << outFileData << endl;
        }
    }
    else {
        cout << "Unable to open file for writing" << endl;
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
        cout << "Unable to open file, or file does not exist" << endl;
    }
}

void storage::updateFile(vector <string> vec) {
    
    ofstream outfile;
    outfile.open("saved_data.txt");
    for (string stringLine: vec) {
        outfile << stringLine << endl;
    }
    outfile.close();
}