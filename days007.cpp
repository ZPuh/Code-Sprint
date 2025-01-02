#include <iostream>
using namespace std;

double ApangkatB(double a, double b)
{
    double result = 1;
    if (b < 0)
    {
        for (int i = 1; i <= -b; i++)
        {
            result /= a;
        }
    }
    else
    {
        for (int i = 1; i <= b; i++)
        {
            result *= a;
        }
    }

    return result;
}

int main()
{
    double a, b;
    cin >> a >> b;
    double hasil = ApangkatB(a, b);

    cout << hasil << endl;
    return 0;
}
