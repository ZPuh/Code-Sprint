#include <iostream>
using namespace std;

int main (){
    // Menukar nilai tanpa tenporary
    int angka1,angka2;

    cin >> angka1 >> angka2;
    
    angka1 += angka2; 
    angka2 = angka1 - angka2; 
    angka1 -= angka2; 

    cout << angka1 << endl;
    cout << angka2 << endl;

    return 0;
}