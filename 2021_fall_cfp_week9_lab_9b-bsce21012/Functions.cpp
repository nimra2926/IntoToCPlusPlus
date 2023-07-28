#include "Functions.h"
#include <iostream>

using namespace std;

char printDiamond() {
    int i;                                                           //declaring i ,j and rows
    int j;
    int rows;

    cout << "please enter the rows: ";                                        //taking rows from user
    cin >> rows;                                                              //entering rows
    int x = rows;                                                             //initializing x and y as rows
    int y = rows;
    for (i = 1; i <= rows; i++)                                                        //for loop for iterating i
    {
        for (j = 1; j < rows * 2; j++)                                                   //for loop for iterating j
        {
            if (j == x || j ==y)                                                    //applying condition of j is equal to x and y so that all other places should not print that char
            {
                cout << "*";                                                     //displaying character
            } else {
                cout << " ";                                                     //displaying space
            }

        }
        x--;                                                                   //decrementing x
        y++;                                                                   //incrementing y
        cout << endl;

    }
    int z = 1;                                                                  //initializing z as 1 as k as 2 into rows -1
    int k = rows * 2 - 1;
    for (i = 1; i <= rows; i++)                                                   //applying loops
    {
        for (j = 1; j < rows * 2; j++) {
            if (j == z || j ==k)                                             //applying condition to print spaces other than that 2 points
            {
                cout << "*";                                               //displaying character
            } else {
                cout << " ";                                              //displaying spaces
            }

        }
        z++;                                                            //incrementing z
        k--;                                                            //decrementing k
        cout << endl;                                                     //for new line

    }
}


void reverseArrayElements(int *ptr, int arr1[5]) {

    ptr = &arr1[5];                                           //initializing pointer
    cout << "\nplease enter 5 elements of array " << endl;
    for (int i = 0; i < 5; i++) {                                    //entering elements
        cin >> arr1[i];
    }
    cout << "the arr1 is : ";
    for (int i = 0; i < 5; i++) {                                    //displaying array
        cout << arr1[i];
    }
    cout << endl;
    cout << "the reversed arr1 is : ";
    for (int i = 5 - 1; i >= 0; i--) {                               //applying loop
        int *ptr = &arr1[i];
        cout << *ptr;                                                //displaying pointer
    }
    cout << endl;
}

void recursion(int i, int rows2, int x, int y) {
    if (i > rows2) {                                                    //applying condition
        return;
    } else {
        for (int j = 1; j < rows2 * 2; j++) {                            //for loop
            if (j == x || j == y) {                                      //condition for space
                cout << "*";                                             //displaying character
            } else {
                cout << " ";                                             //displaying space
            }
        }
        x--;                                                             //decrementing x
        y++;                                                             //incrementing y
        cout << endl;                                                    //for next line
        i++;                                                             //incrementing in i
        recursion(i, rows2, x, y);                                       //calling the function again

    }
}

void recursion1(int rows2, int z, int k, int j) {
    if (j >= rows2 * 2) {                                                 //applying statment
        return;
    } else {
        for (j = 1; j < rows2 * 2; j++) {                                 //applying loop
            if (j == z || j == k) {                                       //for space we apply condition
                cout << "*";                                              //displaying character
            } else {
                cout << " ";                                              //displaying space
            }
        }
        k--;
        z++;                                                            //incrementing z
                                                                //decrementing k
        cout << endl;                                                   //next line
        j++;                                                       // incrementing in j
        recursion(rows2, z, k, j);                                      //calling function
    }

}




