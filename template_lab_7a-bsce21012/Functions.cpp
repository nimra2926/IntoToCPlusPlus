#include "Functions.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*
int votes[10];
int sum=0;
int percentage[5];

int tableOfVotes()
{
	 float percen[5];                                                 //initializing percent array of 5c
    int sum =0;                                                       //initializing sum
 double votes[5];                                                     //initializing votes of 5 array
    for (int t = 0; t < 5;t=t+1)                                      //for loop
    {
        cout<<" How many votes did  "<<t+1<< " candidate received ?"<<endl;
        cin>>votes[t];                                                 //taking votes from the user
    }
    for(int u=0;u<5;u=u+1)
    {
        sum=sum+votes[u];                                               //taking sum
    }
    int z=0;
    for(int v=0;v<5;v=v+1)
    {
        percen[z]=(votes[v]/sum)*100;                                  //calculating percentage
        z++;
    }
    for (int s= 0; s<5; s=s+1)
    {
        cout<<" Candidate " <<s+1<<" :"<<endl;                               //displaying canidates
        cout<<" Votes received  = "<<votes[s]<<endl;                         //displaying votes received
        cout<<" Percentage of Total votes : "<<percen[s]<<endl;              //displaying percentage
    }
}*/
//void find(){
//    fstream file;
//    fstream temp;
//    int persons;
//    int age;
//    char name[50];
//    char gender[50];
//    file.open("find.txt");
//    temp.open("temp.txt");
//    if(file.is_open()){
//        cout<<"how many persons information you want to print"<<endl;
//        cin>>persons;
//        file<<persons;
//        for(int i=0;i<persons;i++){
//            cout<<"please enter name..";
//            cin.get();
//            cin.get(name,50);
//            cout<<"enter age..";
//            cin>>age;
//            cout<<"enter gender";
//            cin.get();
//            cin.get(gender,50);
//            file<<"persons"<<setw(10)<<"persons"<<setw(10)<<persons<<setw(10)<<"name"<<setw(10)<<name<<setw(10)<<"age"<<setw(10)<<setw(10)<<age<<setw(10)<<"gender"<<setw(10)<<gender<<setw(10)<<endl;
//        }
//    }
//    else{
//        cout<<"this file is not open..-_-"<<endl;
//    }
//    if(temp.is_open()){
//
//        cout<<"enter the name you want to search";
//        cin.get();
//        cin.get(name,50);
//        while(search.compare(name)){
//
//        }
//    }
//    else{
//        cout<<"your file isn't open..-_-"<<endl;
//    }

//}
void transpose(){
    int arr[50][50];
    int arrTrans[50][50];
    int row;
    int col;
    cout<<"enter rows =";
    cin>>row;
    cout<<"enter columns =";
    cin>>col;
    cout<<"plz enter values = ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"entered values = ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl<<"\t\t ";
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arrTrans[j][i]=arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"the transpose of array is =";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<arrTrans[i][j]<<" ";
        }
        cout<<endl<<"\t\t\t     ";
    }

}