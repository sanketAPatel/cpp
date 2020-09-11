#include <iostream>  
#include <cmath>
using namespace std; 



int main() {

double heightsInInches,weightInPounds,ageInYears,BMR;
char gender;

     cout<<"  Enter Height in inch : \n";
    cin>>heightsInInches;
    cout<<endl;
    cout<<"  Enter Weight in pounds : \n";
    cin>>weightInPounds;
    cout<<endl;
    cout<<"  Enter Age in years : \n";
    cin>>ageInYears;
    cout<<endl;

    cout<<"enter the gneder :-  enter M for male and f for female\n";
    cin>>gender;
    if(gender=='m' || gender=='M')
    {
        cout<<gender;
        cout<<endl;
            BMR=655+(6.3*weightInPounds)+(12.9*heightsInInches)-(6.8*ageInYears);
            cout<<BMR<<endl;
            cout<<"required calories to maintain for male :"<<BMR/230<<endl;

    }
    else
    {
        cout<<gender;
        cout<<endl;
        BMR=66+(4.3*weightInPounds)+(4.7*heightsInInches)-(4.7*ageInYears);
         cout<<BMR<<endl;
        /* code */
        cout<<"required calories to maintain for female :"<<BMR/230<<endl;
    }
    

    
 
    return 0;
}
