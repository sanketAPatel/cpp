#include <iostream>  
using namespace std; 

#define nl '/n'  
 
int main() 
{ 
  const double  rate = 7.6;

double prevAnnualSalary ,retroactivePay ,Monthlysalary, newAnnualSalary;

cout<< "enter the previos annual sallary ";
//2cin>>nl;
cin >>prevAnnualSalary;
cout<<"increment per 6 months is: ";
 cout<<endl;
retroactivePay=prevAnnualSalary*rate/(2*100);
 
cout<<retroactivePay;
cout<<endl;
cout<<"retroactive pay per annum is ";
cout<<2*retroactivePay;
 newAnnualSalary=prevAnnualSalary+(2*retroactivePay);
 cout<<endl;
cout<<"new annual sallary is previous sallary plus retroactive pay per annum : ";
 cout<<newAnnualSalary;
  cout<<endl;
  Monthlysalary=newAnnualSalary/12;
 cout<<"monthly SAllary is: "<< Monthlysalary;
   return 0;  

}  
