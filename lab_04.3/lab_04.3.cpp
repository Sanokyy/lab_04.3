#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, xp, xk, dx, x, F;
    const double eps = 1e-9;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "xp = ";
    cin >> xp;
    cout << "xk = ";
    cin >> xk;
    cout << "dx = ";
    cin >> dx;

    cout << fixed;
    cout << "-----------------------------" << endl;
    cout << "|" << setw(8) << "x"
        << " |" << setw(14) << "F" << " |" << endl;
    cout << "-----------------------------" << endl;

    x = xp;

    while (x <= xk + eps)
    {
        if (a < 0 && fabs(c) > eps)
        {
            F = a * x * x + b * x + c;

            cout << "|" << setw(8) << setprecision(2) << x
                << " |" << setw(14) << setprecision(3) << F
                << " |" << endl;
        }
        else if (a > 0 && fabs(c) < eps)
        {
            if (fabs(x - b) < eps)
            {
                cout << "|" << setw(8) << setprecision(2) << x
                    << " |" << setw(14) << "undefined"
                    << " |" << endl;
            }
            else
            {
                F = -a / (x - b);

                cout << "|" << setw(8) << setprecision(2) << x
                    << " |" << setw(14) << setprecision(3) << F
                    << " |" << endl;
            }
        }
        else
        {
            F = a * (x + c);

            cout << "|" << setw(8) << setprecision(2) << x
                << " |" << setw(14) << setprecision(3) << F
                << " |" << endl;
        }

        x += dx;
    }

    cout << "-----------------------------" << endl;

    return 0;
}