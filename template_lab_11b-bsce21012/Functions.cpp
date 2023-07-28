#include "Functions.h"
#include <iostream>
#include <fstream>

using namespace std;

//cout<<########################### TASK 3 ########################################;
void salaries() {
    double gross;                                                    //initializing
    double *arr = new double[20];                                   //giving dynamic memory ellocation
    double grosses;                                                  //initializing
    double *arr2 = new double[9];                                   //giving dynamic memory ellocation
    arr2[0] = 0;
    arr2[1] = 0;                                                       //giving value zero at indexes 0 to 8
    arr2[2] = 0;
    arr2[3] = 0;
    arr2[4] = 0;
    arr2[5] = 0;
    arr2[6] = 0;
    arr2[7] = 0;
    arr2[8] = 0;

    for (int i = 0; i < 20; i++) {                                                       //loop for people's gross
        cout << "please enter the gross value = ";                                 //getting gross value from user
        cin >> arr[i];                                                             //storing that value in an array
        grosses = 200 + ((0.09) * arr[i]);                                            //adding that 200 in the array
        cout << "grosses of person is = " << grosses << endl;                          //displaying gross

        if (grosses >= 200 &&
            grosses <= 299)                                         //condition for the gross to lie in this range
        {

            arr2[0]++;                                                           //storing how many people lie in this range
        } else if (grosses >= 300 &&
                   grosses <= 399) {                                   //condition for the gross to lie in this range


            arr2[1]++;                                                           //storing how many people lie in this range
        } else if (grosses >= 400 &&
                   grosses <= 499) {                                   //condition for the gross to lie in this range


            arr2[2]++;                                                           //storing how many people lie in this range
        } else if (grosses >= 500 &&
                   grosses <= 599) {                                   //condition for the gross to lie in this range


            arr2[3]++;                                                         //storing how many people lie in this range
        } else if (grosses >= 600 &&
                   grosses <= 699) {                                 //condition for the gross to lie in this range


            arr2[4]++;                                                         //storing how many people lie in this range
        } else if (grosses >= 700 &&
                   grosses <= 799) {                                 //condition for the gross to lie in this range


            arr2[5]++;                                                         //storing how many people lie in this range
        } else if (grosses >= 800 &&
                   grosses <= 899) {                               //condition for the gross to lie in this range


            arr2[6]++;                                                       //storing how many people lie in this range
        } else if (grosses >= 900 &&
                   grosses <= 999) {                             //condition for the gross to lie in this range


            arr2[7]++;                                                    //storing how many people lie in this range
        } else {

            arr2[8]++;                                                    //storing how many people lie in this range
        }

    }
    cout << "the persons who lie in the range of 200$ to 299$ are:" << arr2[0] << endl;
    cout << "the persons who lie in the range of 300$ to 399$ are:" << arr2[1] << endl;
    cout << "the persons who lie in the range of 400$ to 499$ are:" << arr2[2]
         << endl;  //displaying the poeople who lie in this range
    cout << "the persons who lie in the range of 500$ to 599$ are:" << arr2[3] << endl;
    cout << "the persons who lie in the range of 600$ to 699$ are:" << arr2[4] << endl;
    cout << "the persons who lie in the range of 700$ to 799$ are:" << arr2[5] << endl;
    cout << "the persons who lie in the range of 800$ to 899$ are:" << arr2[6] << endl;
    cout << "the persons who lie in the range of 900$ to 999$ are:" << arr2[7] << endl;
    cout << "the persons who lie in the range of 1000 and above are:" << arr2[8] << endl;

}

void joyLandDiscovery() {
    int members;                                                                //initialization
    int age = 1;                                                                //initialization
    float discount;                                                                //initialization
    int priceOfTicket = 100;                                                       //initialization
    float price;                                                                  //initialization
    cout << "please enter how many members of family are u going to take a ride of discovery= ";
    cin >> members;                                                                             //asked for members of family
    for (int i = 0; i < members; i++) {                      //a loop for member of family
        cout << "please enter the age of member = ";                                        //asked age
        cin >> age;
        if (age < 10) {
            cout << "we are really sorry ,but you are not allowed to sit on discovery -_-" << endl;    //if age if less than 10 then they cant take this ride we apply condition
            cout << endl;
        } else if (age >= 10 && age <= 15) {                    //condition that if age is between 10 to 15
            discount = priceOfTicket * (0.1);                         //then a discount is given
            cout << "you are given an discount of 10% , that is =  " << discount << endl;       //displaying
            price = priceOfTicket - discount;
            cout << "now the price if ride is = " << price << endl;                 //price after discount
            cout << endl;
        } else if (age >= 16 && age <= 20) {                                        //condition that if age is between 16 to 20
            discount = priceOfTicket * (0.05);                                           //then a discount is given
            cout << "you are given an discount of 5% , that is = " << discount << endl;             //displaying
            price = priceOfTicket - discount;
            cout << "now the price if ride is = " << price << endl;               //price after discount
            cout << endl;
        } else {
            cout << "you can sit on ride, but you are not given any discount -_-" << endl;      //more than 20 do not get any discount
            cout << endl;
        }
    }
}

