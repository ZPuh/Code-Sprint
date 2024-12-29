#include <iostream>
using namespace std;

int main()
{
    // Ganjil Atau Genap

    int n;

    cin >> n;

    if (n % 2 == 1)
    {
        cout << n << " Adalah Ganjil" << endl;
    }
    else
    {
        cout << n << " Adalah Genap" << endl;
    }
    return 0;
}