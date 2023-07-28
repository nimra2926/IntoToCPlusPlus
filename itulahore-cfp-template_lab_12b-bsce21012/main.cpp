#include <iostream>
#include "Functions.h"
using namespace std;
int main(){


    int opt;
    do {
        cout << endl << " CHOOSE ANY OF THE OPTION GIVEN BELOW :" << endl;
        cout << " 1. To find fee charges of bank service " << endl;
        cout << " 2. To find encrypted number of the given integer " << endl;
        cout << " 3. To find decrypted number of the given integer " << endl;
        cout << " 4. EXIT " << endl;
        cin >> opt;
        switch (opt) {
            case 1: {
                feeCharges();                                                     //calling functions
                break;
            }
            case 2: {
                encryption();                                                       //calling functions
                break;
            }
            case 3: {
                decryption();                                                       //calling functions
                break;
            }
            case 4: {
                cout << "you choose to exit." << endl;
                exit(1);
                break;
            }
            default : {
                cout << "you have enter an invalid number ";
                cout << "please  enter again.";
            }

        }
    }
    while (  opt>=1 || opt <=4);
}


