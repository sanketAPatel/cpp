#include <iostream>
#include <string>

using namespace std;

int main(){

    bool paidTheAmount = false;
    double  totalPaid = 0.00;
    while(paidTheAmount == false){
        char userInput ;
        cout << "insert coins for $" << 3.50-totalPaid << " - "; 
        cin >> userInput;    
        if(userInput == 'D'){
            totalPaid = totalPaid + 1;
        }else if(userInput ==  'q'){
            totalPaid = totalPaid + 0.25;
        }else if(userInput ==  'd'){
            totalPaid = totalPaid + 0.10;
        }else if(userInput ==  'n'){
            totalPaid = totalPaid + 0.05;
        }else{
            cout << "input not valid";
        }
        if(totalPaid >= 3.50){
            paidTheAmount=true;
        }
    }

    cout << "payment success"<< endl;
    cout << " Change$ :=  " << totalPaid-3.50;
   
   cout<<endl;



return 0;
}