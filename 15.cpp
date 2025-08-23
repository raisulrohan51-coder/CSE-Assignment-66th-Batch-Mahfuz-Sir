#include<iostream>
using namespace std;
int main ()
{
  float length, width, area, perimeter ;

   cout<< "length : ";
   cin>> length ;

    cout<< "width: ";
   cin>> width ;

   area = length * width ;
   perimeter = ( 2* (length + width)) ;

   cout << "area:" << area;
   cout <<  "perimeter:" << perimeter;
   return 0;
}
