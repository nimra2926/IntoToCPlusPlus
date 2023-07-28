#include "Functions.h"
#include <iostream>

using namespace std;

//################################### TASK 1 ########################################
void print() {
    cout << endl;
    cout << "I WILL BE WORKING HARD TO GET A GOOD GRADES IN THIS COURSE." << endl;  //to display the line
}

//################################### TASK 2 ########################################
void takeValues() {
    int a;
    int b;                                                              //initializing variables
    int c;
    cout << endl;
    cout << "PLEASE ENTER THE POSITIVE VALUE OF a = ";                    //asking user to enter some number
    cin >> a;
    cout << "PLEASE ENTER THE POSITIVE VALUE OF b = ";                   //asking user to enter value of b
    cin >> b;
    cout << "PLEASE ENTER THE POSITIVE VALUE OF c = ";                    //asking user to enter value of c
    cin >> c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;                                           //displaying a ,b ,c
    cout << "c = " << c << endl;
}

//################################### TASK 3 ########################################

int addition(int a, int b, int c) {
    int sum;                                                                  //initializing sum
    cout << endl;
    cout << "PLEASE ENTER THE POSITIVE VALUE OF a = ";                        //asking user to enter value of a
    cin >> a;
    cout << "PLEASE ENTER THE POSITIVE VALUE OF b = ";                         //asking user to enter value of b
    cin >> b;
    cout << "PLEASE ENTER THE POSITIVE VALUE OF c = ";                         //asking user to enter value of c
    cin >> c;
    sum = a + b + c;                                                           //finding sum of a,b,c
    cout << "sum is = " << sum << endl;                                        //displaying sum
    return sum;
}

//################################### TASK 5 ########################################
int add(int a, int b, int c) {

    int sumOfNums;                                                            //initializing sumOfNums
    cout << endl;
    sumOfNums = a + b + c;                                                    //finding sumOfNums
    return sumOfNums;                                                         //displaying sumOfNums
}
//################################### TASK 6 ########################################
template <typename T>
T add1(T a, T b, T c) {
    return (a+b+c);                                                            //returning sum;
}

//################################### TASK 7 ########################################

void printString() {
    for (char i = 0; i <= 1000; i++) {                       // a loop for printing it 1000 times
        cout << "I WILL BE WORKING HARD TO GET A GOOD GRADES IN THIS COURSE." << endl;          // displaying
    }
}

//################################### TASK 8 #########################################
void printInt() {
    int arr[5];                                                //initializing an arr
    cout << "please enter the 5 integer value= ";              //displaying that we are about to enter 5 integer values
    for (int i = 0; i < 5; i++) {                              //an loop for taking 5 integers
        cin >> arr[i];                                         //taking input
    }
    cout << "your entered 5 integer value= ";               //displaying that we are about to enter 5 integer values
    for (int i = 0; i < 5; i++) {                            //an loop for taking 5 integers
        cout << arr[i];                                      //displaying array of 5 integers
    }
    cout<<endl;
}
//################################### TASK 9 #########################################
void integerValue() {

    int arr[5];
    cout << "please enter the 5 integer value= ";                      //displaying that we are about to take 5 integer values
    for (int i = 0; i < 5; i++) {                                      //a loop for 5 integer display
        cin >> arr[i];                                                 //taking it from user
    }
}
//################################### TASK 10 #########################################
void storeData(){
    int arr2[3][3];                                                     //initializing arr2 of 3 by 3
    arr2[0][0]=11;                                                      //giving values
    arr2[0][1]=12;
    arr2[0][2]=13;
    arr2[1][0]=21;
    arr2[1][1]=22;
    arr2[1][2]=23;
    arr2[2][0]=31;
    arr2[2][1]=32;
    arr2[2][2]=33;
    for(int i=0;i<3;i++)                                                //making a loop for rows 3 rows
    {
        for(int j=0;j<3;j++){                                           //making a loop for 3 columns
            cout<<arr2[i][j]<<" ";                                      //displaying arr2
        }
        cout<<endl;
    }


}

