








#include "Functions.h"
#include <iostream>
using namespace std;
int power(int x, int n)
{
    if(n == 0)                         //if exponent value is zero
        return 1;                      //terminate the program
    else
        return x * power(x,n-1);     //  a recursive function
}

    int menu()
    {
        float num1, num2;
        cout << "please enter a positive number" << endl;          //enter a number
        cin >> num1;
        cout << "please enter second positive number" << endl;    //entered second number
        cin >> num2;
        float *ptr1;                                              //initialize a pointer
        float *ptr2;                                              //initialize pointer 2
        ptr1 = &num1;                                             //store the value of num1 in pointer ptr1
        ptr2 = &num2;                                             //store the value of num2 in pointer ptr2
        int operation_var;
        int menu;
        do {
            cout << "\n Given below are the menu of the given operation" << endl;
            cout << "\n please enter 1 for Sum operation " << endl;
            cout << "\n please enter 2 for Subtract operation" << endl;
            cout << "\n please enter 3 for Multiply operation" << endl;
            cout << "\n please enter 4 for Divide operation" << endl;
            cout << "\n please enter 5 for module operation" << endl;
            cout << "\n please enter 6 for exit" << endl;
            cin >> operation_var;
            switch (operation_var) {                               //applied switch cases
                case 1:
                    cout << sum(ptr1, ptr2);                      //display sum
                    break;
                case 2:
                    cout << subtract(ptr1, ptr2);                 //display subtract
                    break;
                case 3:
                    cout << multiply(ptr1, ptr2);                //display multiply
                    break;
                case 4:
                    cout << divide(ptr1, ptr2);                 //display divide
                    break;
                case 5:
                    cout << module(ptr1, ptr2);                //display module
                    break;
                default:
                    cout << " you have enter an invalid operation number" << endl;        //an case if user enter some invalid input
                    break;

            }
        } while (operation_var > 0 && operation_var <= 5);                               //terminating condition
    }


int sum(float *ptr1,float *ptr2)
{
    cout << "\nSum = " <<*ptr1 + *ptr2  << endl;                                       //sum of pointers
    return *ptr1 + *ptr2;                                                              // returning sum of numbers store in pointers
}
int subtract(float *ptr1,float *ptr2)
{
//    cout << "\nSubtraction = " <<*ptr1 - *ptr2 << endl;                            //subtracting  pointers
    return *ptr1 - *ptr2;                                                            // returning subtraction
}
int multiply(float *ptr1,float *ptr2)
{
//    cout << "\nMultiply = " << *ptr1 * *ptr2 << endl;                              //multiplication of pointers
    return *ptr1 * *ptr2;                                                            //returning multiplication
}
float divide(float *ptr1,float *ptr2)
{
    float resu;                                                                    //initialized resu
//    cout << "\nDivide = " <<*ptr1 / *ptr2  << endl;
    resu= *ptr1 / *ptr2;                                                           //store the division in variable  resu
    return resu;                                                                   //returning resu
}
int module (float *ptr1,float *ptr2)
{
//    cout << "\nmodule = " <<*ptr1 % *ptr2  << endl;                            //module of numbers store in pointers
    return (int)*ptr1 % (int)*ptr2;                                              //returning pointers
}


void digit(int array[8],int num, int digits){
    int i=0;                                                                     //declare the value of i =0
    int newnum=num;                                                              //the value of num is stored in newnum
    while(newnum!=0){                                                            //applied condition of newnum is not equal to zero
        array[i]=newnum%10;                                                      //taking module
        newnum=newnum/10;                                                        //reversing
        i++;                                                                     //iterating i
        digits++;                                                                //iterating digits
    }

    if(digits<8){                                                               //the digits in array should be less than 8
        if (digits%2==0){                                                       //if digit is even
            int arr2[2];                                                        //initialized an new array of size 2
            int mean1=(digits/2)-1;                                             //take the mean (as it start from zero so subtracted 1 )
            int mean2=digits/2;                                                 //take the mean
            arr2[0]=array[mean1];                                               //store the value of mean1 in array 2 at 0
            arr2[1]=array[mean2];                                               //store the value of mean2 in array 2 at 1
            array[mean1]=arr2[1];                                               //swap the value of mean1 at 1 in array
            array[mean2]=arr2[0];                                               //swap the value of mean2 at 0 in array

        }
        for(int i=0; i<digits; i++){
            cout<<array[i];                                                     //display the array
        }
        cout<<'\n';                                                             //display
        }


    else{
        cout<<"number cannot be greater than 8 digits";                        // terminating condition if user enter an array of more than 8 digits
        return;
    }

    return;
}

