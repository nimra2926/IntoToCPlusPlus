#include "Functions.h"
#include <iostream>
using namespace std;


int i=0, sum = 0;
int sumArray(int arr[5]){

//int arr[5]= {0,1,2,3,4};
    if(i==5){                                                                   //if i is equal to the size of array

        cout<<"\n"<<"\n"<<"sum = "<<sum<<endl;                                  //displaying sum
        return 0;
    }
    else{
        cout<<arr[i]<<endl;                                                     //displaying array
        sum=sum+arr[i];                                                         //adding
        i++;                                                                    //iterating
        sumArray( arr);                                                         //calling function
    }

return 0;
}

void addConstant (int *ptr1,int *ptr2)
{
    *ptr1 = *ptr1 + 100;                                                     // adding 100 in ptr1
    *ptr2 = *ptr2 + 100;                                                    //adding 100 in ptr2 value
    cout<<*ptr1<<endl;                                                      //displaying ptr1
    cout<<*ptr2<<endl;                                                      //displaying ptr2
}
int sum1=0;

void sumOf2d(int arr1[row][col] ,int m,int g)
 {
    if (m == row)                                                             //condition
    {
        cout<< sum1 <<endl;                                                    //displaying sum
        return ;
    }
    else if (g == col) {                                                      //condition
         m++;                                                                 //iterating rows
         g = 0;                                                               //when g is zero
         sumOf2d(arr1, m, g);                                                 //calling function
     }
    else
    {
        sum1 = sum1 + arr1[m][g];                                            //adding elements
        g++;                                                                 //iterating
        sumOf2d(arr1, m, g);                                                 //calling
    }
    return ;
}




