#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "q2.h"
using namespace std;
struct facultyMember{
int idNumber;
string firstName;
string lastName;
string designation;
};
void displayData(){
     facultyMember m1;
    fstream myFile;
    myFile.open("displaydata.txt", ios:: app);
    if(myFile.is_open()){
    cout<<"please enter your Id Number =";
    cin>>m1.idNumber;
    cout<<"plz enter your first name =";
    cin.get();
    getline(cin,m1.firstName);
    cout<<"plz enter your last name =";
        cin.get();
    getline(cin,m1.lastName);
    cout<<"plz enter your designation =";
        cin.get();
    getline(cin,m1.designation);
    myFile<<"ID NUMBER IS ="<<setw(10)<<m1.idNumber<<setw(20)<<"First name "<<setw(10)<<m1.firstName
<<setw(20)<<"last name "<<setw(10)<<m1.lastName<<setw(20)<<"designation "<<setw(10)<<m1.designation<<endl;
    }
    else{
        cout<<"your file isn't open"<<endl;
    }
    myFile.close();
}