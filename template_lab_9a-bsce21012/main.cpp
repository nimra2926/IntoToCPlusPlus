#include <iostream>
#include "Functions.h"
using namespace std;
int main ()
{
    printCharacter();

     sumOfElements ();
     float numa;
     float numb;
    cout<<"\n please enter numa"<<endl;
    cin>>numa;
    cout<<" please enter numb"<<endl;
    cin>>numb;
    swapValue (&numa , &numb);
    return 0;
}

