#include <iostream>
#include "Functions.h"
using namespace std;
int main ()
{
    char str1[100];
    char str2[100];
    int n=0;
    cout<<"str1 is:"<<endl;
    cin.get(str1,100);
    recursiveFunction( str1, str2, n);
    cout<<"your str2 is:"<<str2<<endl;
}



