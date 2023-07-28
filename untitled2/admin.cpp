#include "Functions.h"
#include <math.h>
#include <iostream>
#include<string>
#include<fstream>
using namespace std;

struct product {
    char name[50];
    int wholeSale;
    int retailPrice;
    int modelNum;
};

void loginSystem(){
    string pass;
    int id;
    fstream myFile_("login.txt");
    if(!myfile_.is_open()){
     cout<<"the file you are trying to open does not exit -_-";
    }
    else{
        cout<<"please enter the id of admin."<<endl;
        cin>>id;
        cout<<"please enter password."<<endl;
        cin.getline(cin,pass);
        login<<id<<endl;
        login<<pass<<endl;
        cout<<"YOUR ACCOUNT HAS BEEN CREATED 0_0"<<endl;
    }
    myfile.close();
}


