#include <iostream>
#include "Functions.h"
using namespace std;
int main(){
     loginSystem();
     enterRecord();
     sorting() ;
     insertDoctor();
    menu();

}
//     hospitalManagementSystem();

//    int flagVariable;
//    int id;
//    int item;
//    int numberOfTransactions = 0;
//    do {
//        cout<<"please enter the login id ";
//        cin>>id;
//        if(id==431 || id==532){
//            cout<<"you have enter the correct id ";
//        }
//        else{
//            cout<<"you have entered incorrect id ";
//        }
//
//        cout << endl << " CHOOSE ANY OF THE OPTION GIVEN BELOW :" << endl;
//        cout << " 431. For employee 1 " << endl;
//        cout << " 532. For employee 2 " << endl;
//        cout << " 1. EXIT " << endl;
//        cin >> flagVariable;
//        switch (flagVariable) {
//            case 431: {
//                cout<<"how many items do you need = ";
//                cin>>item;
//                if(item<0){
//                    cout<<"do you think we are fools -_-";
//                }
//                if(item==1){
//                    numberOfTransactions++;
//                    ArfaCafe();
//                }
//                if(item==2){
//                    numberOfTransactions++;
//                    ArfaCafe();
//                    ArfaCafe();
//                }
//                if(item>2){
//                    cout<<"you can't have more then 2 items,don't you know the rules? 0_0"<<endl;
//                }
//                break;
//            }
//            case 532: {
//                cout<<"how many items do you need = "<<endl;
//                cin>>item;
//                if(item<0){
//                    cout<<"do you think we are fools -_-"<<endl;
//                }
//                if(item==1){
//                    numberOfTransactions++;
//                    ArfaCafe();
//                }
//                if(item==2){
//                    ArfaCafe();
//                        numberOfTransactions++;
//
//                }
//                if(item>2){
//                    cout<<"you can't have more then 2 items,don't you know the rules? 0_0";
//                }
//
//                break;
//            }
//        }
//    }
//    while(flagVariable==1 || flagVariable==431 || flagVariable==532);
//    return 0;
//}


