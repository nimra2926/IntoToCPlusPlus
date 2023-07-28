#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    int opt;
    do {
        cout << endl << " CHOOSE ANY OF THE OPTION GIVEN BELOW :" << endl;
        cout << " 1.To draw hollow triangle  " << endl;
        cout << " 2.To draw inverted hollow triangle " << endl;
        cout << " 3.to draw hollow diamond " << endl;
        cout << " 4.to draw hollow triangle and to read from file " << endl;
        cout << " 5.to draw inverted hollow triangle and to read from file " << endl;
        cout << " 6.to draw hollow diamond and to read from file " << endl;
        cout << " 7. EXIT " << endl;
        cin >> opt;
        switch (opt) {
            case 1: {
                vShapedA();
                break;
            }
            case 2: {
                vInvertedShapedA();
                break;
            }
            case 3: {
                printDiamondA();
                break;
            }
            case 4: {
                vShaped();
                break;
            }
            case 5: {
                vInvertedShaped();
                break;
            }
            case 6: {
                printDiamond();
                break;
            }
            case 7: {
                cout << "  YOU CHOSE TO EXIT " << endl;
                exit(1);
                break;
            }
            default : {
                cout << " please choose some valid options from 1 to 7 " << endl;
                cout << " Please Select Again. " << endl;
            }
        }

    }
    while (opt >= 1 || opt <= 7);
}


