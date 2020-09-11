#include <iostream>
#include <cmath>
#include<fstream>
using namespace std; 


int main() {
   char buffer[256];
   string filename;
 int wordC=0;
  char ch;
   cin>>filename;
  ifstream examplefile (filename);
  if (! examplefile.is_open())
  { cout << "Error opening file"; exit (1); 
  }

  while (! examplefile.eof() )
  {
    examplefile.getline (buffer,100);
    cout << buffer << endl;
   // ++words;
   // cout<<words;
    wordC++;
  }
  int Num = 0;      
    char prev = ' ';

   /*  for(int i = 0; i < strlen(buffer); i++) {

        if(buffer[i] != ' ' && prev == ' ')
         Num++;

        prev = buffer[i];
    }
    cout<<"words : "<<Num<<endl ; */
    string word; 
  /*  while (examplefile >>word)
{
  wordC++;
}
 cout<<wordC<<endl; */
cout<<wordC<<endl;
  return 0;
  }
