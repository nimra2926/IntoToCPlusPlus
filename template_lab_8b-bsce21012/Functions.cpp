#include "Functions.h"
#include <iostream>
using namespace std;
int sumOfArray(  int arr[5],int i,int  sum)
{


//int arr[5]= {0,1,2,3,4};
if(i>=5)
{
    return 0;
}
else
{
    cout<<arr[i]<<endl;

    sum=sum+arr[i];
    cout<<"sum"<<sum<<endl;
    i++;
    sumOfArray( arr, i, sum);
}

}
void addConstant (int *ptr1,int *ptr2)
{
    *ptr1 = *ptr1 + 100;
    *ptr2 = *ptr2 + 100;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
}



