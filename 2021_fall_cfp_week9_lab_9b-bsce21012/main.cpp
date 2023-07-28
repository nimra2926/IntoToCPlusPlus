#include <iostream>
#include "Functions.h"
using namespace std;
int main()
{
    //####################### TASK1 #########################
   printDiamond ();
    //####################### TASK2 #########################
  int arr1[5],*ptr;
   reverseArrayElements(ptr, arr1);
//####################### TASK3 #########################
    int i=1;
int j=1;
    int rows2;
    cout<<"please enter the rows: ";
    cin>>rows2;
    int x=rows2;
    int y=rows2;

    int z=1;                                                                  //initializing z as 1 as k as 2 into rows -1
    int k=rows2*2-1;
    recursion(i, rows2, x, y );
    recursion1( rows2,  z, k, j);
    return 0;
}


