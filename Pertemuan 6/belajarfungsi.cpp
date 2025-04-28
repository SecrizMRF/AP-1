#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;


void sapa(string nama) {
    cout << "Halo, what is up " << nama << "! Selamat belajar C++!" << endl;
}
int main() {
    system("cls");
    string namaPengguna = "Kyy";
    sapa(namaPengguna);
}