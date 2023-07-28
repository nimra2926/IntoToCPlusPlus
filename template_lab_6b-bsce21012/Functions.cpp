#include "Functions.h"
#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

//void printOutputs ( int rows,int col)
//{
//    int steps=1;                                                      //initialize step and given it a value of 1
//
//    for(int i=1;i<=rows;i++)                                          //applying nested loop
//
//    {
//        int numToPrint = 1;
//
//        for(int j=1;j<=col;j=j+1){
//            cout<<numToPrint<<" ";                                    // displaying numToDisplaying
//            numToPrint = numToPrint + steps;                          //adding number into step
//        }
//
//         cout<<endl;
//        steps=steps+1;                                                //adding 1 in step
//
//
//    }
//}
//double arr[4]={0,10,20,30};
//int main()
//{
//    cout<<"\n address and value of array elements:\n"
//    <<endl;
//    for(int i =0 ;i<4;i++)
//        cout<<"address:"<< (void*) (arr+i)
//        <<" value: "<< *(arr+i)
//        << endl;
//    return 0;
//}










//
//void HOTEL (){
//    cout<<"============================== PROGRAMMING HELL HOTEL========================"<<endl;
//    cout<<"============================== WELCOME TO HELL HOTEL ========================"<<endl;
//    int opt;
//    do{
//        cout<<"1.customer"<<endl;
//        cout<<"2.employee"<<endl;
//        cout<<"3.manger"<<endl;
//        cout<<"4.exit"<<endl;
//        cin>>opt;
//        switch(opt){
//            case 1:{
//
//                break;
//            }
//            case 2:{
//
//                break;
//            }
//            case 3:{
//
//                break;
//            }
//            case 4:{
//                cout<<"you choose to exit"<<endl;
//                exit(1);
//                break;
//            }
//            default:{
//                cout<<"you have entered invalid opt"<<endl;
//                break;
//            }
//        }
//    }
// while(opt>1 && opt<5);
//
//}
//
//void customerLogin(){
//    string pass;
//    string id;
//    int opt1;
//    cout<<"you can't see website without making an account"<<endl;
//    cout<<"1.you want a permanent account ?"<<endl;
//    cout<<"2.you want to ba a guest only"<<endl;
//    cin>>opt1;
//    if(opt1==1){
//        ofstream myFile;
//        myFile.open("customerLogin.txt",ios::app);
//        if(myFile.is_open()){
//            cout<<"please enter your id"<<endl;
//            cin.get();
//            getline(cin,id);
//            cout<<"please enter your pass"<<endl;
//            getline(cin,pass);
//            cout<<"congratulations your account has been created successfully"<<endl;
//            cout<<"==========================WELCOME TO HELL HOTEL============"<<endl;
//            myFile<<"==========================WELCOME TO HELL HOTEL============"<<endl;
//            myFile<<"congratulations your account has been created successfully"<<endl;
//            myFile<<"your id is :"<<setw(10)<<id<<setw(20)<<"your pass is :"<<setw(10)<<pass<<endl;
//        }
//        else{
//            cout<<"your file is not open"<<endl;
//        }
//        myFile.close();
//    }
//    else if(opt1==2){
//        cout<<"please enter your id"<<endl;
//        cin.get();
//        getline(cin,id);
//        cout<<"please enter your pass"<<endl;
//        cin.get();
//        getline(cin,pass);
//        cout<<"congratulations your account has been created successfully for one use only.."<<endl;
//        cout<<"==========================WELCOME TO HELL HOTEL============"<<endl;
//    }
//    else{
//        cout<<"you have entered invalid number"<<"\n"<<"please try again"<<endl;
//    }
//}
//


