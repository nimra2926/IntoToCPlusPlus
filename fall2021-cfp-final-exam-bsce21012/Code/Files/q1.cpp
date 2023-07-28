#include <iostream>
#include "q1.h"
using namespace std;
void  menu(){
int opt;
do{
cout<<"============ choose any option ========"<<endl;
cout<<"1.Press 1 for creating new array of size N"<<endl;
cout<<"2.Press 2 to check if current array is a set "<<endl;
cout<<"3.Press 3 to add new element to array ensuring that it remains a set"<<endl;
cout<<"4.Press 4 to display array (Recursion)"<<endl;
cout<<"5.Press 5 to extract set from an array"<<endl;
cout<<"6.press 6 to exit -_- "<<endl;
cin>>opt;
switch (opt){
    case 1:
    {
 givingVAlues();

        break;
    }
    case 2:
    {
  arrayAsSet();
        break;
    
    }
    case 3:
    {
newElement();
        break;
    }
    case 4:{
        int size;
int arr[60];
        //  recursion(size,arr[60]);
        break;
    }
    case 5:{

        break;
    }
    case 6:{
        cout<<"you choose to exit.."<<endl;
        exit(1);
        break;
    }
    default:{
        cout<<" you have entered an invalid input , plz try again.."<<endl;
        break;
    }
}
}
while(opt>=1 && opt<=6);

}

void givingVAlues(){
    int size;
    int arr[60]={-1};
    cout<<"plz enter the size of array ="<<endl;
    cin>>size;
    
    
    for(int i=0;i<size;i++){
        arr[i]=-1;
    }
    cout<<"the values are = { ";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}";

}

void arrayAsSet(){
    int size=5;
    int arr[60];
    cout<<"plz enter the values of array =";
    for(int i=0;i<size;i++){
        cin>>arr[i];} 
        cout<<"The array is =";
        for(int i=0;i<size;i++){
        cout<<arr[i];} 
        cout<<endl;
            for(int i=0;i<size;i++){
                int a=arr[i];
            if(a==arr[i+1] )
            {
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
        if(!a==arr[i+1]){
            if(a==arr[i+2])
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
        if(!a==arr[i+2]){
            if(a==arr[i+3] )
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
         if(!a==arr[i+3]){
            if(a==arr[i+4] )
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
    }
    }
    void newElement(){
        int size=5;
    int arr[60];
    cout<<"plz enter the some new values in the array =";
    for(int i=0;i<size;i++){
        cin>>arr[i];} 
        cout<<"The array is =";
        for(int i=0;i<size;i++){
        cout<<arr[i];} 
        cout<<endl;
            for(int i=0;i<size;i++){
                int a=arr[i];
            if(a==arr[i+1] )
            {
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
        if(!a==arr[i+1]){
            if(a==arr[i+2])
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
        if(!a==arr[i+2]){
            if(a==arr[i+3] )
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
         if(!a==arr[i+3]){
            if(a==arr[i+4] )
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
    }

    }
    void extractSet(){
        int size=5;
    int arr[60];
    cout<<"plz enter the some new values in the array =";
    for(int i=0;i<size;i++){
        cin>>arr[i];} 
        cout<<"The array is =";
        for(int i=0;i<size;i++){
        cout<<arr[i];} 
        cout<<endl;
            for(int i=0;i<size;i++){
                int a=arr[i];
            if(a==arr[i+1] )
            {
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
        else{
            cout<<arr[i];
        }
        if(!a==arr[i+1]){
            if(a==arr[i+2])
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
        else{
            cout<<arr[i];
        }
        if(!a==arr[i+2]){
            if(a==arr[i+3] )
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
        cout<<arr[i];
         if(!a==arr[i+3]){
            if(a==arr[i+4] )
            cout<<"you cant have same values in a set "<<endl;
            i++;
            break;
        }
        else{
            cout<<arr[i];
        }
    }
    }
   
//    int  recursion(int size,int arr[60]){
//     cout<<"plz enter the size of array ="<<endl;
//     cin>>size;
//     if(size<1){
//         return 1;
//     }
//     else{
//         for(int i=0;i<size;i++){
//         cin>>arr[i];
//         }
//     }
//     return recursion(size,arr[]),recursion(size-1,arr[]);

//    }






