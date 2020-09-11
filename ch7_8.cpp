#include <bits/stdc++.h> 
using namespace std; 

#define SIZE 26 

// function to print the character and its frequency 
// in order of its occurrence 
void printString(string str) 
{ 
	// size of the string 'str' 
	int n = str.size(); 

	
	int b[SIZE]; 

	
	memset(b, 0, sizeof(b)); 

	
	for (int i = 0; i < n; i++) 
		b[str[i] - 'a']++; 

	
	for (int i = 0; i < n; i++) { 

		
		if (b[str[i] - 'a'] != 0) { 
		
			cout << str[i] << b[str[i] - 'a'] << " "; 
	
			b[str[i] - 'a'] = 0; 
		} 
	} 
} 


int main() 
{ 
	string str;
    cout<<"enter string in lower case without space: \n\n";
    cin>>str; 
    char arr[str.length() + 1]; 
 
    strcpy(arr, str.c_str()); 
    cout<<"String to char array conversion:\n";
    for (int i = 0; i < str.length(); i++) 
        cout << arr[i]<<endl; 
 
    
	printString(arr); 
	return 0; 
} 
