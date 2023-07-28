#include <iostream>
#include "Functions.h"
using namespace std;
int main() {
    int num1, num2;
    cout << "please enter the value of num1" << endl;
    cin >> num1;

    cout << "please enter the value of num2" << endl;
    cin >> num2;
    cout << "\nbefore swapping" << endl;
    cout << "num1= " << num1 << "  num2= " << num2 << endl;


    swappingOfNumbers(num1, num2);




    generateSequence( );
    return 0;
}


