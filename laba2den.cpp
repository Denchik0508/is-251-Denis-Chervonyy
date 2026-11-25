#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double x,y;
    cout <<"Vvedite koordinate x and y: ";
    cin >> x >> y;
    if ((x >= 0 && y <= 5) && (y >= -5) && (y <= -sqrt(x * x + 16)))
    cout <<"Point belongs to the area";
    else
    cout <<"Point does not belong to the area";
     getch();
}
