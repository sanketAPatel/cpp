#include <iostream>
#include <cmath>
using namespace std;
int main(){


    int x;
    cout<<"enter the vlaue of x for total iteration for pi value : \n";
    cin>>x;
    double sum=01.000;
    
 
    for( int i=0;i<=x;i++){
    double denom=2*(i)+3;
    double deno=1/denom;
    if(i%2==0){
        sum=sum-deno;
    }
    else
    {
        sum=sum+deno;
    }

    }
    
  cout<<"value of pi(3.14) with"<<x<<"iteration is :  "<<4*sum;




     return 0;
}