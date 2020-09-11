
#include <iostream>  
using namespace std;  
int main() 
{ 
    int  d,n,q; 
  
  cout << "enter the dimes d= ";
   cin>> d;
   cout<< "enter number of nickles n=";
   cin>> n;
   cout<<"enter quarters q= ";
   cin>>q;
   int total=d*10+n*5+q*25;
   cout<<"total cents are :" <<total;


   return 0;  
}  