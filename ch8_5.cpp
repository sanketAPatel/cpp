#include <iostream>
#include <cmath>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<istream>

using namespace std;

int main()
{
char str[101], ch;
int i, count;
while (1) {i = 0; count = 0;
cout<< "enter sentence : " << endl;
cin.getline(str, 100);
while (str[i] != '\0') {
if (isalpha(str[i])) {
count++;
}
else {
if (count == 4) {
if ((str[i - 4] >= 'A') && (str[i - 4] <= 'Z')) {
str[i - 4] ='L';
}
else {
str[i-4]='l';
}
str[i-3]='o';
str[i-2]='v';
str[i-1]='e';
}
count = 0;
}
i++;
}
cout << str << endl;
cout << "Do you want to continue (Y/N) ? : ";
cin >> ch;
if (ch == 'N') 
{
break;
}
else {
cin.getline(str, 100);
}
}
}

