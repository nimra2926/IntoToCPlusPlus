#include "task1.h"
#include <iostream>
#include <string>
#include<fstream>
using namespace std;
struct joint_date
{
    int day,month,year;
};
struct address
{
    string docAddress;
};
struct doctor
{
    int regNum;
    char name[50];
    address ad;
    joint_date jd;
};

doctor *array=new doctor[30];
int count=0;

void loginSystem()
{
    string regId;
    string password;
   fstream logInFile;
   logInFile.open("login.txt", ios::out);
   if(!logInFile)
   {
       cout<<"Error in creating file."<<endl;
   }
   else
   {
       cout<<"File created successfully. Enter your id and password for future use."<<endl;
   }
   if(!logInFile.is_open())
   {
       cout<<"could not open file."<<endl;
   }
   else
   {
       cout<<"Enter registration id: "<<endl;
       cin>>regId;
       logInFile<<regId;
       logInFile<<"\n";
       cout<<"Enter password: "<<endl;
       cin>> password;
       logInFile<<password;
   }
    string checkRegId;
    string checkPassword;
    char ch;
    int option;
    cout<<"Press y to continue using program and press n to exit."<<endl;
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
        cout << "Enter your id and password to pursue." << endl;
        cin >> checkRegId >> checkPassword;
        if ((checkRegId == regId) && (checkPassword == password))
        {
            cout << "Login successful" << endl;
            do {
                cout << "Do you want to enter a record or display record?\n"
                     << "1) enter record.\n"
                     << "2) display record\n"
                     << "3) exit\n";
                cin >> option;
                if (option == 1) {
                    cout << "enter record." << endl;
                    enterRecord();
                }
                if (option == 2) {
                    cout << "display record." << endl;
                }

            } while (option != 3);


        }
         else {
            cout << "The password is incorrect." << endl;
            cin>>checkRegId>>checkPassword;
            cout << "Login successful" << endl;
            do {
                cout << "Do you want to enter a record or display record?\n"
                     << "1) enter record.\n"
                     << "2) display record\n"
                     << "3) exit\n";
                cin >> option;
                if (option == 1) {
                    cout << "enter record." << endl;
                    enterRecord();
                }
                if (option == 2) {
                    cout << "display record." << endl;
                }

            } while (option != 3);

        }

    }

    else
    {
        cout<<"Program terminated."<<endl;
    }

    logInFile.close();

}
void enterRecord()
{
    doctor *array=new doctor[30];
    int numOfDocs;
    cout<<"for how many doctors do you want to enter the record?"<<endl;
    cin>>numOfDocs;
        cout<<"record of doctor "<<endl;
        cout<<"Enter name\n";
        cin.ignore();
        cin.getline(array[30].name,50);
        cout<<"Enter reg Id\n";
        cin>> array[count].regNum;
        cout<<"Enter address.\n";
        cin.ignore();
        getline(cin,array[count].ad.docAddress);
        cout<<"\n----------joining date--------------\n";
        cout<<"Day: ";
        cin>>array[count].jd.day;
        cout<<"\nMonth: ";
        cin>>array[count].jd.month;
        cout<<"\nYear: ";
        cin>>array[count].jd.year;
        cin.ignore();
        count++;

    fstream myRecords;
    myRecords.open("records.txt",ios::app);
    if(!myRecords.is_open())
    {
        cout<<"couldn't open file."<<endl;
    }
    else
    {
        for(int i=0; i<30; i++)
        {
            myRecords<<"record of doctor "<<i+1<<endl;
            myRecords<<"Name: "<< array[count].name<<endl;
            myRecords<<"Reg Id: " << array[count].regNum<<endl;
            myRecords<<"Address: " << array[count].ad.docAddress<<endl;
            myRecords<<"Joining date: " << array[count].jd.day<<"-"<<array[count].jd.month<<"-"<<array[count].jd.year<<endl;
        }
    }
    myRecords.close();

}


void sorting() {
    doctor *temp = nullptr;
//    for (int i = 0; i<count; i++) {
//        for (int j = 1; j<count; j++) {
//            if (array[j - 1].jd.year >= array[j].jd.year && array[j - 1].jd.month >= array[j].jd.month &&
//                array[j - 1].jd.day >= array[j].jd.day)
//            {
//
//                            *temp=array[j-1];
//                            array[j-1]=array[j];
//                            array[j]=*temp;
//            }
//        }
//    }
int j=0;
 for(int i=0;i<30;i++){
     if(array[j].jd.year>array[j++].jd.year){
         cout<<"the array[j] joined before the arr[j++]";
     }
     else if(array[j].jd.year==array[j++].jd.year){
         cout<<"the array[j++] and arr[j] joined at the same date ";
         if(array[j].jd.month>array[j++].jd.month){
             cout<<"the array[j] joined before the arr[j++]";
         }
         else if(array[j].month>)
     }
     else
     {
        continue;
     }

 }
}

void insertDoctor()
{
    enterRecord();
}
void menu()
{
    cout<<"\t\tCREATE LOGIN SYSTEM!"<<endl;
    loginSystem();

}


