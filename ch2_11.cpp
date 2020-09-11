#include <iostream>  
using namespace std; 


int main() 
{ 
    int i=0;
    int j=0;
    cout<<"  Enter two temperature RAnge \n";
    cout<<"---------------------------------- \n";
    cout<<endl;
    cout<<endl;
    cout<<"---------------------------------- \n";
    cout<<"  Enter lower temperature RAnge: \n";
    cin>>i;
    cout<<endl;
    cout<<"---------------------------------- \n";
    cout<<"  Enter higher temperature RAnge: \n";
    cin>>j;
    cout<<endl;
    double velocity;

    wile(i<=j){

      cout<<"At  "<<i<<" degree Celsius the velocity of sound is:  "<<331.3 + 0.61 *i<<"\n";
      cout<<"---------------------------------- ----------------------------------------\n";

      i++;
    }
    
 
    return 0;
}