void bookingBasic(){
    char ch;
    int opt2;
    int opt3;
    int nights;
    string passOfCard;
    float billForBasic=3000.0;
    int extraCharges=500;
    float amountInCard;
    int snackCharges=50;
    float leftMoney;
    cout<<"============= WELCOME TO HELL HOTEL SIR ============="<<endl;
    ofstream myFile1;
    myFile1.open("bookingBasic.txt", ios::app);
    if (myFile1.is_open()) {
        cout << "for how many nights do you need this room?" << endl;
        cin >> nights;
        cout << "Do you need some extra mattress" << "  enter y for yes" << "  and n for no" << endl;
        cin >> ch;
        if (ch == 'y') {
            cout << "It will have some extra charges" << endl;
            cout << "how many mattresses do you need btw?" <<" you can have maximum 3 mattresses as it is a basic room"<< endl;
            cin >> opt2;
            if(opt2>3){
                cout<<"we are sorry to inform you that you can't have more than 3 mattresses in this basic room"<<endl;
                exit(1);
            }
            cout << "you want us to put some snacks in your room? " <<"  enter y for yes"<< "  and n for no"<<endl;
            cin >> ch;
           if (ch == 'y') {
                cout << "1.nimko=rs.50" << endl;
                cout << "2.lays=rs.50" << endl;
                cout << "3.cheetos=rs.50" << endl;
                cout << "4.kurKure=rs.50" << endl;
                cout << "5.exit" << endl;
                cin >> opt3;
                if (opt3!=5) {
                    extraCharges = (opt2 * 500);
                    extraCharges=extraCharges + 50;
                    cout << "The rent of basic room = 3000 per night" << endl;
                    billForBasic = (( nights*3000) + extraCharges);
                    cout << "now total =" << billForBasic << endl;
                    myFile1<<"the Total bill with "<<opt2<<" mattress and "<<opt3<<" snacks is:"<<billForBasic<<endl;
                }
                else if(opt3==5){
                    cout<<"you choose to exit"<<endl;
                    exit(10);
                }
                else if(opt3<1 || opt3>5){
                    cout<<"you have enter an invalid number"<<endl;


                }
            } else {
                extraCharges = opt2 * 500;
                cout << "The rent of basic room = 3000 per night" << endl;
                billForBasic = (( nights*3000) + extraCharges);
                cout << "now total =" << billForBasic << endl;
                myFile1<<"the total bill with "<<opt2<<" mattress and no snacks is:"<<setw(10)<<billForBasic<<endl;
            }
            cout << "How would you like to pay?" << endl;
            cout << "1.by card" << endl;
            cout << "2.by cash" << endl;
            cout << "3.exit" << endl;
            cin >> opt3;
            if (opt3 == 1) {
                cout << "kindly give us the details of you card" << endl;
                cout << "please enter pass.." << endl;
                cin >> passOfCard;
                cout << "plz tell us how much money u have?" << endl;
                cin >> amountInCard;
                myFile1<<"pass of credit card is: "<<setw(10)<<passOfCard<<endl;
                myFile1<<"amount in credit card is: "<<setw(10)<<amountInCard<<endl;
                if (amountInCard < 0) {
                    cout << "your card is withdrawn" << endl;
                }
                if (amountInCard < billForBasic) {
                    cout<< "we are sorry to inform you that you don't have enough money in your card to book this room"<< endl;
                }
                if (amountInCard > billForBasic) {
                    leftMoney = amountInCard - billForBasic;
                    cout << "the money left in the CARD =" << leftMoney << endl;
                    myFile1<<"after withdrawing the money from card the money left is:"<<setw(10)<<leftMoney<<endl;
                }

            }
            if(opt3==2){
                cout<<"then drive there to pay your bill that is ="<<billForBasic<<endl;
            }
            if(opt3==3){
                cout<<"you choose to exit"<<endl;
                exit(2);
            }
        }
        if (ch == 'n') {
            cout << "The rent of basic room = 3000 per night" << endl;
            billForBasic = (3000 * nights);
            cout << "now total =" << billForBasic << endl;
            myFile1<<"the total bill without any mattress and snacks is:"<<setw(10)<<billForBasic<<endl;
        }
    } else {
        cout << "your file is not open" << endl;
    }
    myFile1.close();
}



void FirstFloorStandard(){
    char ch1;
    int opt;
    int opt3;
    float leftMoney;
    string passOfCard;
    int amountInCard;
    int firstFloor = 5000;
    int extraCharges=700;
    float bill;
    ofstream file;
    file.open("standardFirstFloor.txt",ios::app);
    if(file.is_open()){
        cout<<"============= WELCOME SIR ============="<<endl;
        cout<<"the one night rent for this room is "<<firstFloor<<endl;
        cout<<"For how many nights you want to rent this"<<endl;
        cin>>opt;
        cout<<"Do you want some extra mattresses"<<" enter y for yes "<<" and n for no "<<endl;
        cin>>ch1;
        if(ch1=='y'){
            cout<<"they will have extra charges"<<endl;
            cout<<"How many mattresses do you want?"<<endl;
            cin>>opt;
            if(opt>5){
                cout<<" SORRY!! you can't take that much mattresses"<<endl;
            }
            else{
                extraCharges=700*opt;
                cout<<"the extra charges are"<<extraCharges<<endl;
                cout<<"Do you want some snacks along with the tea?"<<" enter y for yes "<<" and n for no "<<endl;
                cin>>ch1;
                cout<<"these are for free"<<"\n"<<"feel free to take"<<" enter y for yes "<<" and n for no "<<endl;
                cin>>ch1;
                bill=firstFloor+extraCharges;
                cout<<"the total bill of first floor standard room is:"<<bill<<endl;
            }
        }
        else if(ch1=='n'){
            cout<<"Do you want some snacks along with the tea?"<<" enter y for yes "<<" and n for no "<<endl;
            cout<<"These are for free"<<"\n"<<"feel free to take"<<" enter y for yes "<<" and n for no "<<endl;
            cin>>ch1;
            cout<<"the total charges are ="<<firstFloor;
            file<<"the total charges are ="<<setw(10)<<firstFloor;
        }
        cout << "How would you like to pay?" << endl;
        cout << "1.by card" << endl;
        cout << "2.by cash" << endl;
        cout << "3.exit" << endl;
        cin >> opt3;
        if (opt3 == 1) {
            cout << "kindly give us the details of you card" << endl;
            cout << "please enter pass.." << endl;
            cin >> passOfCard;
            cout << "plz tell us how much money u have?" << endl;
            cin >> amountInCard;
            file<<"pass of credit card is: "<<setw(10)<<passOfCard<<endl;
            file<<"amount in credit card is: "<<setw(10)<<amountInCard<<endl;
            if (amountInCard < 0) {
                cout << "your card is withdrawn" << endl;
            }
            if (amountInCard < bill) {
                cout<< "we are sorry to inform you that you don't have enough money in your card to book this room"<< endl;
            }
            if (amountInCard > bill) {
                leftMoney = amountInCard - bill;
                cout << "the money left in the CARD =" << leftMoney << endl;
                file<<"after withdrawing the money from card the money left is:"<<setw(10)<<leftMoney<<endl;
            }
        }
        if(opt3==2){
            cout<<"then drive there to pay your bill that is ="<<bill<<endl;
        }
        if(opt3==3){
            cout<<"you choose to exit"<<endl;
            exit(2);
        }

    }
    else{
        cout<<"file is not open"<<endl;
    }
    file.close();
}

