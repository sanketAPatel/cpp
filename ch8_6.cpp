#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
   const string nums = "0123456789";
   string str;
   cout << "Enter a sentence:\n";
   getline( cin, str);

   int a, b = 0;
   while( b != str.length() )
   {
      a = str.find_first_of( nums, b );   
      if ( a == -1 ) 
      break;
      b= str.find_first_not_of( nums, a );  
      if ( b == -1 ) 
      b = str.length();
      bool spacebefore = ( a == 0  || isspace(str[a-1] ) );
      bool spaceafter  = ( b == str.length() || isspace( str[b  ] ) );
      if ( spacebefore && spaceafter )
      str.replace( a, b-a, string( b-a, 'x' ) );
   }

   cout << str << '\n';
}