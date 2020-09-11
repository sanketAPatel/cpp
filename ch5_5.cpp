#include <iostream>
#include <cmath>
using namespace std;

//Function declaration
void w(double,double);

//Main function
int main(){
   //Calling the function
   double temperature;
   double velocity;
   cout<<"Enter the Temperature under 10:   \n";
   cin>>temperature;
   cout<<"Enter the velocity:   \n";
   cin>>velocity;
   cout<<endl;
   w(temperature,velocity);
   return 0;
}
/* Function is defined after the main method 
 */
void  w(double num1, double num2){
   double WindChillIndex = 1312+0.625*num1-11.37*pow(num2, 0.16)+0.3965*num1*pow(num2,0.016);
   cout<< " WindChillIndex  is:"<<WindChillIndex ;
}