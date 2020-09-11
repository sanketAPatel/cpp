#include <iostream>
using namespace std;
//Function declaration
void sum(int);

//Main function
int main(){
  int number;
  cout<<"Enter total cents bellow 100:-  ";
   cin>>number;
   sum(number);
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