void fifthFloorStandard(){
    char ch;
    float leftMoney;
    string passOfCard;
    int amountInCard;
    int opt3;
    int fifthFloor = 7000;
    int extraCharges=700;
    float bill;
    int opt;
    ofstream file1;
    file1.open("standardFifthFloor.txt",ios::app);
    if(file1.is_open()){
        cout<<"============= WELCOME SIR ============="<<endl;
        cout<<"the one night rent for this room is "<<fifthFloor<<endl;
        cout<<"For how many nights you want to rent this"<<endl;
        cin>>opt;
        fifthFloor=opt*5000;
        cout<<"Do you want some extra mattresses"<<" enter y for yes "<<" and n for no "<<endl;
        cin>>ch;
        if(ch=='y'){
            cout<<"they will have extra charges"<<endl;
            cout<<"How many mattresses do you want?"<<endl;
            cin>>opt;
            if(opt>5){
                cout<<" SORRY!! you can't take that much mattresses"<<endl;
            }
            else{
                extraCharges=700*opt;
                cout<<"the extra charges are"<<extraCharges<<endl;
                cout<<"Do you want some snacks along with the tea?"<<" enter y for yes "<<" and n for no "<<endl;
                cout<<"these are for free"<<"\n"<<"feel free to take"<<" enter y for yes "<<" and n for no "<<endl;
                cin>>ch;
                bill=fifthFloor+extraCharges;
                cout<<"the total bill of first floor standard room is:"<<bill<<endl;
                file1<<"the total bill of first floor standard room is:"<<setw(10)<<bill<<endl;
            }
        }
        else if(ch=='n'){
            cout<<"Do you want some snacks along with the tea?"<<" enter y for yes "<<" and n for no "<<endl;
            cout<<"These are for free"<<"\n"<<"feel free to take"<<" enter y for yes "<<" and n for no "<<endl;
            cin>>ch;
            cout<<"the total charges are ="<<fifthFloor;
            file1<<"the total charges are ="<<setw(10)<<fifthFloor;
        }
        cout << "How would you like to pay?" << endl;
        cout << "1.by card" << endl;
        cout << "2.by cash" << endl;
        cout << "3.exit" << endl;
        cin >> opt3;
        if (opt3 == 1) {
            cout << "kindly give us the details of you card" << endl;
            cout << "please enter pass.." << endl;
            cin >> passOfCard;
            cout << "plz tell us how much money u have?" << endl;
            cin >> amountInCard;
            file1<<"pass of credit card is: "<<setw(10)<<passOfCard<<endl;
            file1<<"amount in credit card is: "<<setw(10)<<amountInCard<<endl;
            if (amountInCard < 0) {
                cout << "your card is withdrawn" << endl;
            }
            if (amountInCard < bill) {
                cout<< "we are sorry to inform you that you don't have enough money in your card to book this room"<< endl;
            }
            if (amountInCard > bill) {
                leftMoney = amountInCard - bill;
                cout << "the money left in the CARD =" << leftMoney << endl;
                file1<<"after withdrawing the money from card the money left is:"<<setw(10)<<leftMoney<<endl;
            }
        }
        if(opt3==2){
            cout<<"then drive there to pay your bill that is ="<<bill<<endl;
        }
        if(opt3==3){
            cout<<"you choose to exit"<<endl;
            exit(2);
        }
    }
    else{
        cout<<"file is not open"<<endl;
    }
file1.close();
}

