//
// Created by ITU_UBS on 25/11/2021.
//
#include <iostream>
#include "Functions.h"

using namespace std;
//
//float menu() {
//    int number;
//    cout << "please enter number for your choice " << endl;
//    cout << "please enter 1 for bill " << endl;
////    cout<<
//
//    cin >> number;
//    cout << number << endl;
//}

float calculateBill(float sum, float rate)
{
    float bill;
    float arr[3];
    cout << "please enter 3 values:"<<endl;
    for (int i = 0; i <= 3; i++)
    {
        cin >> arr[i];
    }
    cout << "the quantity is:"<<endl;
    for (int i = 0; i <= 3; i++)
    {
        cout << arr[i] << endl;
        sum = sum + arr[i];
        sum++;
    }
    int days = 5;
    rate = sum / days;
    bill = rate;
    cout << "bill" << bill << endl;
}

float recursion() {
    int days;
    if (days == 31) {
        return 0;
    } else {
        float bill;
        float arr[3];
        float sum;
        float rate1;
        cout << "please enter 3 values";
        for (int i = 0; i <= 3; i++) {
            cin >> arr[i];
        }
        cout << "the quantity is:";
        for (int i = 0; i <= 3; i++) {
            cout << arr[i] << endl;
            sum = sum + arr[i];
            sum++;
        }
        int days = 5;

        rate1 = sum / days;
//            bill = rate1++;
        bill = rate1;
        cout << "bill" << bill << endl;
         recursion();
    }
}








