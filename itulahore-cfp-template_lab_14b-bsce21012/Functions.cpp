#include "Functions.h"
#include <iostream>

using namespace std;

void additionOF2dArray() {
    int col;
    int row;
    int arr[50][50];                                             //initializing
    int arr1[50][50];
    int arr2[50][50];
    cout << "please enter rows of arr" << endl;
    cin >> row;                                              //taking rows and columns as input
    cout << "please enter columns of arr" << endl;
    cin >> col;
    cout << "please enter the values of arr1= ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {                           //taking the values of array
            cin >> arr1[i][j];
        }
    }
    cout << "  The arr1 is = ";
    for (int i = 0; i < row; i++) {                             //displaying the array
        for (int j = 0; j < col; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl << "\t\t";
    }
    cout << endl;
    cout << "please enter the values of arr2= ";
    for (int i = 0; i < row; i++) {                         //taking the values of array2
        for (int j = 0; j < col; j++) {
            cin >> arr2[i][j];
        }
    }
    cout << "  The arr2 is = ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {                     //displaying array2
            cout << arr2[i][j] << " ";
        }
        cout << endl << "\t\t";
    }
    cout << endl;
    cout << "    The sum is =";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = arr1[i][j] + arr2[i][j];            //taking sum of arr1 and arr2
            cout << arr[i][j] << " ";
        }
        cout << endl << "\t\t";
    }
}

void multiplicationOf2dArray() {
    int row1;
    int row2;
    int col1;
    int col2;                                                           //initializing rows and col
    cout << "please enter rows of arrA" << endl;
    cin >> row1;
    cout << "please enter columns of arrA" << endl;                     //taking rows and col for arrays
    cin >> col1;
    cout << "please enter rows of arrB" << endl;
    cin>>row2;
    cout << "please enter columns of arrB" << endl;
    cin>>col2;
    int arrA[50][50];
    int arrB[50][50];
    int arrC[50][50];
    if(col1==row2){
        cout << "please enter the values of arr1= ";
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {                            //taking values of array1
                cin >> arrA[i][j];
            }
        }
        cout << "  The arr1 is = ";
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {                           //displaying array2
                cout << arrA[i][j] << " ";
            }
            cout << endl << "\t\t";
        }
        cout << endl;
        cout << "please enter the values of arr2= ";
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {                           //taking the values of array 2
                cin >> arrB[i][j];
            }
        }
        cout << "  The arr2 is = ";
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {                         //displaying array2
                cout << arrB[i][j] << " ";
            }
            cout << endl << "\t\t";
        }
        cout << endl;
        int i;
        for ( i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {                        //taking the values of arrays and multiplying them
                for(int k=0;k<col1;k++){
                    arrC[i][j] = ((arrC[i][j])+ (arrA[i][k]*arrB[k][j]));
                }
            }
        }
        cout<<"The multiplication = ";
        for ( i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++){
            cout<<arrC[i][j]<<" ";                                   //displaying the array
            }
            cout<<endl;
        }
    }
    else{
        cout<<"arrays can't be multiplied"<<endl;
    }
}
void middleRowAndColumn(int size){
    int arrX[50][50];
    cout<<"please enter size"<<endl;
    cin>>size;                                                       //taking size
        if(size%2==1 ){
            cout << "please enter the values of arrX= ";
            for (int i = 0; i < size; i++) {                        //taking values of arr
                for (int j = 0; j <size; j++) {
                    cin >> arrX[i][j];
                }
            }
            cout << "  The arrX is = ";
            for (int i = 0; i < size; i++) {                       //displaying the array
                for (int j = 0; j < size; j++) {
                    cout << arrX[i][j] << " ";
                }
                cout << endl << "\t\t";
            }
            cout<<"the middle row is= ";
            for (int i = 0; i <size; i++) {
                for (int j = 0; j <size; j++) {                    //displaying middle row
                    if(i==size/2){                                 //dividing by 2 for taking middle number
                        cout<<arrX[i][j]<<" ";
                    }
                }
                cout << endl << "\t\t";
            }
            cout<<"the middle column is= "<<endl;
            for (int i = 0; i <size; i++) {
                for (int j = 0; j <size; j++) {
                    if(j==size/2){                              //dividing by 2 for taking middle number
                        cout<<"\t\t"<<arrX[i][j]<<" ";          //displaying middle column
                    }
                }
                cout << endl;
            }

        }
        else {
            cout<<"The size is not of the odd number...0_0";
        }
    }
void upperHalf(int nRows,int nCol){
    cout<<"please enter row size"<<endl;
    cin>>nRows;
    cout<<"please enter column size"<<endl;                         //taking rows and columns
    cin>>nCol;
    int arr[40][40];
    cout << "please enter the values of arrX= ";
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j <nCol; j++) {
            cin >> arr[i][j];                                            //entering values of array
        }
    }
    cout << "   The arr is = ";
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCol; j++) {
            cout << arr[i][j] << " ";                                    //displaying the array
        }
        cout << endl << "\t\t";
    }
    cout<<endl;
    cout<<"the upper half of array is ="<<endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCol; j++) {
            if(i<=j){                                               //array i must be less than j
                cout<<"\t" <<arr[i][j];                             //displaying the upper half elements of array
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl ;
    }
}
void menu() {
    int opt;
    do {
        cout << "============please choose any option==========" << endl;
        cout << "1.for 2d addition" << endl;
        cout << "2.for 2d multiplication" << endl;
        cout << "3.for middle row and column" << endl;
        cout << "4.for upper half" << endl;
        cout << "5.for exit" << endl;
        cin >> opt;
        switch (opt) {
            case 1: {
                additionOF2dArray();
                break;
            }
            case 2: {
                multiplicationOf2dArray();
                break;

            }
            case 3: {
                int size;
                middleRowAndColumn(size);
                break;
            }
            case 4: {
                int nRows;
                int nCol;
                upperHalf(nRows, nCol);
                break;
            }
            case 5: {
                cout << "you choose to exit.0_0" << endl;
                exit(1);
                break;
            }
            default: {
                cout << "you have enter invalid input.-_-" << endl;
                break;
            }
        }
    } while (opt >= 1 && opt <= 5);
}
