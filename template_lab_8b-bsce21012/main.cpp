#include <iostream>
#include "Functions.h"
using namespace std;
int main() {
    int arr[5] = {0, 1, 2, 3, 4};

    sumArray(arr);


    int no1;
    int no2;
    cout << "please enter a number" << endl;
    cin >> no1;
    cout << "please enter 2 number " << endl;
    cin >> no2;

    addConstant(&no1, &no2);



   int arr1[row][col]={0,1,2,3,4,5,6,7,8};
    int m=0;
    int g=0;
   sumOf2d ( arr1, m, g);
   return 0;
}



