#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

//Fungsi tanpa nilai balikan
void tampilkanPesan() {
    cout << "====Selamat Datang di AP 1====" << endl;
}

//Fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

//Fungsi overload
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

//Fungsi rekursif
long faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    system("cls");
    int x = 5, y = 3;
    //Menggunakan funfsi tanpa nilai balikan
    tampilkanPesan();
    int hasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan : " << hasilTambah << endl;

    //Menggunakan fungsi overload
    int hasilKaliInt = kali(x, y);
    double hasilKaliDouble = kali(5.5, 2.0);
    cout << "Hasil perkalian int : " << hasilKaliInt << endl;
    cout << "Hasil perkalian double : " << hasilKaliDouble << endl;
    cout << "Faktorial x = " << faktorial(x) << endl;
}