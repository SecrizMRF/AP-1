#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    system("cls");

    //vektor
    // Declare vector.
    vector<string> nama = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa"};

    // for (string karyawan : nama) {
    //     cout << karyawan << endl;
    // }

    //Add data to vector
    nama.push_back("Dani");
    cout << "Setelah menambah data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }

    //Menghapus data paling belakang dari sebuah vector
    nama.pop_back();
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }

    //Menghapus data vector dengan indeks +3)
    nama.erase(nama.begin() + 3);
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
}
