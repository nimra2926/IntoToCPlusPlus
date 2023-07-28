#include <iostream>
#include "Functions.h"
#include <math.h>
#include<string>
#include<fstream>
#include<stdio.h>
using namespace std;

int main() {
    int opt9;
    do {
        cout << "--------------choose options as a admin ----------------" << endl;
        cout << "1.For admin usage." << endl;
        cout << "2.For buying customer." << endl;
        cout << "3.TASK 2." << endl;
        cout << "4.exit." << endl;
        cin >> opt9;
        switch (opt9) {
            case 1: {
                cout<<"first, you have to create the account.."<<endl;
                loginSystem();
                adminMenu();
                break;
            }
            case 2: {
                cout<<"first, you have to create the account.."<<endl;
                loginSystemForCustomer();
                CustomerBuyingMenu();
                break;
            }
            case 3: {
                cout<<"==================== TASK 2 ==================="<<endl;
                char arr[MAX] = "Mr John Smith   ";
                cout<<"THE ORIGINAL LINE = ""Mr John Smith"<<endl;
                int upgradedLength = SpacesToCharacter(arr);
                for (int i=0; i<upgradedLength; i++){
                    cout<< arr[i];
                }
                cout<<"    IS THE UPGRADED LINE WITHOUT SPACES AND PUTTING %20 in its place (ᵔᴥᵔ) ";
                SpacesToCharacter( arr);
                cout<<endl;
                break;
            }
            case 4: {
                cout << "you choose to exit." << endl;
                exit(1);
            }
            default: {
                cout << "you have entered invalid option.";
            }
        }
    } while (opt9 >= 1 && opt9 <= 4);


        return 0;
    }


