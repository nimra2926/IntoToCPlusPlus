#include "Functions.h"
#include <iostream>
#include <fstream>

using namespace std;

char vShapedA()
{

    int i;                                                           //declaring i ,j and rows
    int j;
    int rows;

    cout<< "please enter the rows: ";
    cin>>rows;

    //entering rows
    int x = rows;                                                             //initializing x and y as rows
    int y = rows;
    for (i = 1; i <= rows; i++)                                                        //for loop for iterating i
    {
        for (j = 1; j <= rows * 2-1; j++)                                                   //for loop for iterating j
        {
            if (j == x || j == y || i ==rows)                                                    //applying condition of j is equal to x and y so that all other places should not print that char
            {
                cout<<"*";                                                                       //displaying character

            }
            else {
                cout <<" ";                                                                  //displaying space

            }

        }
        x--;                                                                   //decrementing x
        y++;                                                                   //incrementing y
        cout << endl;

    }

}
char vShaped()
{

    int i;                                                           //declaring i ,j and rows
    int j;
    int rows;
    fstream data;
    data.open("abc.txt");
    cout<< "please enter the rows: ";
    cin>>rows;
    data<<"please enter the number of rows: "<<endl;
    data<<"rows  "<<rows<<endl;
                                                        //entering rows
        int x = rows;                                                             //initializing x and y as rows
        int y = rows;
        for (i = 1; i <= rows; i++)                                                        //for loop for iterating i
        {
            for (j = 1; j <= rows * 2-1; j++)                                                   //for loop for iterating j
            {
                if (j == x || j == y || i ==rows)                                                    //applying condition of j is equal to x and y so that all other places should not print that char
                {
                    cout<<"*";                                                                       //displaying character
                    data <<"*";
                }
                else {
                    cout <<" ";                                                                  //displaying space
                    data <<" ";
                }

            }
            x--;                                                                   //decrementing x
            y++;                                                                   //incrementing y
            cout << endl;
            data << endl;



        }
    data.close();
    }
char vInvertedShapedA() {
    int i;
    int j;
    int k;
    int rows;
    cout << "please enter the number of rows:";
    cin >> rows;
    for (i = rows; i > 0; i--) {
        for (j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            if (i == 1 || i == rows || k == 1 || k == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


    char vInvertedShaped() {
        int i;
        int j;
        int k;
        int rows;
        fstream data;
        data.open("abc1.txt");
        cout << "please enter the number of rows:";
        cin >> rows;
        data<<"please enter the number of rows: "<<endl;
        data<<"rows  "<<rows<<endl;
        for (i = rows; i > 0; i--) {
            for (j = 1; j <= rows - i; j++) {
                cout << " ";
                data << " ";
            }
            for (k = 1; k <= 2 * i - 1; k++) {
                if (i == 1 || i == rows || k == 1 || k == 2 * i - 1) {
                    cout << "*";
                    data << "*";
                } else {
                    cout << " ";
                    data << " ";
                }
            }
            cout << endl;
            data<<endl;
        }
        data.close();
        return 0;
    }

char printDiamondA() {
    int i;                                                           //declaring i ,j and rows
    int j;
    int rows;

    cout << "please enter the rows: ";                                        //taking rows from user
    cin >> rows;                                                            //entering rows

    int x = rows;                                                             //initializing x and y as rows
    int y = rows;
    for (i = 1; i <= rows; i++)                                                        //for loop for iterating i
    {
        for (j = 1; j < rows * 2; j++)                                                   //for loop for iterating j
        {
            if (j == x || j ==y)                                                    //applying condition of j is equal to x and y so that all other places should not print that char
            {
                cout << "*";                                          //displaying character

            } else {
                cout << " ";
                                                                      //displaying space
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
                cout << "*";
                                                                   //displaying character
            } else {
                cout << " ";                                              //displaying spaces

            }

        }
        z++;                                                            //incrementing z
        k--;                                                            //decrementing k
        cout << endl;
                                                    //for new line
    }

}
    char printDiamond() {
        int i;                                                           //declaring i ,j and rows
        int j;
        int rows;
        fstream data;
        data.open("abc2.txt");
        cout << "please enter the rows: ";                                        //taking rows from user
        cin >> rows;                                                            //entering rows
        data<<"please enter the number of rows: "<<endl;
        data<<"rows  "<<rows<<endl;
        int x = rows;                                                             //initializing x and y as rows
        int y = rows;
        for (i = 1; i <= rows; i++)                                                        //for loop for iterating i
        {
            for (j = 1; j < rows * 2; j++)                                                   //for loop for iterating j
            {
                if (j == x || j ==y)                                                    //applying condition of j is equal to x and y so that all other places should not print that char
                {
                    cout << "*";                                          //displaying character
                    data << "*";
                } else {
                    cout << " ";
                    data  << " ";                                                        //displaying space
                }

            }
            x--;                                                                   //decrementing x
            y++;                                                                   //incrementing y
            cout << endl;
            data <<endl;

        }
        int z = 1;                                                                  //initializing z as 1 as k as 2 into rows -1
        int k = rows * 2 - 1;
        for (i = 1; i <= rows; i++)                                                   //applying loops
        {
            for (j = 1; j < rows * 2; j++) {
                if (j == z || j ==k)                                             //applying condition to print spaces other than that 2 points
                {
                    cout << "*";
                    data << "*";                                                     //displaying character
                } else {
                    cout << " ";                                              //displaying spaces
                    data << " ";
                }

            }
            z++;                                                            //incrementing z
            k--;                                                            //decrementing k
            cout << endl;
            data <<endl;                                              //for new line
        }
        data.close();
    }
