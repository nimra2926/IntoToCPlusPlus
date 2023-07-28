#include "Functions.h"
#include <iostream>

using namespace std;

//void addMatrix() {
//
//    int opt;
//    do {
//        cout << "1.For 1d row matrix addition." << endl;
//        cout << "2.for 1d column matrix addition." << endl;                             //displaying for option
//        cout << "3.exit." << endl;
//        cin >> opt;
//        switch (opt) {
//            case 1: {
//                rowAddition();                                                         //calling
//                break;
//            }
//            case 2: {
//
//                columnAddition();                                                      //calling
//                break;
//            }
//            case 3: {
//                cout << "you choose to exit..0_0" << endl;
//                exit(1);
//                break;
//            }
//            default: {
//                cout << "you have enter invalid input" << endl;
//            }
//        }
//    } while (opt >= 1 && opt <= 3);
//}
//
//void rowAddition() {
//    int columns;
//    cout << "please enter the columns of matrix = ";                                     //taking number of columns
//    cin >> columns;
//    int arr[1][40];
//    int arr1[1][40];                                                                     //initializing
//    int arr2[1][40];
//    cout << "please enter the values of matrix 1 = ";
//    for (int i = 0; i < 1; i++) {
//        for (int j = 0; j < columns; j++) {
//            cin >> arr1[i][j];                                                           //getting values of matrix 1
//        }
//    }
//    cout << "please enter the values of matrix 2 = ";
//    for (int i = 0; i < 1; i++) {
//        for (int j = 0; j < columns; j++) {
//            cin >> arr2[i][j];                                                           //getting values of matrix 2
//        }
//    }
//    for (int i = 0; i < 1; i++) {
//        for (int j = 0; j < columns; j++) {
//            arr[i][j] = arr1[i][j] + arr2[i][j];                                        //adding and then storing in array
//        }
//    }
//    cout << "the sum { ";
//    for (int i = 0; i < 1; i++) {
//        for (int j = 0; j < columns; j++) {
//            cout << arr[i][j] << " ";                                                  //displaying matrix
//        }
//    }
//    cout << "}";
//    cout << endl;
//}
//
//void columnAddition() {
//    int rows;
//    cout << "please enter thr number of rows in matrix = ";
//    cin >> rows;
//    int arrC[50][1];
//    int arrA[50][1];
//    int arrB[50][1];
//    cout << "please enter the values of matrix 1 = ";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < 1; j++) {
//            cin >> arrA[i][j];
//        }
//    }
//    cout << "please enter the values of matrix 2 = ";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < 1; j++) {
//            cin >> arrB[i][j];
//        }
//    }
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < 1; j++) {
//            arrC[i][j] = arrA[i][j] + arrB[i][j];
//        }
//    }
//    cout << "the sum  \n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < 1; j++) {
//            cout << arrC[i][j];
//        }
//        cout << "\t\t" << endl;
//    }
//    cout << endl;
//}
//
//void multiplyMatrix()
//{
//    int row1;
//    int column1;                                                                  //initializing
//    int row2;
//    int column2;
//    int sum=0;
//    cout<<"please enter the number of rows of matrix 1 = ";                       //getting rows of matrix 1 from user
//    cin>>row1;
//    cout<<"please enter the number of columns of matrix 1 = ";                    //getting columns of matrix 1 from user
//    cin>>column1;
//    cout<<"please enter the number of rows of matrix 2 = ";                        //getting rows of matrix 2 from user
//    cin>>row2;
//    cout<<"please enter the number of columns of matrix 2 = ";                     //getting columns of matrix 2 from user
//    cin>>column2;
//    int arrM[50][50];
//    int arrN[50][50];
//    int arrO[50][50];                                                           //initializing arrays
//    if(row1==1 && column2==1){
//        if(column1==row2) {
//            cout << "please enter the values of matrix 1 = ";
//            for (int i = 0; i < row1; i++) {
//                for (int j = 0; j < column1; j++) {
//                    cin >> arrM[i][j];                                                    //getting matrix 1 values
//                }
//
//            }
//            cout << "please enter the values of matrix 2 = ";
//            for (int i = 0; i < row2; i++) {
//                for (int j = 0; j < column2; j++) {
//                    cin >> arrN[i][j];                                                    //getting matrix 2 values
//                }
//            }
//            for (int i = 0; i < row1; i++)
//                for (int j = 0; j < column2; j++)
//                    for (int k = 0; k <
//                                    column1; k++)                                      //multiplying and then adding the values to opt 1 by 1 matrix
//                    {
//                        arrO[i][j] = arrO[i][j] + arrM[i][k] * arrN[k][j];
//                    }
//
//            cout << endl << "multiplication is = ";
//            for (int i = 0; i < row1; i++) {
//                for (int j = 0; j < column2; j++) {
//                    cout << " " << arrO[i][j];                                            //displaying
//                }
//                cout << endl;
//            }
//        }
//        else{
//            cout<<"the row 2 is not equal to the column2 so this can not be multiplied.. -_-";     //condition if row of matrix 1 is not equal to column of matrix 2
//        }
//    }
//    else{
//        cout<<"the row1 and column2 must be equal to 1 (for 1D)"<<endl;                           //condition
//    }
//}
//
//void shittyPointers(){
//    cout<<endl;
//    cout<<"############################# TASK 1 ###########################"<<endl;
//    int x=4;                                                                      //declaring and giving it value of 4
//    int y=6;                                                                       //declaring and giving it value of 6
//    int z=8;                                                                        //declaring and giving it value of 8
//    int *p;
//    int *q;                                                                          //initializing
//    int *r;
//    p=&x;
//    q=&y;                                                                            //giving path by reference
//    r=&z;
//    cout<<"the value of x = "<<x<<endl;
//    cout<<"the value of y = "<<y<<endl;
//    cout<<"the value of z = "<<z<<endl;
//    cout<<"the value of p = "<<p<<endl;
//    cout<<"the value of q = "<<q<<endl;                                           //displaying
//    cout<<"the value of r = "<<r<<endl;
//    cout<<"the value of *p = "<<*p<<endl;
//    cout<<"the value of *q = "<<*q<<endl;
//    cout<<"the value of *r = "<<*r<<endl;
//    cout<<"############################# TASK 2 ###########################"<<endl;
//    cout<<"swapping pointers .";                                                  //printing statement
//    cout<<"############################# TASK 3 ##########################"<<endl;
//    int *num;                                                                         //initializing
//    num=p;                                                                            //storing value in num
//    p=q;                                                                              //swapping
//    p=r;
//    r=num;                                                                            //giving value of p in num
//    cout<<"the new address of p = "<<p<<endl;
//    cout<<"the new address of q = "<<q<<endl;                                         //displaying address
//    cout<<"the new address of r = "<<r<<endl;
//    cout<<"############################ TASK 4 ###########################"<<endl;
//    cout<<"the value of x = "<<x<<endl;
//    cout<<"the value of y = "<<y<<endl;
//    cout<<"the value of z = "<<z<<endl;                                              //displaying values
//    cout<<"the value of p = "<<p<<endl;
//    cout<<"the value of q = "<<q<<endl;
//    cout<<"the value of r = "<<r<<endl;
//    cout<<"the value of *p = "<<*p<<endl;
//    cout<<"the value of *q = "<<*q<<endl;
//    cout<<"the value of *r = "<<*r<<endl;
//}

//void addition(){
//    int size;
//    cout<<"enter size =";
//    cin>>size;
//    if(size>=100){
//        cout<<"size must be less than 100";
//    }
//    if(size<0){
//        cout<<"size can't be negative ";
//    }
//    int arr[size];
//    int arr1[size];
//    int arr2[size];
//    cout<<"plz enter elements in array =   ";
//    for(int i=0;i<size;i++){
//        cin>>arr1[i];
//    }
//    cout<<"plz enter elements in array =   ";
//    for(int j=0;j<size;j++){
//        cin>>arr2[j];
//    }
//    for(int j=0;j<size;j++){
//        arr[j]=arr1[j]+arr2[j];
//    }
//    cout<<"the final array after sum =    ";
//    for(int j=0;j<size;j++){
//        cout<<arr[j];
//    }
//}
//void find (){
//    int row;
//    int col;
//    int count=0;
//    int count1=0;
//    int count3=0;
//    int count4=0;
//    cout<<"enter rows";
//    cin>>row;
//    cout<<"enter col";
//    cin>>col;
//    if(row>=100 && col>=100){
//        cout<<"size must be less than 100"<<endl;
//    }
//    if(row<0 && col<0){
//        cout<<"size can't be negative "<<endl;
//    }
//    int arr[row][col];
//    int arr1[row][col];
//    int arr2[row][col];
//    cout<<"plz enter elements in array =   ";
//    for(int i=0;i<row;i++){
//        for(int j=0;j<col;j++){
//            cin>>arr1[i][j];
//            if(arr1[i][j]%2==0){
//                count++;
//            }
//            if(arr1[i][j]%2==1){
//                count1++;
//            }
//        }
//    }
//    cout<<"the total even numbers in array1 ="<<count<<endl;
//    cout<<"the total odd numbers in array1 ="<<count1<<endl;
//    cout<<"plz enter elements in array =   ";
//    for(int i=0;i<row;i++){
//        for(int j=0;j<col;j++){
//            cin>>arr2[i][j];
//            if(arr2[i][j]%2==0){
//                count3++;
//            }
//            if(arr2[i][j]%2==1){
//                count4++;
//            }
//        }
//    }
//    cout<<"the total even numbers in array1 ="<<count3<<endl;
//    cout<<"the total odd numbers in array1 ="<<count4<<endl;
//}
int addition (int num){
    cout<<"please enter num";
    cin>>num;
    int n;
    n=num;
    int sum=0;
    int count = 0;
    while (n != 0)
    {
        n= n / 10;
        count++;
    }
    cout<<" the number of digits are ="<<count<<endl;
    if(count <2){
        cout<<"you can't enter the number less than 2 digits "<<endl;
    }
    else if(count >5){
        cout<<"the number you added is greater than 5 "<<endl;
        cout<<"PLEASE ENTER NUMBER LESS THAN 5 DIGITS";
    }
    while(num>0){
       sum=sum + num%10;
       num=num/10;
   }
   cout<<"sum = "<<sum;
}

    bool circularPrime(int n1){
        int temp;
        do
        {

            int  n2, n3;
            cout << "Enter a number 3 digit number : ";
            cin >> n1;
            temp = n1 % 10;
            n2 = n1 / 10;
            n2 = (temp * 100) + n2;
            temp = n2 % 10;
            n3 = n2 / 10;
            n3 = (temp * 100) + n3;
            if (n1 % 2 != 0 || n1 % 3 != 0 || n1 % 5 != 0)
            {
                if (n2 % 2 != 0 || n2 % 3 != 0 || n2 % 5 != 0)
                {
                    if (n3 % 2 != 0 || n3 % 3 != 0 || n3 % 5 != 0)
                        cout << endl<<n1 << " is a circuler prime number "<<endl;
                }

            }
            else
                cout << endl<<n1 << " is not a circuler prime number "<<endl;
            cout<<"if you want to try agin press 1 : "	;
            cin>>temp;
        }
        while(temp==1);

    }