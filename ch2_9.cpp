#include <iostream>  
using namespace std; 


int main() 
{ 
 
 int numb;
 int numberPos=0;
 int numberNeg=0;
 int i=9;
while(i>=0)
{
    cin>> numb;

    if(numb>=0)
    {
        numberPos=numberPos+numb;
    }
    else
    {
        numberNeg= numberNeg+ numb;
    }
  cout<<endl;
i--;
}
cout<<"sum of positive number "<<numberPos;
cout<<endl;
cout<<"sum of negative number"<<numberNeg;

    return 0;
}