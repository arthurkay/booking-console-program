#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

// Open file for writing
  ifstream infile;
  infile.open("data.txt");
  string reader;
  while(getline(infile, reader)) {
    cout << reader << endl;
  }
  infile.close();
  return 0;
}
