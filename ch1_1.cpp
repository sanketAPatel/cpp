
#include <iostream>  
using namespace std;  
int main() 
{ 
    int  numberOfPods , peasPerPod, totalPeas , totalquantity; 
  
  cout << "enter the number ofPods: ";
   cin>> numberOfPods;
   cout<< "enter number of peasPerPod : ";
   cin>> peasPerPod;
   cout<<"total Peas are : ";
  // cin>>q;
    totalPeas=numberOfPods*peasPerPod;
    cout<< totalPeas;
   cout<<endl;
   cout<< "sum of two quantity is : ";
   totalquantity = numberOfPods + peasPerPod;
   cout<<totalquantity;
   cout<< endl;


   return 0;  
}  