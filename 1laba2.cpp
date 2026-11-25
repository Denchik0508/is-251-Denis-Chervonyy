#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double x, y;
    cout<<"Vvedyete koordinate x and y:";
    cin>>x>>y;
    ((x>= -7 && x <= 0) && (y >= -2 && y <= 0))?
                cout << "Point belongs to the area":
                cout << "Point does not belong to the area";
    getch();
}
