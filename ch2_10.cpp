#include <iostream>  
using namespace std; 


int main() 
{ 
 
 int numb;
 int numberPos=0;
 int numberNeg=0;
 int i=9,j=0,k=0;
 cout<<"enter 10 number hit enter after each number";
 cout<<endl;
while(i>=0)
{
    cin>> numb;

    if(numb>=0)
    {
        numberPos=numberPos+numb;
        j=j+1;
    }
    else
    {
        numberNeg= numberNeg+ numb;
        k=k+1;
    }
  cout<<endl;
i--;
}
cout<<"sum of positive number "<<numberPos;
cout<<endl;
cout<<"Average of positive number is :  "<<numberPos/j;
cout<<endl;
cout<<endl;
cout<<"sum of negative number :  "<<numberNeg;
cout<<endl;
cout<<"Average of negative number :  "<<numberNeg/k;

    return 0;
}