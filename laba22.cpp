#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double t, x, y;

    cout << "Enter t: ";
    cin >> t;
    cout << "Enter x: ";
    cin >> x;

    double value = t * t * t + 1;
    double rounded = round(value);

    cout << "M = " << value << '\n';

    if (fabs(value - rounded) > 0.0001 || rounded < 12 || rounded > 84)
    {
        cout << "No formula for this M.\n";
        return 0;
    }

    int M = static_cast<int>(rounded);

    switch (M)
    {
    case 12:
        if (x == 0)
        {
            cout << "x must not be zero.\n";
            return 0;
        }
        y = log(x * x);
        break;

    case 28:
        if (x < 0)
        {
            cout << "x must be 0 or greater.\n";
            return 0;
        }
        y = pow(x, 1.2);
        break;

    case 39:
        y = cos(x * x);
        break;

    case 84:
        y = cos(fabs(x));
        break;

    default:
        cout << "No formula for this M.\n";
        return 0;
    }
}