#include <iostream>
#include <cmath>
using namespace std;
void sum(int arr[],int);
int main(){

    int  number,temp;     
    
    cout<< "how many element ? \n";
    cin>>number;
    cout<<endl;
   int a[number];
    for(int i=0;i<number;i++){
        cout<<i<<" enter please : ";
            cin>>temp;
        a[i]=temp;
            cout<<endl;
    }

   sum(a , number);

     return 0;
}

void sum(int arr[], int sizeofArray)
{
   // int x=0;
   int num=0;int average ;
    for(int i=0;i<sizeofArray;i++){  cout<<i<<" th  element is "<<arr[i]<<endl;
    
    
    num=num+arr[i];
    /* x=(x+arr[i]);
    x=x/sizeofArray;
   cout<<"avearage is :  "<<x <<endl; */

    }
   // int average ;
    average=num/sizeofArray;
     
    cout<<"average of X is :"<<average<<endl;
    int difference=0;
     int numerator=0;
 for(int i=0;i<sizeofArray;i++){
    
     difference = pow( (arr[i]-average),2);
     numerator=numerator+difference;
     

 }
 cout<<"final iteration is :  "<<(numerator/sizeofArray);

  
   //return num3;
}
