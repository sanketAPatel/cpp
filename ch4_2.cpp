#include <iostream>
#include <cmath>
using namespace std;

   
  void  ClothingSize(double, double, int);


int main(){
   double HeightInInches ;
double WeightInPounds;
   int ageInYears;
   
   cout<<"enter Height in Inches: ";
   cin>> HeightInInches;

   cout<<"enter Weight in Pounds # : ";
   cin>>WeightInPounds;

   cout<<"enter Age in years : ";
   cin>>ageInYears;
  ClothingSize(HeightInInches, WeightInPounds, ageInYears);
    
   return 0;
}
//Defining the function sum
 void ClothingSize(double Hi, double We, int ag) {
   
   double hat;
   double Jacket;
   double waist;
   int factor;
   hat=(We/Hi)*2.9;
   if(ag%2==0){
      factor=ag;
   }
   else{
      factor=ag-1;
   }

   Jacket=(Hi*We/288);
      waist=(We/5.7);
      for(int i=1;i<factor;i++){
         Jacket=Jacket+(1/8);
         waist=waist+(1/10);
      }
      
      cout<<"clothing size \n";
      cout<<endl;
     // cout<<factor;
      cout<<"JAcket Size-Chest size in inches :   "<<Jacket;
      cout<<endl;
      cout<<"waist size in inches: "<<waist;


}