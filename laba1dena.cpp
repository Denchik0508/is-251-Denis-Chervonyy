#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double a,b,y;
    a= 1.5; b= 1.2;
    y = sqrt (a*a-2*a*b+b*b)/(b*b);
    cout<<"Result="<<y;
    getch();
}