void ninthFloorStandard(){
    char ch;
    float leftMoney;
    string passOfCard;
    int amountInCard;
    int opt3;
    int ninthFloor = 10000;
    int extraCharges=700;
    float bill;
    int opt;
    ofstream file2;
    file2.open("standardNinthFloor.txt",ios::app);
    if(file2.is_open()){
        cout<<"============= WELCOME SIR ============="<<endl;
        cout<<"YOU HAVE MADE A GOOD DECISION. THE VIEW FROM THAT FLOOR IS SOO BEAUTIFUL AND SATISFYING"<<endl;
        cout<<"the one night rent for this room is "<<ninthFloor<<endl;
        cout<<"For how many nights you want to rent this"<<endl;
        cin>>opt;
        ninthFloor=opt*7000;
        cout<<"Do you want some extra mattresses"<<" enter y for yes "<<" and n for no "<<endl;
        cin>>ch;
        if(ch=='y'){
            cout<<"they will have extra charges"<<endl;
            cout<<"How many mattresses do you want?"<<"mattresses must be less than 5"<<endl;
            cin>>opt;
            if(opt>5){
                cout<<" SORRY!! you can't take that much mattresses"<<endl;
            }
            else{
                extraCharges=700*opt;
                cout<<"the extra charges are"<<extraCharges<<endl;
                cout<<"Do you want some snacks along with the tea?"<<" enter y for yes "<<" and n for no "<<endl;
                cout<<"these are for free"<<"\n"<<"feel free to take"<<" enter y for yes "<<" and n for no "<<endl;
                cin>>ch;
                bill=ninthFloor+extraCharges;
                cout<<"the total bill of first floor standard room is:"<<bill<<endl;
                file2<<"the total bill of first floor standard room is:"<<setw(10)<<bill<<endl;
            }
        }
        else if(ch =='n') {
            cout << "Do you want some snacks along with the tea?" << " enter y for yes " << " and n for no " << endl;
            cout << "These are for free" << "\n" << "feel free to take" << " enter y for yes " << " and n for no "<< endl;
            cin >> ch;
            cout<<"the total charges are ="<<ninthFloor;
            file2<<"the total charges are ="<<setw(10)<<ninthFloor;
        }
        cout << "How would you like to pay?" << endl;
        cout << "1.by card" << endl;
        cout << "2.by cash" << endl;
        cout << "3.exit" << endl;
        cin >> opt3;
        if (opt3 == 1) {
            cout << "kindly give us the details of you card" << endl;
            cout << "please enter pass.." << endl;
            cin >> passOfCard;
            cout << "plz tell us how much money u have?" << endl;
            cin >> amountInCard;
            file2<<"pass of credit card is: "<<setw(10)<<passOfCard<<endl;
            file2<<"amount in credit card is: "<<setw(10)<<amountInCard<<endl;
            if (amountInCard < 0) {
                cout << "your card is withdrawn" << endl;
            }
            if (amountInCard < bill) {
                cout<< "we are sorry to inform you that you don't have enough money in your card to book this room"<< endl;
            }
            if (amountInCard > bill) {
                leftMoney = amountInCard - bill;
                cout << "the money left in the CARD =" << leftMoney << endl;
                file2<<"after withdrawing the money from card the money left is:"<<setw(10)<<leftMoney<<endl;
            }
        }
        if(opt3==2){
            cout<<"then drive there to pay your bill that is ="<<bill<<endl;
        }
        if(opt3==3){
            cout<<"you choose to exit"<<endl;
            exit(2);
        }
    }
    else{
        cout<<"file is not open"<<endl;
    }
    file2.close();
}
void bookingStandard(){
    int opt;
    cout<<"=================== WELCOME TO HELL HOTEL SIR =========================="<<endl;
    cout<<"WE HAVE 3 FLOORS WHERE THESE STANDARD ROOMS EXIST"<<"\n"<<"SO WHERE YOU WANT TO RENT IT"<<"\n"<<"THEY ALL HAVE DIFFERENT RENTS"<<endl;
    cout<<"1.at first floor"<<endl;
    cout<<"2.at fifth floor"<<endl;
    cout<<"3.at ninth floor"<<endl;
    cout<<"4.exit"<<endl;
    cin>>opt;
    if(opt==1){
        FirstFloorStandard();
    }
    if(opt==2){
        fifthFloorStandard();
    }
    if(opt==3){
        ninthFloorStandard();
    }
    if(opt==4){
        exit(1);
    }
}


