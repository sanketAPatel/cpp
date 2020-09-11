#include <iostream>
#include <cmath>
#include<fstream>
using namespace std; 


int main() {
    int words = 0;
    string word;
   // ifstream inFile;
    
    ofstream examplefile ("example.txt");
  if (examplefile.is_open())
  {
    examplefile << "This is a line.\n";
    examplefile << "This is another line.\n";
    examplefile.close();
  }
  return 0;}
