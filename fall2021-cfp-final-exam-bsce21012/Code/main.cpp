#include <iostream>
#include"files/q1.h"
#include "files/q2.h"
using namespace std;

int main() {
// Write your driving code here
int opt1;
cout<<"===== choose any opt ========"<<endl;
cout<<"1.for question 1"<<endl;
cout<<"2.for question 2"<<endl;
cin>>opt1;
switch(opt1){
    case 1:
{
  menu();
    break;
}
case 2:{
   displayData();
    break;
}
}
    return 0;
}
