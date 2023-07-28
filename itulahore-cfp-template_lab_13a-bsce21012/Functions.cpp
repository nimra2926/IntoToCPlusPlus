#include "Functions.h"
#include <iostream>
using namespace std;

//void hospitalManagementSystem(){
//    int id;
//    char pass;
//    cout<<"please enter login id = ";
//    cin>>id;
//    cout<<"please enter password to login = ";
//    cin>>pass;
//
//}
//
//void ArfaCafe() {
//    char name[50];
//    int item;
//    int choice;
//    int numberOfTransactions = 0;
//    cout << "please enter the Name.";
//    cin.getline (name,50);
//    cout<<name[50];
//    cin.ignore();
//    int choice1;
//    totalBill();
//
//    do{
//        cout << endl << " Do any other student want to purchase anything. :" << endl;
//        cout << " 1.if student want to purchase anything" << endl;
//        cout << " 2.for not purchasing anything " << endl;
//        cin>>choice1;
//        if(choice1!=1 && choice1!=2){
//            cout<<"you have entered invalid variable.";
//        }
//    }
//    while(choice1<1 || choice1>2);
//    if(choice1==1){
//        for(int i=0;i<=1;i++){
//            totalBill();
//        }
//    }
//    do{
//        cout << endl << " Do you want to switch to an other account. :" << endl;
//        cout << " 1.for switching account " << endl;
//        cout << " 2.for not switching account " << endl;
//        cin>>choice;
//    }
//    while(choice<1  || choice>2 );
//
//    if(choice==1){
//        cout<<numberOfTransactions;
//    }
//
//}
//void totalBill() {
//    int serialNo;
//    int price[9];
//    price[0]=0;
//    price[1]=0;
//    price[2]=0;
//    price[3]=0;
//    price[4]=0;
//    price[5]=0;
//    price[6]=0;
//    price[7]=0;
//    price[8]=0;
//    int price0;
//    int price1;
//    int bill = 0;
//    do {
//
//        cout << endl << " CHOOSE ANY OF THE serial No. GIVEN BELOW :" << endl;
//        cout << "1.for tea and 2 small pizza " << endl;
//        cout << "2.patties" << endl;
//        cout << "3.pastry" << endl;
//        cout << "4.samosa" << endl;
//        cout << "5.green salad" << endl;
//        cout << "6.sandwich" << endl;
//        cout << "7.Burger" << endl;
//        cout << "8.Fries" << endl;
//        cout << "9.coffee" << endl;
//        cout << "10. EXIT " << endl;
//        cin >> serialNo;
//        switch (serialNo) {
//            case 1: {
//                cout << "please enter price of Tea  = ";
//                cin >> price0;
//                cout << "please enter price of 2 small pizzas = ";
//                cin >> price1;
//                price[0] = price0 + price1;
//                cout << "price is:" << price[0] << endl;
//                break;
//            }
//            case 2: {
//                cout << "please enter price of patties = ";
//                cin >> price[1];
//                cout << price[1] << endl;
//                break;
//            }
//            case 3: {
//                cout << "please enter price of pastry = ";
//                cin >> price[2];
//                cout << price[2];
//                break;
//            }
//            case 4: {
//                cout << "please enter price of samosa = ";
//                cin >> price[3];
//                cout << price[3];
//                break;
//            }
//            case 5: {
//                cout << "please enter price of green salad = ";
//                cin >> price[4];
//                cout << price[4];
//                break;
//            }
//            case 6: {
//                cout << "please enter price of sandwich = ";
//                cin >> price[5];
//                cout << price[5];
//                break;
//            }
//            case 7: {
//                cout << "please enter price of burger = ";
//                cin >> price[6];
//                cout << price[6];
//                break;
//            }
//            case 8: {
//                cout << "please enter price of fries = ";
//                cin >> price[7];
//                cout << price[7];
//                break;
//            }
//            case 9: {
//                cout << "please enter price of coffee = ";
//                cin >> price[8];
//                cout << price[8];
//                break;
//            }
//            case 10: {
//                cout << "you have choose to exit.";
//                exit(1);
//                break;
//            }
//            default: {
//                cout << "you have enter invalid number.";
//                break;
//            }
//
//        }
//    } while (serialNo >= 1 && serialNo <= 10);
//
//
//    bill = bill + price[0] + price[1] + price[2] + price[3] + price[4] + price[5] + price[6] + price[7] + price[8];
//    cout << "bill is" << bill << endl;
//}