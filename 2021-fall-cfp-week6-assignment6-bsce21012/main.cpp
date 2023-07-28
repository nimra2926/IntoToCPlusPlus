#include <iostream>
#include "Functions.h"
using namespace std;

int main() {

    int selection;
    cout<<"Enter 1 for solid Triangle, 2 for hollow Triangle and 3 for both";
	cin>>selection;
	if (selection!=1 && selection!=2 && selection!=3)
	{
		cout<<"Given input is wrong";
	}else
	switch (selection)
	{
		case 1:
			int t;
		cout<<"Enter 1 to make right triangle"<<endl<<"Enter 2 to make isosceles triangle"<<endl<<"Enter 3 to make eqilateral triangle"<<endl<<"Enter 4 for all triangles"<<endl<<"Enter 5 to Exit";
		cin>>t;
	if (t!=1 && t!=2 && t!=3 && t!=4 && t!=5)
	{
		cout<<"Invalid input";
	}else
	switch (t)
	{
		case 1:
			solidRightTri();
	break;
	case 2:
		solidIsoscelesTri();
		break;
	case 3:
		solidEquilateralTri();
		break;
	case 4:
		solidRightTri();
		solidIsoscelesTri();
		solidEquilateralTri();
	case 5:
    default:
        cout<<"invalid value "<<endl;
	}
    case 2:
    		int q;
		cout<<"Enter 1 to make right triangle"<<endl<<"Enter 2 to make isosceles triangle"<<endl<<"Enter 3 to make eqilateral triangle"<<endl<<"Enter 4 for all triangles"<<endl<<"Enter 5 to Exit";
		cin>>q;
	if (q!=1 && q!=2 && q!=3 && q!=4 && q!=5)
	{
		cout<<"Invalid input";
	}else
	switch (q)
	{
		case 1:
			hollowRightTri();
	break;
		case 2:
		hollowIsoscelesTri();
		break;
		case 3:
		hollowEquilateralTri();
		break;
		case 4:
		hollowRightTri();
		hollowIsoscelesTri();
		hollowEquilateralTri();
	case 5:
    default:
        cout<<"invalid value" <<endl;
	}
    return 0;
}
}
    
    

