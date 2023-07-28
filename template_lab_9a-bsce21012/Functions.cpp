#include "Functions.h"
#include <iostream>

using namespace std;

void printCharacter() {
    char ch[100];                                                      //initialize a char array
    char *ptr;                                                         //initialize an pointer
    cout << "please enter the string:" << endl;
    cin.get(ch, 100);                                                  //enter an array of string having size 100
    cout << "enter string is:" << endl;
    ptr = ch;                                                          //store the ch in ptr
    while (*ptr != '\0')                                               //condition of *ptr is not equal to \0
    {
        cout << *ptr;                                                  //display ptr value
        ptr++;                                                         //iterating
    }
    cout << endl;
}

void sumOfElements() {

    int num;
    cout << "please enter how many numbers u want to add" << endl;            //enter the size as num
    cin >> num;
    int *arr = new int[num];                                                  //given a new memory
    int sum = 0;                                                              //initialize sum
    cout << "please enter " << num << " number" << endl;

    for (int i = 0; i < num; i++)                                             //loop for input of  array
    {
        cout << "enter " << i + 1 << " number";
        cin >> arr[i];
    }

    cout << "elements of array are :{";                                        //loop for displaying array
    for (int i = 0; i < num; i++) {
        cout << arr[i];
    }
    cout << "}" << endl;

    int *ptr;
    ptr = &sum;
    for (int j = 0; j < num; j++) {                                           //loop for finding sum
        sum = *ptr + arr[j];
    }
    cout << "sum of elements is " << sum;                                    //displaying sum
    delete[]arr;                                                             //deleting the memory taken
}

void swapValue (float * numa ,float *numb)
{

    float *ptr = new float;                                               //giving a new memory
    *ptr = *numa;                                                         //storing the value of ptr in numa
    *numa = *numb;                                                        //storing the value of numa in numb
    *numb = *ptr;                                                         //storing numb in ptr
    cout<<"x="<<*numa<<endl;                                              //displaying numa
    cout<<"Y="<<*numb<<endl;                                              //displaying numb

    delete ptr;                                                           //deleting the memory taken
}


