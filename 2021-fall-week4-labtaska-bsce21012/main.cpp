#include <iostream>
#include "Functions.h"
using namespace std;

int main() 
 {
	int num;
	cout<<"you want sum till num"<<endl;
	cin>>num;
  cout<<sumofseries( num )<<endl;

		cout<<"please enter the num till u want to sum"<<endl;
	cin>>num;
	cout<<sumofnthnum ( num)<<endl;  
}
