#include <iostream>
#include "Functions.h"

using namespace std;

int main() {

    int opt;
    do {
        cout << endl << " CHOOSE ANY OF THE OPTION GIVEN BELOW :" << endl;
        cout << " 1. To display values and have sum  " << endl;
        cout << " 2. To display and have sum if in range else sub  " << endl;
        cout << " 3. To put ; after task 1 " << endl;
        cout << " 4. to put ; after task 2 " << endl;
        cout << " 5. To reverse the sequence " << endl;
        cout << " 6.To put ; after condition  " << endl;
        cout << " 7.To print consecutive number " << endl;
        cout << " 8.To find factorial  " << endl;
        cout << " 9.To find the square of elements of array " << endl;
        cout << " 10.To print multiplication table  " << endl;
        cout << " 11.To exit.... " << endl;

        cin >> opt;
        switch (opt) {
            case 1: {
                DisplayingValues();                                               //calling functions
                break;
            }
            case 2: {
                checkingValue();                                                  //calling functions
                break;
            }
            case 3: {
//                Display();
                //calling functions
                //I have commented the task because of the errors no other task is running
                break;
            }
            case 4: {
//                checking();
                //I have commented the task because of the errors no other task is running
                break;
            }
            case 5: {
                sequenceReverse();
                break;
            }
            case 6: {
                sequence();
                break;
            }
            case 7: {
                consecutiveNumbers();
                break;
            }
            case 8: {
                fact();
                break;
            }
            case 9: {
                squareNum();
                break;
            }
            case 10: {
                printTables();
                break;
            }
            case 11: {
                cout << "you choose to exit." << endl;
                exit(1);
                break;
            }
            default : {
                cout << "you have enter an invalid number ";
                cout << "please  enter again.";
            }

        }
    } while (opt >= 1 || opt <= 11);
}



