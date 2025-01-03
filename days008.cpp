#include <iostream>
using namespace std;

int jumlahDigit(int n){
    if(n < 0)n = -n;
    if(n == 0)return 0;
    return (n % 10)+jumlahDigit(n / 10);
}

int main(){
    int n;
    cin >> n;

    int hasil = jumlahDigit(n);
    cout << hasil << endl;

    return 0;
}