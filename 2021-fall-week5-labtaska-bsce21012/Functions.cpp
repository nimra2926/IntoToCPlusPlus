#include "Functions.h"
#include <math.h>
#include <iostream>
using namespace std;
int swappingOfNumbers(int &num1, int &num2)
{
    int num;
num=num1;                                                 //storing the value of num in num1
num1=num2;                                               //storing the value of num1 in num2
num2=num;                                                //storing the value of num2 in num
cout<<"\nafter swapping"<<endl;                          //displaying after swapping
cout<<"\nnum1 = "<<num1<<"  num2 = "<<num2<<endl;        //displaying swapped values
return 0;
}
int generateSequence()
{
    int n, a=0, b=1, c;                                 //initializing n ,a,b,c

    // take input
    cout << "Enter Range: ";                            //entering range at which we want series
    cin >> n;
    cout << "Fibonacci Series is: " << endl;            //displaying series
    do
    {
        cout << a << "  ";
        c=a+b;                                         //adding a and b and storing it in c
        a=b;                                           //storing a in b
        b=c;                                           //storing b in c
    }
    while ( a <= n );                                  //condition of while that is a is less than equal to n
}





