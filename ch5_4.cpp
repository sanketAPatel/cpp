#include <iostream>
using namespace std;
//Function declaration
void sum(int);

//Main function
int main(){
     char tryAgain = 'y';

    while(tryAgain=='y'){


  int number;
  cout<<"Enter total cents bellow 100:-  ";
   cin>>number;
   sum(number);

cout << "\n Do you wnt conitnue y - " << endl;
        cin >> tryAgain;

    }

   return 0;
}
/* Function is defined after the main method 
 */
void sum(int number){
    //const int PENNY = 1;
  const int NICKEL = 5;
  const int DIME = 10;
  const int QUARTER = 25;


   int Qc=0;
   int Dc=0;
   int Pc=0;
     while (number>=QUARTER){
     
       
      Qc=number/QUARTER;
      number=number%QUARTER;
      

   }
   while(number>DIME){
       Dc=number/DIME;
      number=number%DIME;

   }
   Pc=number;

   cout<<" Total Quartercoins:  "<<Qc;
   cout<<endl;
   cout<<" Total Dimecoins: "<<Dc;
   cout<<endl;
   cout<<" Total PennyCoins: "<<Pc;
  
   
}
