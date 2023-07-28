#include "Functions.h"
#include <iostream>
using namespace std;
void recursiveFunction(char str1[100],char str2[100],int n)
{
    str2[n]=str1[n];                    //comparing  the arrays
    if(n==100 || str1[n]=='\0')         //applying if condition
    {
        return ;                        //if the condition is true return the function
    }
    else                                 //otherwise
    {
      str2[100]=str1[100];                        //copy the value of str1 in str 2
      recursiveFunction(str1,str2,n+1);        //calling of function

    }

}

