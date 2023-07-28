#include "Functions.h"
#include <math.h>
#include <iostream>
using namespace std;

//################# TASK 1 ############################

char lowerOrUpper(char ch){

   //Write your code here
   cout<<"enter a char"<<endl;

   cin>>ch;
   cout<<"the enter character is: "<<ch<<endl;
   
   string lowercase="abcdefghijklmnopqrstuvwxyz";
   string uppercase="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   int l_a =lowercase.find(ch);
   int u_a =uppercase.find(ch);

if (l_a != -1){
	 cout<<"the index number caculated by find function: "<<l_a<<endl;
	 cout << "the enter char is in lowercase"<<endl;
    return 'L';
}
else if (u_a != -1)
{     cout<<"the index number caculated by find function: "<<u_a<<endl;
	 cout << "the enter char is in Uppercase"<<endl;
 return 'U';
}
else{
	cout << "invlid character"<<endl; 
    return 'I';
}
}

//################# TASK 2 ############################

bool leapYear(int year){ 
   
   //Write your code here
   cout<<"enter a year"<<endl;
   cin>>year;
 
   bool isLeapYear = false;
   
   if (year % 4 == 0) {
     
            isLeapYear = true;
            return isLeapYear;   
      } 
    else if (year % 400 == 0) {
     
            isLeapYear = true;
            return isLeapYear;   
      } 
      else{
      	 return isLeapYear;
	  }
     
   }
  

//################# TASK 3 ############################

int reverseOfNumber(int num){ 
   
   //Write your code here
   
   cout<<"enter a four digit num";
   cin>>num;
   int first_digit,second_digit,third_digit,fourth_digit;
   fourth_digit=num%10;
   num=num/10;
   third_digit=num%10;
   num=num/10;
   second_digit=num%10;
   num=num/10;
   first_digit=num%10;
   cout<<"the reversed value is"<<fourth_digit*1000+third_digit*100+second_digit*10+first_digit*1;
//   return 0;
   
}

//################# TASK 4 ############################

bool examPermission(int total_classesheld, int classesattended , char ch ){ 
   
   //Write your code here
//int 'totalclasses';
//int attendedclasses;
   float percentage;
   cout<<"how many classes have been held?"<<endl;
   cin>>total_classesheld;
   cout<<"how many classes you have been attended?"<<endl;
   cin>> classesattended;
   cout<<"do you have a medical cause? please we enter y for yes and n for no ."<<endl;
   cin>>ch;
   cout<<"ch"<<ch<<endl;
   

   
   cout<<total_classesheld<<":"<<classesattended<<endl;
   
   double temp_a;
   
   percentage=classesattended*100/total_classesheld;

     
   cout<<"percentage: "<<percentage<<endl;
   
   if (percentage >75 && ch=='n'){
   	
   cout<<"you can sit in the exam"<<endl;
   	
   	 return "true"; //allow to sit in class
   
}
   else if (percentage <75 && ch=='y')
   {
   cout<<"you can sit in the exam"<<endl;
    return "true";    //do not allow to sit in class

}
   else if (percentage >75 && ch=='y')
   {
   cout<<"you can sit in the exam"<<endl;
    return "true";    //do not allow to sit in class

}
   else {
   	  cout<< "you are not allowed to sit in exam"<<endl;
   	  return "false";
   }
   

}
//################# TASK 5 ############################

int calculateCostOfItems(int numberOfItems)
{
  // Ask user to enter price of each item according to the number of items passed as parameter in function
  int cost=0;
  int price;
 
  for(int i=1; i<=numberOfItems;i++)
{
cout<<"enter price of item"<<i<<":";
cin>>price;
cost+=price;


 }
  return cost;
}
 
int calculateBillPayment(int numberOfItems){
  float total_cast;
  cout<<"the number of items: "<<endl;
  cin>>numberOfItems;
  
  total_cast=calculateCostOfItems(numberOfItems); //returns cost to be used
  cout<<"total_cast"<<total_cast<<endl;
  //Write your code to calculate final bill after adding shipping charges
 
 
  //return bill;
  float bill;
  float ship_cost;
  
	if(total_cast>0 && total_cast<300){
    cout<<"if running"<<endl;
 	ship_cost=numberOfItems*10;
 	
 	bill=total_cast+ship_cost;
 }
 else if(total_cast>=300  && total_cast<=400){
 	cout<<"else if"<<endl;
 	ship_cost=numberOfItems*5;
 	bill=ship_cost+total_cast;
 	
 }
 else{
 	bill=total_cast;
 }
 
 return bill;

}

