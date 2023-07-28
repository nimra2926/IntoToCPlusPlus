#include <iostream>
#include "Functions.h"
using namespace std;
int main() {
    int arr[5] = {0, 1, 2, 3, 4};
    int i, sum = 0;
    sumOfArray(arr, i, sum);


    int ptr1;
    int ptr2;
    cout<<"please enter a number"<<endl;
    cin>>ptr1;
    cout<<"please enter 2 number "<<endl;
    cin>>ptr2;

   addConstant ( &ptr1, &ptr2);
    return 0;
}



