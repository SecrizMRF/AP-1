#include <iostream>
using namespace std;

int main()
{
    system("cls");

    float p, l, luas;

    cout << "Masukkan panjang sisi persegi: "; cin >> p;

    cout << "Masukkan lebar (jika persegi panjang): "; cin >> l;

    luas = p*l; //Operasi matemtaika dalam c++
    cout << "Luas Persegi (/panjang) = " << luas << endl;
}
