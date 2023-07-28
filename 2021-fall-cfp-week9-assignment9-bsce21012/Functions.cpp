#include "Functions.h"
#include <iostream>

using namespace std;

int searchNumber() {

    int arr[7];                                                // declaring an array
    int num;                                                   //declaring num
    int count = 0;                                             //initializing count zero
    cout << "please enter 7  elements in the array" << endl;
    for (int i = 0; i < 7; i++) {                               //entering array elements
        cin >> arr[i];
    }
    cout << "array :";
    for (int i = 0; i < 7; i++) {                              //displaying an array of 7 elements
        cout << arr[i];
    }
    cout << endl;
    cout << "please enter the number you want to search :" << endl;      //displaying num to search
    cin >> num;                                                           //entering number
    cout << "search:" << num << endl;

    for (int i = 0; i < 7; i++) {
        if (num == arr[i]) {                                              //applying condition
            count++;                                                      //iterating the condition to check again and again to check that number

        }

    }
    cout << "count of number: " << num << " in the array is " << count << endl;       //displaying how many times number repeat
}

int checkingNumber() {
    int arr[25];                                                            //declaring array
    int even = 0;                                                           //initializing even as zero
    int odd = 0;                                                            //initializing odd as zero
    int negative = 0;                                                       //initializing negative as zero
    int positive = 0;                                                       //initializing positive as zero
    cout << "\nplease enter the 25 elements of the array:" << endl;
    for (int i = 0; i < 25; i++) {
        cin >> arr[i];                                                      //entering 25 elements
    }
    cout << "array is:   ";
    for (int i = 0; i < 25; i++) {                                          //displaying elements in array
        cout << arr[i];
    }
    for (int i = 0;i < 25; i++)                     //to check how many numbers are even ,odd ,positive and how many are negative
    {
        if (arr[i] < 0) {                                                   //if element is less than zero
            negative = negative + 1;                                        //checking again and again

        }
        if (arr[i] >= 0) {                                                  //if element is greater than zero
            positive++;                                                     //checking again and again
        }

        if (arr[i] % 2 == 0) {                                              //if mode is zero
            even++;                                                         //iterating
        } else {
            odd++;                                                          //iterating
        }


    }
    cout << "\neven are:" << even << endl;                                 //displaying how many are even
    cout << "odd are:" << odd << endl;                                     //displaying how many are odd
    cout << "negative are:" << negative << endl;                           //displaying how many are negative
    cout << "positive are:" << positive << endl;                           //displaying how many are positive
}


int findingNumber() {
    int myArray[][4] = {{1, 2, 3, 4},{5, 6, 7, 8}};                       //initializing array
    int smallest = myArray[0][0];                                         //initializing smallest as array of index zero ,zero
    int largest = myArray[0][0];                                          //initializing largest as array of index zero ,zero

    int width = 4;
    int height = 2;                                                        //initializing width and height

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << myArray[i][j] << ' ';                                 //displaying array
            if (smallest > myArray[i][j]) {                               //applying condition
                smallest = myArray[i][j];
            }
            if (largest < myArray[i][j]) {                                //applying condition
                largest = myArray[i][j];
            }
        }
        cout << endl;
    }

    cout << "\nsmallest is:" << smallest << endl;                         //displaying smallest number
    cout << "\nlargest is:" << largest << endl;                           //displaying largest

}

int checkPrime() {

    int array[7];
                                                                       //initializing j ,n and array
    int j;
    int n;

    cout << "please Enter 7 elements of the array :";
    for (int i = 0; i < 7; i++) {
        cin >> array[i];                                              //entering elements
    }
    cout << "the array is:";
    for (int i = 0; i < 7; i++) {
        cout << array[i];                                            //displaying array
    }
    cout << endl;
    cout << " prime numbers are given as :";

    for (int i = 0; i < 7; i++) {
        j = 2;
        n = 1;
        while (j < array[i]) {                                    // array element should be greater than 2
            if (array[i] % j == 0) {                              //then mode of element is zero
                n = 0;
            }
            j++;                                                //iterating
        }
        if (n == 1) {
            cout << array[i] << " ";
        }
    }

    return 0;
}

void reverseArray() {

    int arr1[5];                                                   //initializing array
    int *ptr = &arr1[5];                                           //initializing pointer
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

void sortArray() {
    int arraya[5];                                                 //initializing array and temp
    int temp;
    cout << "please enter 5 number for array :" << endl;
    for (int i = 1; i <= 5; i++) {                                 //entering array
        cin >> arraya[i];
    }
    cout << "the arraya is : ";
    for (int i = 1; i <= 5; i++) {                                  //displaying array
        cout << arraya[i] << " ";
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {                    //applying loops
            if (arraya[j] > arraya[j + 1]) {                  //condition
                temp = arraya[j];                             //storing arraya[j] in temp
                arraya[j] = arraya[j + 1];                    // and then arraya [j] in arraya[j+1]
                arraya[j + 1] = temp;                         //arraya[j+1] in temp
            }
        }
    }
    cout << "\nthe sorted array is: ";
    for (int j = 1; j <= 5; j++) {
        cout << arraya[j] << " ";                             //displaying sorted array

    }
}