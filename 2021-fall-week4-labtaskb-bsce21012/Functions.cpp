#include "Functions.h"
#include <iostream>
using namespace std;
int sumofintegers()
{
    int sum=0;
for(int num = 100;num<200;num++)                            //applying for loop for displaying number that are less than 200
{
if(num%9==0)                                                //applying mode of 9 to find numbers in 200 that are divisible by 9
{
cout<<num<<endl;                                           //displaying number
sum+=num;                                                  //adding
}

}
return sum;                                                //displaying sum
}

