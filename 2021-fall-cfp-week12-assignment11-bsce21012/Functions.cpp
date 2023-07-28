#include "Functions.h"
#include <iostream>

using namespace std;

void DisplayingValues() {
    cout << "################################ TASK 1 #############################" << endl;
    int x;                                                                               //initializing
    int y;
    int sum;
    cout << "please enter the value of x in the range of 0 to 19 =  ";
    cin >> x;
    cout << "please enter the value of y in the range of 0 1o 19 =  ";
    cin >> y;
    if (y <
        20) {                                                                         //condition for x and y to be less than 20
        if (x < 20) {
            sum = x + y;                                                                 //finding sum
            cout << "sum =  " << sum << endl;
        }
        cout << endl;
    } else {
        cout << "you have entered the values out of range." << endl;
    }
}

void checkingValue() {
    cout << "################################ TASK 2 #############################" << endl;
    int x;
    int y;
    int sum;
    int sub;                                                                             //initializing
    cout << "please enter the value of x in the range of 0 to 19 =  ";
    cin >> x;
    cout << "please enter the value of y in the range of 0 1o 19 =  ";
    cin >> y;

    if (y < 20) {                                                                 //if the value is less than 20
        if (x < 20) {
            sum = x + y;
            cout << "sum =  " << sum << endl;                                     //then print sum
        }
        cout << endl;
    } else {
        sub = x - y;                                                               //otherwise sub
        cout << "sub =  " << sub << endl;
    }
}

//void Display() {
//    cout<<"################################ TASK 3 #############################"<<endl;
//    int x;
//    int y;
//    int sum;                                                              //initializing
//    cout << "please enter the value of x in the range of 0 to 19 =  ";
//    cin >> x;
//    cout << "please enter the value of y in the range of 0 1o 19 =  ";
//    cin >> y;
//    if (y < 20); {                                                         //we put the ; after if condition
//        if (x < 20); {
//            sum = x + y;
//            cout << "sum =  " << sum << endl;                             //printing sum
//        }
//        cout<<endl;
//    }
//    else                                                                  // we will get an error that there is else without an if condition
//            {
//                cout<<"you have entered the values out of range."<<endl;
//            }
//    }
//}

//void checking() {
//    cout<<"################################ TASK 4 #############################"<<endl;
//    int x;
//    int y;                                                                         //initializing
//    int sum;
//    int sub;
//    cout << "please enter the value of x in the range of 0 to 19 =  ";
//    cin >> x;
//    cout << "please enter the value of y in the range of 0 1o 19 =  ";
//    cin >> y;
//    if (y < 20); {                                                                  //putting ; after if condition
//        if (x < 20); {
//            sum = x + y;
//            cout << "sum =  " << sum << endl;
//        }
//    }
//    else                                                                             //we will get an error that we cant have else without any if condition
//        {
//            sub = x - y;
//            cout << "sub =  " << sub << endl;
//        }
//    }

void sequenceReverse() {

    int i = 100;                                          //declaring
    while (i > -100)                                     // as we wanted to print 50 numbers so we put this condition
    {
        i -= 4;                                           // we wanted number after every 4 number
        cout << i << " ,";                                  //printing
    }
}

void sequence() {

    int i = 100;                                         //declaring
    while (i >-100);                                   //we put semi colon after while condition so the code will not run
    {
        i -= 4;
        cout << i << " ,";
    }
}

void consecutiveNumbers() {
    int x = 0;                                                                            //initializing
    int j = 0;
    int i;
    while (j <
           5) {                                                                    // as we wanted this to print 5 times so
        i = 1;                                                                           //declaring i
        while (i <= 10) {
            x++;
            cout << "x = " << x << endl;                                               //printing
            i++;
        }
        cout << endl;
        x = (x) * 2;                                                                     //condition for doubling
        cout << "after doubling   " << x << endl;
        j++;                                                                           //incrementing
    }
}

int fact() {
    int i;                                                                         //initializing
    int num = 10;
    int fact = 1;
    for (i = 1; i <= num; i++) {
        fact = fact * i;                                                           //printing it
        cout << fact << " ";
    }
}

void squareNum() {
    int arr1[3];
    int i = 0;
    int stop;
    while (stop!=-111) {
        cout << "the enter values are = ";
        for (int i = 0; i < 3; i++) {
            cin >> arr1[i];                                                            //displaying
        }
        cout << endl;
        int j = 0;
        cout << "the square = ";
        for (int i = 0; i < 3; i++) {
            cout << arr1[i] * arr1[i] << " ";                                          //for squaring
        }
        cout << endl;
                                                                                 // condition that if user enter -111 then tell them that its invalid
        cout << "you enter -111 " << endl;
        cin>>stop;
    }

}

void printTables() {
    int rows;
    int columns;
    cout << "please enter number of rows = ";                                   //taking rows and columns
    cin >> rows;
    cout << "please enter number of columns = ";
    cin >> columns;
    int Table;
    for (int i = 1;
         i <= rows; i++) {                                              //nested loop for printing in rows and columns
        for (int j = 1; j <= columns; j++) {
            Table = i * j;

            cout << Table << " ";                                               //displaying

        }
        cout << endl;
    }

}


