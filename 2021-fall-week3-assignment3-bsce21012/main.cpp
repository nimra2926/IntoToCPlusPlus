#include <iostream>
#include "Functions.cpp"
using namespace std;
  
int main() {

    
    // Call all the functions one by one to test output
   char a;
   int year;
   int num;
   int numberOfItems;
   int total_classesheld; int classesattended ; char ch;
   
   cout<<lowerOrUpper(a);
   cout<<endl;
   cout<<leapYear(year);
   cout<<endl;
   
   reverseOfNumber(num);
   cout<<endl;
   
   cout<<examPermission( total_classesheld, classesattended , ch);
   cout<<endl;
   
   cout<<calculateBillPayment(numberOfItems);
   return 0;
}


