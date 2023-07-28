#include <iostream>
#include "Functions.h"
using namespace std;
int main()
{
    int x1;
    int y1;
    int x2;
    int y2;
    int  x3;
    int  y3;
    int x4;
    int y4;
    int x;
    int y;
    cout<<"please enter the value of x cordinate of p1"<<endl;
    cin>>x1;
    cout<<"please enter the value of y cordinate of p1"<<endl;
    cin>>y1;
    cout<<"please enter the value of x cordinate of p2"<<endl;
    cin>>x2;
    cout<<"please enter the value of y cordinate of p2"<<endl;
    cin>>y2;
    cout<<"please enter the value of x cordinate of p3"<<endl;
    cin>>x3;
    cout<<"please enter the value of y cordinate of p3"<<endl;
    cin>>y3;
    cout<<"please enter the value of x cordinate of p4"<<endl;
    cin>>x4;
    cout<<"please enter the value of y cordinate of p4"<<endl;
    cin>>y4;
    cout<<"please enter the value of x cordinate of p"<<endl;
     cin>>x;
    cout<<"please enter the value of y cordinate of p"<<endl;
    cin>>x;
    if(check(x1,y1,x2,y2,x3,y3,x4,y4,x,y) == true)
	cout<<"its A Rectangle\n";
	else
	cout<<"Not\n";


	if(find(x1,y1,x2,y2,x3,y3,x4,y4,x,y) == true)
	cout<<"Point lies inside the Rectangle\n";
	else
	cout<<"Noo\n";

}