void joyLandMaryLand() {
    int age = 1;                                                                     //initialization
    int priceOfTicket = 100;
    float discount;
    int members;
    float price;
    cout << "please enter how many members of family are u going to take a ride of maryLand = ";    //asking members
    cin >> members;
    for (int i = 0; i < members; i++) {                 //a loop for family members
        cout << "please enter the age of members = ";
        cin >> age;
        if (age <= 5) {
            discount = priceOfTicket * (0.5);                                       //discount formula
            cout << "you are given an discount of 50%, that is = " << discount << endl;         //displaying
            price = priceOfTicket - discount;                                                //finding price
            cout << "now the price if ride is = " << price << endl;                       //displaying
            cout << endl;
        } else if (age > 5 && age <= 10) {                                            // condition that if age is less than 10
            discount = priceOfTicket * (0.25);                                         //discount formula
            cout << "you are given an discount of 25% , that is =" << discount << endl;
            price = priceOfTicket - discount;                                            //price
            cout << "now the price if ride is = " << price << endl;                     //displaying price
            cout << endl;
        } else {
            cout << " you can take ride , but you are not given any discount -_-" << endl;
            cout << endl;
        }
    }
}

void priceOfParking() {
    int hours;
    int PRICEOfPARKING;
    cout << "for how many hours will u guys stay ?" << endl;                      //asking hours
    cin >> hours;
    PRICEOfPARKING = hours * 100;                                                //priceOfParking formula
    cout << " the Price of parking is = " << PRICEOfPARKING << endl;             //displaying price
    cout << endl;
}

void bookingFlights(){
    int seata;
    int seatb;
    int seatc;                                                        //initializing
    char card[200];
    int opt;
    int opta;
    fstream myfile;
    fstream myfilea;                                                   //files
    char Class;
    cout<<"please tell me your name = ";
    cin.getline(card,200);                                     //taking names
    cout<<endl;
    cout<<"please enter your seat number = ";                    //seat number
    cout<<seatc<<endl;
    cout<<"please enter your class  ";                           //chosing class
    if (Class=='A'){
        cout<<"1st class";
    }
    else if (Class =='B'){
        cout<<"Economy class";
    }

    do{
        cout<<"please enter 1 for First Class"<<endl;
        cout<<"please enter 2 for Economy class"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
            {
                myfile.open("seata");
                myfile>>seata;
                if(seata<5){
                    seata++;
                    myfile.close();
                    Class=='A';
                    cout<<"you are assigned an first class ticket plz enjoy yourself."<<endl;
                    seatc=seata;
                }
                else if (seatb<=5){
                    myfilea.open("seatb");
                    myfilea>>seatb;
                    if(seatb<5){
                        cout<<"1.would u like to go from economy class?"<<endl;
                        cout<<"2.or would u like to wait for the next flight?"<<endl;
                        cin>>opta;
                        if(opta==1){

                            seatb++;
                            myfilea.close();
                            Class=='B';
                            cout<<"you are assigned an economy class ticket plz enjoy yourself.";
                            seatc=seatb;
                        }
                    }
                    else{
                        cout<<"next flight will take off in 3 hours,you can wait."<<endl;
                        break;
                    }
                }
            }
            case 2:
            {
                myfilea.open("seatb");
                myfilea>>seatb;
                if(seatb>=5){
                    seatb++;
                    Class='B';
                    cout<<"you are given an economy class ticket plz enjoy.";
                    seatc=seatb;
                }
                break;
            }

        }
    }
  while(opt>=1 && opt<=2);
}

void changingFile(){
    int seata;
    int  seatb;
    fstream file;
    fstream filea;
    file.open("seata");
    filea.open("seatb");
    ofstream temp("temp");
    ofstream tempa("tempa");
    temp<<seata;
    tempa<<seatb;
    file.close();
    filea.close();
    remove("seata");
    rename("temp", "seata");
    remove("seatb");
    rename("temp", "seatb");
}
