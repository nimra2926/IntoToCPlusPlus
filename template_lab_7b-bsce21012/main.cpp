#include <iostream>
#include "Functions.h"
using namespace std;
int main()
{
	int arr[rows][columns];                                                 //initializing array
	for(int s=0;s<rows;s++)                                                 //loop for rows
	{
		for(int t=0;t<columns;t++)                                          //loop for column
		{
			cout<<"Insert the value of"<<"["<<s<<"]"<<"["<<t<<"]";          //ask user to enter the value
			cin>>arr[s][t];                                                 //enter an array
			cout<<endl;
		}
	}
	cout<<"Here are the values in an arranged table form"<<endl;
	table(arr);                                                            //calling
	totals(arr);
	return 0;
}

