#include <iostream>
#include <string>
#include "Functions.h"
#include<fstream>
using namespace std;
int main () {






    cout << " *-/-+-(-)---=-%-@--$-%-^-!-/--* *-/-+-(-)---=-%-@--$-%-^-!-/" << endl;
    cout << "/         STUDENT RECORD SYSTEM    /" << endl;
    cout << " *-/-+-(-)---=-%-@--$-%-^-!-/--* *-/-+-(-)---=-%-@--$-%-^-!-/" << endl;
    cout << "        MADE BY: GROUP J     " << endl;
    cout << "       _______________________     " << endl;
    int opt;
    do{
        cout << endl << " CHOOSE ANY OF THE OPTION GIVEN BELOW :"<< endl;
        cout << " 1. GRADE CALCULATOR " <<endl;
        cout << " 2. GPA CALCULATOR " << endl;
        cout << " 3. CGPA CALCULATOR " << endl;
        cout << " 4. EXIT " << endl;
        cin >> opt;
        switch ( opt){
            case 1:{
                gradecalculator();
                break;
            }
            case 2:{
              gpaCalculator();
                break;
            }
            case 3:{
                 cgpaCalculator();
                break;
            }
            case 4:{
                cout  << "  YOU CHOSE TO EXIT " << endl;
                exit(1);
                break;
            }
            default :{
                cout << " You were explicitely told to choose options from 1 to 3 " << endl;
                cout << " Please Select Again. " << endl;
            }
        }
    }
    while (  opt>=1 || opt <=4);

}
