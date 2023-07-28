#include <iostream>
#include "Functions.cpp"

using namespace std;

int main() {
    int number1, number2, number3, product;
    cout << "enter numbers:" << endl;
    cout << endl;
    cout << "enter number1 = ";
    cin >> number1;
    cout << endl;
    cout << "enter number2 = ";
    cin >> number2;
    cout << endl;
    cout << "enter number3 = ";
    cin >> number3;
    cout << endl;
    product = number1 * number2 * number3;
    cout << "Product of the 3 numbers = " << product;
    cout << endl;
}
