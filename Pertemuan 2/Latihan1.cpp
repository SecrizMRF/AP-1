// latihan luas dan volume permukaan bola
#include <iostream>
using namespace std; //digunakan di c++ untuk menyederhanakan syntax tanpa harus menggunakan std::

int main()
{
    system("cls");

    float r, l, luas, volume;

    cout << "Masukkan ruas: "; cin >> r;

    luas = 4*3.14*(r*r); //Inisialisasi nilai var luas
    volume =(float(4)/3)*3.14*(r*r*r);

    cout << "Luas = " << luas << endl;
    cout << "Vol = " << volume << endl;
}
