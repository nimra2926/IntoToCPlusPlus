#include "Functions.h"
#include <iostream>
using namespace std;
void feeCharges(){
    int beginningBalance;                                                    //initializing variables
    int accountCharges=10;                                                   //declaring
    int checksWritten = 0;
    int moneyWithdrawn;
    int totalMoneyTaken=0;
    float check1=0;
    float check2=0;
    float check3=0;
    float check4=0;
    float serviceFee=0;
    int moneyLeft;
    cout<<"please enter beginning balance = ";                                //ask the user its beginning value
    cin>>beginningBalance;
    if(beginningBalance<0) {                                                  //condition to verify that value is not negative
        cout << "your account is being overdrawn.";
    }
    else if(beginningBalance<400){                                            //condition to check that if the amount is less than 400
        accountCharges = accountCharges + 15;                                 //adding 15 in the 10 dollar which is constant
        cout<<accountCharges;
    }
    cout<<"please enter how many checks have you written = ";                 //condition to check the writtenChecks
    cin>>checksWritten;

    if(checksWritten<0){                                                      //condition to verify that the checksWritten is not negative
        cout<<"u cant enter a negative number ."<<endl;
    }
    for(int i=0;i<checksWritten;i++){                                          //a loop for money user is with drawing from each check
        cout<<"please enter the money u with drawn =  ";
        cin>>moneyWithdrawn;
        moneyWithdrawn++;
        totalMoneyTaken=totalMoneyTaken+moneyWithdrawn;                         //total money
    }
    cout<<"you have taken amount = "<<totalMoneyTaken<<endl;                    //displaying total money taken
    if (totalMoneyTaken>beginningBalance){                                      //condition to verify that the money taken is less than the money that is already present in bank account
        cout<<"you don't have enough money in your account, you can't withdraw it. ";       //displaying
    }
    moneyLeft=beginningBalance-totalMoneyTaken;                                             //to find the remaining money in bank account
    cout<<"moneyLeft = "<<moneyLeft;                                                        //displaying moneyLeft in account
    cout<<endl;
    if(checksWritten<20){                                                         //condition for the fee submit ion after every check that is less than 20
        check1=(checksWritten*(.01));
        cout<<"check1 = "<<check1<<endl;
    }
    else if(checksWritten>=20 && checksWritten<=39){                             //condition for the fee submit ion after every check that is less than equal to 39
        check2=((.08)*checksWritten);
        cout<<"check2 = "<<check2<<endl;
    }
    else if(checksWritten>=40 && checksWritten<=59){                             //condition for the fee submit ion after every check that is less than equal to 59
        check3=((.06)*checksWritten);
        cout<<"check3 = "<<check3<<endl;
    }
    else {                                                                       //condition for the fee submit ion after every check that is greater than 60
        check4=((.04)*checksWritten);
        cout<<"check4 = "<<check4<<endl;
    }
    serviceFee=accountCharges+check1+check2+check3+check4;                      //adding all the quantities for total service fee
    cout<<"The total service fee = "<<serviceFee<<endl;                         //displaying
}
void encryption(){
    int arr[4];                                                                 //initializing
    float digit1;
    float digit2;
    float digit3;
    float digit4;
    float temp1;
    float temp2;
    cout<<"please enter 4 positive integer =";                                   //asking to enter a positive integer
    for(int i=0;i<4;i++){
        cin>>arr[i];                                                             //taking input from user in an array
    }
    cout<<endl;
    for(int i=0;i<4;i++){                                                        //displaying array of 4 integer
        cout<<arr[i];
    }
    cout<<endl;
    arr[0]=arr[0]+7;                                                            //adding 7 to the array number that is placed at 0 index
    cout<<arr[0];                                                               //displaying after adding 7 to it
    arr[1]=arr[1]+7;                                                            //adding 7 to the array number that is placed at 1 index
    cout<<arr[1];                                                               //displaying after adding 7 to it
    arr[2]=arr[2]+7;                                                            //adding 7 to the array number that is placed at 2 index
    cout<<arr[2];                                                               //displaying after adding 7 to it
    arr[3]=arr[3]+7;                                                            //adding 7 to the array number that is placed at 3 index
    cout<<arr[3];                                                                //displaying after adding 7 to it
    cout<<endl;
    digit1=(arr[0]%10);                                                          //taking mode of 10 of the digit place at 0 index
    cout<<"digit1 = "<<digit1<<endl;                                             //displaying that digit
    digit2=(arr[1]%10);                                                          //taking mode of 10 of the digit place at 1 index
    cout<<"digit2 = "<<digit2<<endl;                                             //displaying that digit
    digit3=(arr[2]%10);                                                          //taking mode of 10 of the digit place at 2 index
    cout<<"digit3 = "<<digit3<<endl;                                             //displaying that digit
    digit4=(arr[3]%10);                                                          //taking mode of 10 of the digit place at 3 index
    cout<<"digit4 = "<<digit4<<endl;                                            //displaying that digit
        temp1=digit1;                                                           //storing the value of digit1 in temp1
        digit1=digit3;                                                          //storing the value of digit3 in digit1
        digit3=temp1;                                                           //storing the value of digit3 in temp1
        temp2=digit2;                                                           //storing the value of digit2 in temp2
        digit2=digit4;                                                          //storing the value of digit4 in digit2
        digit4=temp2;                                                           //storing the value of digit3 in temp1
    cout<<"the encrypted value is =" <<digit1<<digit2<<digit3<<digit4;          //displaying the encrypted value
}
void decryption(){
    int arr[4];                                                                //initializing
    float digit1;
    float digit2;
    float digit3;
    float digit4;
    float temp3;
    float temp4;
    cout<<"please enter 4 positive integer =";                                //asking to enter a positive integer
    for(int i=0;i<4;i++){                                                     //taking input from user in an array
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<4;i++){                                                      //displaying array of 4 integer
        cout<<arr[i];
    }
    cout<<endl;
    arr[0]=arr[0]+3;                                                          //adding 3 to the array number that is placed at 0 index
    cout<<arr[0];                                                             //displaying after adding 3 to it
    arr[1]=arr[1]+3;                                                          //adding 7 to the array number that is placed at 1 index
    cout<<arr[1];                                                             //displaying after adding 3 to it
    arr[2]=arr[2]+3;                                                          //adding 7 to the array number that is placed at 2 index
    cout<<arr[2];                                                             //displaying after adding 3 to it
    arr[3]=arr[3]+3;                                                          //adding 7 to the array number that is placed at 3 index
    cout<<arr[3];                                                             //displaying after adding 3 to it
    cout<<endl;
    digit1=(arr[0]%10);                                                       //taking mode of 10 of the digit place at 0 index
    cout<<"digit1 = "<<digit1<<endl;                                          //displaying that digit
    digit2=(arr[1]%10);                                                       //taking mode of 10 of the digit place at 0 index
    cout<<"digit2 = "<<digit2<<endl;                                          //displaying that digit
    digit3=(arr[2]%10);                                                       //taking mode of 10 of the digit place at 0 index
    cout<<"digit3 = "<<digit3<<endl;                                          //displaying that digit
    digit4=(arr[3]%10);                                                       //taking mode of 10 of the digit place at 0 index
    cout<<"digit4 = "<<digit4<<endl;                                          //displaying that digit
    temp3=digit1;                                                             //storing the value of digit1 in temp3
    digit1=digit3;                                                            //storing the value of digit3 in digit1
    digit3=temp3;                                                             //storing the value of digit3 in temp3
    temp4=digit2;                                                             //storing the value of digit2 in temp4
    digit2=digit4;                                                            //storing the value of digit4 in digit2
    digit4=temp4;                                                             //storing the value of digit4 in temp4
    cout<<"the decrypted value is =" <<digit1<<digit2<<digit3<<digit4;        //displaying decrypted value
}
