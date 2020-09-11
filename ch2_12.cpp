#include <iostream>  
#include <cmath>
using namespace std; 



int main() {

const double pi=3.14;
double radious, volumeOfTank, waterStorage;
double height;

    cout<<endl;
    cout<<"---------------------------------- \n";
    cout<<"  Enter radious in inch of the tank : \n";
    cin>>radious;
    cout<<endl;
    cout<<"---------------------------------- \n";
    cout<<"  Enter Height in feet of the tank : \n";
    cin>>height;
    cout<<endl;
    volumeOfTank= pi* pow((radious/12),2)*height;
    cout<<"volume of the tank is :"<<volumeOfTank<<"   cube foots(feet) \n\n";
    waterStorage=7.48*volumeOfTank;
cout<<"water storage in gallons is :  "<<waterStorage<<"  gallons \n\n";
cout<<"---------------------------------- \n";



    
 
    return 0;
}
