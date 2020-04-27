#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

// Open file for writing
  ofstream outfile;
  outfile.open("data.txt");
  outfile << "Some test goes here" << endl;
  outfile.close();
}
