#include "Functions.h"
#include <iostream>
using namespace std;
void table(int arr[rows][columns])
{
	for(int x=0;x<rows;x++)                                      //applying nested loop of for to display the array
	{
		for(int y=0;y<columns;y++)
		{
			cout<<arr[x][y]<<"\t";                              //displaying array
		}
		cout<<endl;
	}
}

void totals(int arr[rows][columns])
{
	int totalOdd=0;                                          //initializing totalOdd
	int totalEven=0;                                         //initializing totalEven
	for(int k=0;k<rows;k++)
	{
		for(int l=0;l<columns;l++)                          //applying nested loop
		{
			if(arr[k][l]%2==0 )                             // applying condition that if the mode of array is equal to zero
			{
				totalEven=totaleven+1;                      //adding 1 as array start from zero
			}else
			totalodd=totalOdd+1;                            //if mode is not equal to zero them add 1 in total odd
		}
	}
	cout<<"The Total number of even digits are:"<<totalEven;                   //displaying even digits
	cout<<endl;
	cout<<"The Total number of odd digits are:"<<totalOdd;                    //displaying odd digits

}

