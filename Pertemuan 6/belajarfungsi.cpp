#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

//Fungsi untuk memberikan keluaran "Halo, what is up (nama sesuai inputan)! Selamat belajar C++!"
void sapa(string nama) { //Parameter Formal = nama
    cout << "Halo, what is up " << nama << "! Selamat belajar C++!" << endl;
}
int main() {
    system("cls");
    string namaPengguna = "Kyy";
    sapa(namaPengguna); //Memanggil fungsi sapa dengan parameter aktual namaPengguna
}
