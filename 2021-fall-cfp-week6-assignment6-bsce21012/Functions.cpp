#include "Functions.h"
#include <iostream>
using namespace std;
void solidRightTri()
{
	int rows;
	cout<<"Enter the number of rows";
	cin>>rows;
	char ch;
			cout<<"Enter one of the following characters that will make the triangle"<<endl<<"*   ?   %   +   $   #   ~   @   (   ) ";
			cin>>ch;
	for(int u=1;u<=rows;u++)
	{
		for(int v=1;v<=u;v++)
		{
			cout<<ch;
		}
		cout<<endl;
	}
}
void solidisoscelesTri()
{
	int space, rows;
	char ch;
    cout <<"Enter number of rows: ";
    cin >> rows;
	cout<<"Enter one of the following characters that will make the triangle"<<endl<<"*   ?   %   +   $   #   ~   @   (   ) ";
			cin>>ch;
    for(int u = 1, w = 0; u <= rows; ++u, w = 0)
    {
        for(space = 1; space <= rows-u; ++space)
        {
            cout <<"  ";
        }
        while(w != 2*u-1)
        {
            cout <<ch<<" ";
            ++w;
        }
        cout << endl;
    }
}

void solidEquilateralTri()
{
	int space, rows;
	char ch;
    cout <<"Enter number of rows: ";
    cin >> rows;
	cout<<"Enter one of the following characters that will make the triangle"<<endl<<"*   ?   %   +   $   #   ~   @   (   ) ";
			cin>>ch;
    for(int u = 1, w = 0; u <= rows; ++u, w = 0)
    {
        for(space = 1; space <= rows-u; ++space)
        {
            cout <<"  ";
        }
        while(w != 2*u-1)
        {
            cout <<ch<<" ";
            ++w;
        }
        cout << endl;
    }
}
void hollowIsoscelesTri()
{
	int rows;
    cout << "Enter the number of rows : ";
	cin >>rows;
	char ch;
	cout<<"Enter one of the following characters that will make the triangle"<<endl<<"*   ?   %   +   $   #   ~   @   (   ) ";
			cin>>ch;
    for (int u = 1; u <= rows; u++)
    {
        for (int v = 1; v <= (rows - u); v++)
        {
            cout << " ";
        }
        for (int w = 1; w <= w * 2 - 1; w++)
        {
            if (w == 1 || w == u * 2 - 1)
            {
                cout <<ch;
            }
            else if (u == rows)
            {
			cout <<ch;
            }else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void hollowRightTri()
{
	int j,rows;
    char ch;
    cout<<"Enter the number of rows\n";
    cin>>rows;
    cout<<"Enter one of the following characters that will make the triangle"<<endl<<"*   ?   %   +   $   #   ~   @   (   ) ";
			cin>>ch;
    cout<<endl;
for(int i=1; i<=rows;  i++){
  for(int j=1; j<=i; j++)
  {
     if (j==1 || j==i || i==rows)
	 {
       cout<<ch;
     }
     else{
       cout<<" ";
}
}
cout<<endl;
}
}
void hollowEquilateralTri()
{
	int rows;
    cout << "Enter the number of rows : ";
	cin >>rows;
	char ch;
	cout<<"Enter one of the following characters that will make the triangle"<<endl<<"*   ?   %   +   $   #   ~   @   (   ) ";
			cin>>ch;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (rows - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1)
            {
                cout <<ch;
            }
            else if (i == rows)
            {
			cout <<ch;
            }else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