void belowSea() {
    char ch;
    float leftMoney;
    string passOfCard;
    string detailsOfBath;
    int amountInCard;
    int opt3;
    int sea = 20000;
    int extraCharges = 2000;
    float bill;
    int opt;
    string details;
    ofstream file3;
    file3.open("belowSea.txt", ios::app);
    if (file3.is_open()) {
        cout << "============= WELCOME SIR =============" << endl;
        cout << "YOU HAVE MADE A GOOD DECISION." << "\n" << "I HOPE YOU GUYS ENJOY AND FELL THE DEEPNESS OF WATER"<<endl;
        cout << "the one night rent for this room is " << sea << endl;
        cout << "For how many nights you want to rent this" << endl;
        cin >> opt;
        sea = opt * 20000;
        cout << "DO YOU NEED ANY EXTRA MATTRESS ?" << "ENTER y FOR YESS" << " AND n FOR NO" << endl;
        cin >> ch;
        if (ch == 'y') {
            cout << "HOW MANY MATTRESSES DO YOU NEED?" << "\n" << " YO CAN MAX TAKE 3 MATTRESSES" << endl;
            cin >> opt;
            if (opt > 3) {
                cout << "you can't take more than 3 mattresses" << endl;
            } else {
                extraCharges=opt*2000;
                cout<<"THE TOTAL EXTRA CHARGES ARE ="<<extraCharges<<endl;
                file3<<"THE TOTAL EXTRA CHARGES ARE ="<<extraCharges<<endl;
                bill=sea+extraCharges;
                cout<<"THE TOTAL BILL IS ="<<bill<<endl;
                file3<<"THE TOTAL BILL IS ="<<bill<<endl;
                cout << "YOU WANT US TO READY YOUR ROOM?" << endl;
                cout << "1.A bath?" << endl;
                cout << "2.Put some music on?" << endl;
                cout << "3.You want some snacks?" << endl;
                cout << "4.Some drink?" << endl;
                cout << "5.Any help?" << endl;
                cout << "6.exit?" << endl;
                cin >> opt;
                if (opt == 1) {
                    cout << "OKAY SIR! " << endl;
                    cout << "Tell us the details you want in the bath " << endl;
                    cout << "Means which shampoo you use ?" << endl;
                    cout << "what should be the temperature of the tub?" << endl;
                    cout << "OR ANYTHING?" << endl;
                    cin.get();
                    getline(cin, detailsOfBath);
                    cout << "OKAY SIR ALL THE THINGS ARE NOTED AND WILL BE DONE ACCORDINGLY" << endl;
                } else if (opt == 2) {
                    cout << "OKAY SIR !" << endl;
                    cout << "CAN YOU PLZ TELL ME OF YOUR CHOICE?" << endl;
                    cout << "1.Romantic?" << endl;
                    cout << "2.Sad?" << endl;
                    cout << "3.Hiphop?" << endl;
                    cout << "4.Raap?" << endl;
                    cout << "5.Any other ?" << endl;
                    cin >> opt3;
                    if (opt3 >=1 && opt3 < 5){
                        cout << "OKAY SIR THAT IS NOTED AND WILL BE DONE" << endl;
                    }
                    else if (opt3 == 5) {
                        cin.get();
                        getline(cin, details);
                        cout << "OKAY THANK U! THAT WILL BE DONE" << endl;
                    } else {
                        cout << "you have entered an invalid number" << endl;
                    }
                } else if (opt == 3) {
                    cout << "WHAT WOULD YOU LIKE?" << endl;
                    cout << "1.nimko=rs.50" << endl;
                    cout << "2.lays=rs.50" << endl;
                    cout << "3.cheetos=rs.50" << endl;
                    cout << "4.kurKure=rs.50" << endl;
                    cout << "5.exit" << endl;
                    cin >> opt3;
                    if (opt3>=1 && opt<5) {
cout<<"OKAY THEY WILL BE IN YOUR ROOM"<<endl;
                    }
                    else if(opt3 == 5){
                        cout<<"you choose to exit"<<endl;
                        exit(1);
                    }
                    else{
                        cout<<"you have entered an invalid number"<<endl;
                    }
                }
                else if(opt==4) {
                    cout << "okay sir!" << endl;
                    cout << "1.YOU WANT SOME JUICES?" << endl;
                    cout << "2.YOU WANT SOME HOT DRINKS?" << endl;
                    cout << "3.YOU WANT SOME SHAKES?" << endl;
                    cout << "4.EXIT" << endl;
                    cin >> opt3;
                    if (opt3 == 1) {
                        cout << "what kind juice you want?" << endl;
                        cout << "1.pineapple?" << endl;
                        cout << "2.apple?" << endl;
                        cout << "3.banana?" << endl;
                        cout << "4.strawberry?" << endl;
                        cout << "5.mango?" << endl;
                        cout << "6.exit" << endl;
                        cin >> opt3;
                        if (opt3 >= 1 && opt3 <= 5)
                            cout << "OKIE SIR!" << endl;
                    }
                    if (opt3 == 6) {
                        cout << "YOU CHOOSE TO EXIT" << endl;
                    } else {
                        cout << "you have enter invalid variables" << endl;
                    }
                  if(opt3==2){
                     cout<<"okie sir!"<<endl;
                     cout<<"1. tea"<<endl;
                     cout<<"2.coffee"<<endl;
                     cout<<"3.exit"<<endl;
                     cin>>opt3;
                     if(opt>=1 && opt<= 2){
                         cout<<"YOU SIR YOU WILL GET THEM IN YOUR ROOM"<<endl;
                     }
                     else if(opt3==3){
                         cout<<"YOU CHOOSE TO EXIT"<<endl;
                     }
                     else{
                         cout<<"you have enter invalid variables"<<endl;
                     }
                 }
                 else if(opt==3){

                        cout<<"what kind juice you want?"<<endl;
                    cout<<"1.pineapple?"<<endl;
                    cout<<"2.apple?"<<endl;
                    cout<<"3.banana?"<<endl;
                    cout<<"4.strawberry?"<<endl;
                    cout<<"5.mango?"<<endl;
                    cout<<"6.exit"<<endl;
                    cin>>opt3;
                if(opt3>=1 && opt3<=5){
                            cout<<"OKIE SIR!"<<endl;
                    }
                if(opt3==6){
                    cout<<"YOU CHOOSE TO EXIT"<<endl;
                }
                else{
                    cout<<"you have enter invalid variables"<<endl;
                }
                }
                 else if(opt==4){
                 cout<<"you choose to exit"<<endl;
                 exit(2);
                 }
                 else{
                     cout<<"you have entered invalid variables"<<endl;
                 }
                }
                 if(opt==5){
                    cout<<"SO SIR YOU WANT TO GET ANY HELP?"<<endl;
                    cout<<"you can CONTACT us any time"<<endl;
                    cout<<"the contact number is = 03225453019"<<endl;
                    cout<<"our EMAIL is = HELLHOTEL@ITU.EDU.PK"<<endl;
                }
                if(opt ==6){
                    cout<<"YOU CHOOSE TO EXIT"<<endl;
                    exit(2);
                }
                else{
                    cout<<"you have entered invalid variable"<<endl;
                }
            }
        }

        cout<<"HOW WOULD YOU LIKE TO PAY?"<<endl;
        cout << "1.by card" << endl;
        cout << "2.by cash" << endl;
        cout << "3.exit" << endl;
        cin >> opt3;
        if (opt3 == 1) {
            cout << "kindly give us the details of you card" << endl;
            cout << "please enter pass.." << endl;
            cin >> passOfCard;
            cout << "plz tell us how much money u have?" << endl;
            cin >> amountInCard;
            file3<<"pass of credit card is: "<<setw(10)<<passOfCard<<endl;
            file3<<"amount in credit card is: "<<setw(10)<<amountInCard<<endl;
            if (amountInCard < 0) {
                cout << "your card is withdrawn" << endl;
            }
            if (amountInCard < bill) {
                cout<< "we are sorry to inform you that you don't have enough money in your card to book this room"<< endl;
            }
            if (amountInCard > bill) {
                leftMoney = amountInCard - bill;
                cout << "the money left in the CARD =" << leftMoney << endl;
                file3<<"after withdrawing the money from card the money left is:"<<setw(10)<<leftMoney<<endl;
            }
        }
        if(opt3==2){
            cout<<"then drive there to pay your bill that is ="<<bill<<endl;
        }
        else if(opt3==3){
            cout<<"you choose to exit"<<endl;
            exit(2);
        }
    }
     else{
        cout<<"file is not open"<<endl;
    }
    file3.close();
    }

    void sixteenthFloor(){
        char ch;
        float leftMoney;
        string passOfCard;
        string detailsOfBath;
        int amountInCard;
        int opt3;
        int topFloor = 22000;
        int extraCharges = 2000;
        float bill;
        int opt;
        string details;
        ofstream file4;
        file4.open("sixteenthFloorSuperClass.txt", ios::app);
        if (file4.is_open()) {
            cout << "============= WELCOME SIR =============" << endl;
            cout << "YOU HAVE MADE A GOOD DECISION." << "\n" << "I HOPE YOU GUYS ENJOY THE VIEW"<<endl;
            cout << "the one night rent for this room is " << topFloor << endl;
            cout << "For how many nights you want to rent this" << endl;
            cin >> opt;
            topFloor = opt * 22000;
            cout << "DO YOU NEED ANY EXTRA MATTRESS BLANKETS BCZ IT IS COLD THERE?" << "ENTER y FOR YESS" << " AND n FOR NO" << endl;
            cin >> ch;
            if (ch == 'y') {
                cout << "HOW MANY MATTRESSES DO YOU NEED?" << "\n" << " YO CAN MAX TAKE 3 MATTRESSES" << endl;
                cin >> opt;
                if (opt > 3) {
                    cout << "you can't take more than 3 mattresses" << endl;
                } else {
                    extraCharges=opt*2000;
                    cout<<"THE TOTAL EXTRA CHARGES ARE ="<<extraCharges<<endl;
                    file4<<"THE TOTAL EXTRA CHARGES ARE ="<<extraCharges<<endl;
                    bill=topFloor+extraCharges;
                    cout<<"THE TOTAL BILL IS ="<<bill;
                    file4<<"THE TOTAL BILL IS ="<<bill<<endl;
                    cout << "YOU WANT US TO READY YOUR ROOM?" << endl;
                    cout << "1.A bath?" << endl;
                    cout << "2.Put some music on?" << endl;
                    cout << "3.You want some snacks?" << endl;
                    cout << "4.Some drink?" << endl;
                    cout << "5.Any help?" << endl;
                    cout << "6.exit?" << endl;
                    cin >> opt;
                    if (opt == 1) {
                        cout << "OKAY SIR! " << endl;
                        cout << "Tell us the details you want in the bath " << endl;
                        cout << "Means which shampoo you use ?" << endl;
                        cout << "what should be the temperature of the tub?" << endl;
                        cout << "OR ANYTHING?" << endl;
                        cin.get();
                        getline(cin, detailsOfBath);
                        cout << "OKAY SIR ALL THE THINGS ARE NOTED AND WILL BE DONE ACCORDINGLY" << endl;
                    } else if (opt == 2) {
                        cout << "OKAY SIR !" << endl;
                        cout << "CAN YOU PLZ TELL ME OF YOUR CHOICE?" << endl;
                        cout << "1.Romantic?" << endl;
                        cout << "2.Sad?" << endl;
                        cout << "3.Hiphop?" << endl;
                        cout << "4.Raap?" << endl;
                        cout << "5.Any other ?" << endl;
                        cin >> opt3;
                        if (opt3 >=1 && opt3 < 5){
                            cout << "OKAY SIR THAT IS NOTED AND WILL BE DONE" << endl;
                        }
                        else if (opt3 == 5) {
                            cin.get();
                            getline(cin, details);
                            cout << "OKAY THANK U! THAT WILL BE DONE" << endl;
                        } else {
                            cout << "you have entered an invalid number" << endl;
                        }
                    } else if (opt == 3) {
                        cout << "WHAT WOULD YOU LIKE?" << endl;
                        cout << "1.nimko=rs.50" << endl;
                        cout << "2.lays=rs.50" << endl;
                        cout << "3.cheetos=rs.50" << endl;
                        cout << "4.kurKure=rs.50" << endl;
                        cout << "5.exit" << endl;
                        cin >> opt3;
                        if (opt3>=1 && opt<5) {
                            cout<<"OKAY THEY WILL BE IN YOUR ROOM"<<endl;
                        }
                        else if(opt3 == 5){
                            cout<<"you choose to exit"<<endl;
                            exit(1);
                        }
                        else{
                            cout<<"you have entered an invalid number"<<endl;
                        }
                    }
                    else if(opt==4){
                        cout<<"okay sir!"<<endl;
                        cout<<"1.YOU WANT SOME JUICES?"<<endl;
                        cout<<"2.YOU WANT SOME HOT DRINKS?"<<endl;
                        cout<<"3.YOU WANT SOME SHAKES?"<<endl;
                        cout<<"4.EXIT"<<endl;
                        cin>>opt3;
                        if(opt3==1){
                            cout<<"what kind juice you want?"<<endl;
                            cout<<"1.pineapple?"<<endl;
                            cout<<"2.apple?"<<endl;
                            cout<<"3.banana?"<<endl;
                            cout<<"4.strawberry?"<<endl;
                            cout<<"5.mango?"<<endl;
                            cout<<"6.exit"<<endl;
                            cin>>opt3;
                            if(opt3>=1 && opt3<=5)
                            cout<<"OKIE SIR!"<<endl;
                        }
                        if(opt3==6){
                            cout<<"YOU CHOOSE TO EXIT"<<endl;
                        }
                        else{
                            cout<<"you have enter invalid variables"<<endl;
                        }
                         if(opt3==2){
                            cout<<"okie sir!"<<endl;
                            cout<<"1. tea"<<endl;
                            cout<<"2.coffee"<<endl;
                            cout<<"3.exit"<<endl;
                            cin>>opt3;
                            if(opt>=1 && opt<= 2){
                                cout<<"YOU SIR YOU WILL GET THEM IN YOUR ROOM"<<endl;
                            }
                            else if(opt3==3){
                                cout<<"YOU CHOOSE TO EXIT"<<endl;
                            }
                            else{
                                cout<<"you have enter invalid variables"<<endl;
                            }
                        }
                        else if(opt==3){

                            cout<<"what kind juice you want?"<<endl;
                            cout<<"1.pineapple?"<<endl;
                            cout<<"2.apple?"<<endl;
                            cout<<"3.banana?"<<endl;
                            cout<<"4.strawberry?"<<endl;
                            cout<<"5.mango?"<<endl;
                            cout<<"6.exit"<<endl;
                            cin>>opt3;
                            if(opt3>=1 && opt3<=5){
                                cout<<"OKIE SIR!"<<endl;
                            }
                            if(opt3==6){
                                cout<<"YOU CHOOSE TO EXIT"<<endl;
                            }
                            else{
                                cout<<"you have enter invalid variables"<<endl;
                            }
                        }
                        else if(opt==4){
                            cout<<"you choose to exit"<<endl;
                            exit(2);
                        }
                        else{
                            cout<<"you have entered invalid variables"<<endl;
                        }
                    }
                     if(opt==5){
                        cout<<"SO SIR YOU WANT TO GET ANY HELP?"<<endl;
                        cout<<"you can CONTACT us any time"<<endl;
                        cout<<"the contact number is = 03225453019"<<endl;
                        cout<<"our EMAIL is = HELLHOTEL@ITU.EDU.PK"<<endl;
                    }
                     if(opt ==6){
                        cout<<"YOU CHOOSE TO EXIT"<<endl;
                        exit(2);
                    }
                    else{
                        cout<<"you have entered invalid variable"<<endl;
                    }
                }
            }
            cout<<"HOW WOULD YOU LIKE TO PAY?"<<endl;
            cout << "1.by card" << endl;
            cout << "2.by cash" << endl;
            cout << "3.exit" << endl;
            cin >> opt3;
            if (opt3 == 1) {
                cout << "kindly give us the details of you card" << endl;
                cout << "please enter pass.." << endl;
                cin >> passOfCard;
                cout << "plz tell us how much money u have?" << endl;
                cin >> amountInCard;
                file4<<"pass of credit card is: "<<setw(10)<<passOfCard<<endl;
                file4<<"amount in credit card is: "<<setw(10)<<amountInCard<<endl;
                if (amountInCard < 0) {
                    cout << "your card is withdrawn" << endl;
                }
                if (amountInCard < bill) {
                    cout<< "we are sorry to inform you that you don't have enough money in your card to book this room"<< endl;
                }
                if (amountInCard > bill) {
                    leftMoney = amountInCard - bill;
                    cout << "the money left in the CARD =" << leftMoney << endl;
                    file4<<"after withdrawing the money from card the money left is:"<<setw(10)<<leftMoney<<endl;
                }
            }
            if(opt3==2){
                cout<<"then drive there to pay your bill that is ="<<bill<<endl;
            }
            if(opt3==3){
                cout<<"you choose to exit"<<endl;
                exit(2);
            }
        }
        else{
            cout<<"file is not open"<<endl;
        }
        file4.close();
}
void bookingSuperClass(){
    int opt;
    cout<<"=================== WELCOME TO HELL HOTEL SIR =========================="<<endl;
    cout<<"WE HAVE 3 FLOORS WHERE THESE SUPER CLASS ROOMS EXIST"<<"\n"<<"SO WHERE YOU WANT TO RENT IT"<<"\n"<<"THEY ALL HAVE DIFFERENT RENTS"<<endl;
    cout<<"1.at belowSea floor"<<endl;
    cout<<"2.at sixteenth floor"<<endl;
    cout<<"3.exit"<<endl;
    cin>>opt;
    if(opt==1){
        belowSea();
    }
    if(opt==2){
        sixteenthFloor();
    }
    if(opt==3){
        exit(1);
    }
}
void booking(){
char ch;
int opt2;
    cout<<"==================== WELCOME! HOW CAN I HELP YOU? =================="<<endl;
    cout<<"you want to rent a room?"<<"  enter y for yes"<<"  and n for no"<<endl;
    cin>>ch;
    if(ch=='y') {
        cout << "which type of room do you need?" << endl;
        cout << "1.basic room" << endl;
        cout << "2.standard room" << endl;
        cout << "3.super class room" << endl;
        cout << "4.exit" << endl;
        cin >> opt2;
        if (opt2 == 1) {
            bookingBasic();
        }
        if(opt2==2){
            bookingStandard();
        }
        if(opt2 ==3){
            bookingSuperClass();
        }
        if(opt2==4){
            cout<<"you choose to exit"<<endl;
            exit(1);
        }
    }
    else {
        cout << "then what do you want ?" << "\n" << "How can I help you?" << endl;
    }
}

void employee(){
    int opt;
    cout<<"1.RECEPTION."<<endl;
    cout<<"2.HouseKeepper."<<endl;
    cout<<"3.customer"<<endl;
    cout<<"4.exit."<<endl;
    cin>>opt;
    if()



}

