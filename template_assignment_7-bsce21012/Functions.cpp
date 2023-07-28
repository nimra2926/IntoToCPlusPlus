#include "Functions.h"
#include <iostream>
using namespace std;

void storeIntoArray()
{
	int a,num[10];
        cout<<"Enter numbers :"<<endl;
    for (a=0; a<10; a++)
    {
        cin>>num[a];
    }
}
void largestAndSmallestNumber()
{
 int max,min,num[0],a,sum=0;
    max= num[0];
    for (a=0; a<=10; a++)
    {
        cout<<"Enter any number:";
        cin>>num[a];
        if (max<num[a])
        max=num[a];
        sum=sum+num[a];
    }
        cout<<"Larger number = "<<max<<endl;
    min= num[0];
    for (a=0; a<10; a++)
    {
        if (min>num[a])
        min=num[a];
    }
    cout<<"Smaller number is= "<<min<<endl;
    cout<<"Sum is: "<<sum;
}
void sumOfEvenAndOdd()
{
	 int b,a,even=0,odd=0,num[10];
    for (a=0; a<10; a++)
    {
    	cout<<"Enter any number: ";
    	cin>>num[a];
        if (num[a]%2 == 0)
        {
            even = even + num[a];
        }
    }
cout << "Even numbers sum : "<<even<<endl;
    for (b=0; b<10; b++)
    {
        if (num[b]%2 != 0)
        {
            odd = odd + num[b];
        }
    }
        cout << "Odd numbers sum: "<<odd<< endl;
}
void numberOfPerfectSquares()
{
		int sqra;
	int num[10];
	int total=0;
	for(int i=1;i<=10;i++)
	{
		cout<<"Enter any number";
		cin>>num[i];
		sqra=sqrt(num[i]);
		if(num[i]==sqra*sqra)
		{
			total=total+1;
		}
	}
	cout<<"The amount of total perfect squares are"<<total;
}