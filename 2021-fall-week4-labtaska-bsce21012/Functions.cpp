#include "Functions.h"
#include <math.h>
#include <iostream>
using namespace std;
 
int sumofseries (int num)
{
int sum=0;

for (int i=1;i<=num;i++ )
{
	cout<<i<<"*"<<i<<"="<<i*i<<endl;
		sum=sum+i*i;
}
cout<<"the sum of the above series is:"<<sum<<endl;
return sum;
 }

int sumofnthnum (int num)
{
float sum,div=0;
cout<<"enter the value of nth term";
cin>>num;


for ( int i=1;i<=num;i++ )
{
div=1/(i*i);
	cout<<i<<"/"<<i<<"^"<<1/i<<div<<endl;
		sum+=sum+div;
}
cout<<"the sum of the above series is:"<<sum<<endl;
return sum;
 }

