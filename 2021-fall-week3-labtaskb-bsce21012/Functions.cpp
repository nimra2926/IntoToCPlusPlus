#include "Functions.h"
#include <math.h>
#include <iostream>
using namespace std;

int printUsingWhileLoop()
{
	int sum=0;
    int num=1;
    while(num<20)
{
	sum=sum+num;
	num=num+2;
}
cout<< sum << endl;
return 0;
}




int factorialUsingWhileLoop(int num)
{

	   int fac=1;

   while(num>=1)
   {
   	fac*=num;
   	num--;
	  }
	  cout<<"fac:"<<fac<<endl;
	  return fac;




}

void chaseChar()
{
cout<<"plz enter your name :"<<endl;
}