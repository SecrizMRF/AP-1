#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

string namaGlobal = "Ilmu"; //Inisialisasi variabel global namaGlobal dengan value "Ilmu"

void namaVariabel() {
    string namaLokal = "Komputer"; //Inisialisasi variabel lokal namaLokal dengan value "Komputer"
    cout << namaLokal << endl;
    cout << namaGlobal << endl; //Mencetak variabel global namaGlobal
}

int main() {
    system("cls");
    namaVariabel(); //Memanggil fungsi namaVariabel
    cout << namaGlobal<<endl; //Mencetak nilai namaGlobal
}
