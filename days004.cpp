#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Nol (Genap)" << endl;
    }
    else if (n > 0 && n % 2 == 0) {
        cout << "Positif Genap" << endl;
    }
    else if (n > 0 && n % 2 != 0) {
        cout << "Positif Ganjil" << endl;
    }
    else {
        cout << "Negatif" << endl;
    }

    return 0;
}
