#include "Functions.h"
#include <iostream>
using namespace std;



float menu() {
    int input;                                                               // initializing input
    char ch;                                                                 //initializing ch
    double area, perimeter, volume, r, l, w, h, b, l2;                       //initializing double
    cout << "menu" << endl;                                                  //displaying menu to ask user its choice's input
    cout << "enter 1 for circle" << endl;
    cout << "enter 2 for rectangle" << endl;
    cout << "enter 3 for triangle" << endl;
    cout << "enter your choice:";
    cin >> input;                                                           //taking input
    cout << input;                                                          //displaying input

    switch (input) {
        case 1:                                                         //if user enter 1 in choice then it will come in switch 1

            cout << "what do you want to find" << endl;
            cout << "enter a for area" << endl;
            cout << "enter v for volume" << endl;
            cout << "enter p for perimeter" << endl;
            cout << "enter your choice:";
            cin >> ch;                                                             //entering choice
            cout << ch << endl;                                                    //displaying choice
            switch (ch) {
                case 'a':
                    cout << "enter radius of  circle" << endl;
                    cin >> r;
                    area = 3.14 * r * r;
                    cout << "area of circle is " << area << endl;                  //displaying radius
                    break;
                case 'v':
                    cout << "no volume of circle" << endl;
                    volume = 0;
                    cout << "volume of circle " << volume;                        //displaying volume
                    break;
                case 'p':
                    cout << "enter radius of circle" << endl;
                    cin >> r;
                    perimeter = 2 * 3.14 * r;
                    cout << "perimeter of circle " << perimeter << endl;          //displaying perimeter

            }
            break;
        case 2:                                                               //if user enter 2 in menu choice then it will come in case 2
            cout << "what do you want to find" << endl;
            cout << "enter a for area" << endl;
            cout << "enter v for volume" << endl;
            cout << "enter p for perimeter" << endl;
            cout << "enter your choice" << endl;
            cin >> ch;
            switch (ch) {
                case 'a':
                    cout << "enter length of rectangle" << endl;
                    cin >> l;
                    cout << "enter width of rectangle" << endl;
                    cin >> w;
                    area = l * w;
                    cout << "area of rectangle " << area << endl;                    //displaying area
                    break;
                case 'v':
                    cout << "enter length" << endl;
                    cin >> l;
                    cout << "enter width " << endl;
                    cin >> w;
                    cout << "enter height" << endl;
                    cin >> h;
                    volume = l * w * h;
                    cout << "volume of rectangle " << volume << endl;               //displaying volume
                    break;
                case 'p':
                    cout << "enter length" << endl;
                    cin >> l;
                    cout << "enter width" << endl;
                    cin >> w;
                    perimeter = (l + w) * 2;
                    cout << "perimeter of rectangle " << perimeter << endl;        //displaying perimeter

            }
            break;
        case 3:                                                       //if user enter 3 in choice then user will come in case 3
            cout << "what do you want to find" << endl;
            cout << "enter a for area" << endl;
            cout << "enter v for volume" << endl;
            cout << "enter p for perimeter" << endl;
            cout << "enter your choice" << endl;
            cin >> ch;
            switch (ch) {
                case 'a':
                    cout << "enter base" << endl;
                    cin >> l;
                    cout << "enter height" << endl;
                    cin >> h;
                    area = b * h / 2;
                    cout << "area of triangle" << area << endl;                       //displaying area
                    break;
                case 'v':
                    cout << "enter length" << endl;
                    cin >> l;
                    cout << "enter base" << endl;
                    cin >> b;
                    cout << "enter height" << endl;
                    cin >> h;
                    volume = l * b * h;
                    cout << "volume of rectangle " << volume << endl;              //displaying volume
                    break;
                case 'p':
                    cout << "enter base" << endl;
                    cin >> b;
                    cout << "enter length of one side" << endl;
                    cin >> l;
                    cout << "enter length of other side" << endl;
                    cin >> l2;
                    perimeter = b + l + l2;
                    cout << "perimeter of triangle " << perimeter << endl;        //displaying perimeter

            }

    }
    return 1.2;
}

















