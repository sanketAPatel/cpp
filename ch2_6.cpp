#include <iostream>  
using namespace std; 

#define nl '/n'  
 
int main() 
{ 
  const double dph=16.78;
  const int unionDue=10;
    bool  extra;
    bool overTime;
   const double fedTax=0.14;
   const double stateTax=0.05;
   const double socialSecTax=0.06;
   int hourPerWeek, noOfMemeber;
   int healthCover;
   double grossIncome,netIncome;
   cout << "enter total number of hours per week:  ";
   cin>>hourPerWeek;
  cout << "\n enter total family members in home:  ";
    cin>>noOfMemeber;

    if(noOfMemeber>3)
    {
        extra =true;
        healthCover=35;
    }
    else
    {
        healthCover=0;
    }
    
if (hourPerWeek<=40)
{

   grossIncome=dph*hourPerWeek;
   netIncome=grossIncome-(fedTax+stateTax)*grossIncome-unionDue-healthCover;
   overTime=false;
}
else
{
    grossIncome=dph*hourPerWeek*1.5;
    netIncome=grossIncome-(fedTax+stateTax)*grossIncome-unionDue-healthCover;
    overTime=true;
}

cout<<"grossIncome per week is :   ";
cout<<grossIncome<<"$";
cout<<"\n";
cout<<"netncome per week is  :   ";
cout<<netIncome<<"$";
cout<<"\n";
cout<<"overTime yes =1 and overtime no=0 \n"<<"received ovetime ?  "<<overTime;

    

    
   


  return 0;  

}  
