#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
//int fact(int);
int main()
{
   int num;
   double sum=0;
   double fact=1;
   double result;
   double numerator;
   cout<<"enter total iteration number you want \n";
	cin>>num;
    cout<<endl;
   for(int i=1;i<=num;i++){
      
          fact=fact*i;
      

      numerator=pow(num,i);
     sum=sum+(numerator/fact);

   }
//cout<<sum;
result=sum+1;
cout<<"valueof "<<num<<" iteration  is : "<<result;
		
	return 0;
}

// int fact(a){
//  int n=1;
// for ( int i = 1; i <= a; i++)
// {
//   n=n*1;
// }

//    return n;
// }