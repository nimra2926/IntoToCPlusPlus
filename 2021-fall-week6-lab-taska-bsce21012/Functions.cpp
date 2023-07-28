#include "Functions.h"
#include <iostream>
using namespace std;



bool check(int x1, int y1, int x2, int y2,int  x3,int  y3, int x4, int y4, int x, int y) {
	if(y1 == 0 && y4 == 0 || x2 == 0 && x3 == 0)                       //if these points are zero
	return true;
	if(x1 == 0 && x4 == 0 || y2 == 0 && y3 == 0)                       //if these points are zero
	return true;
	else
	false;
}
bool find(int x1, int y1, int x2, int y2,int  x3,int  y3, int x4, int y4, int x, int y) {
	if(x>x1 && x <x2)                                                //if x is greater than x1 and x is less than x2
	return true;
	if(y>y1 && y <y2)                                                //if y is greater than y1 and y is less than y2
	return true;
	else
	return false;
}
