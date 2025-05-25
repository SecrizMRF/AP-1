#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main () {
    system("cls");
    Mahasiswa mhs1;
    mhs1.nama = "Rizky";
    mhs1.umur = 19;
    mhs1.ipk = 4.00;

    cout << "Nama   : " << mhs1.nama << endl;
    cout << "Umur   : " << mhs1.umur << endl;
    cout << "IPK    : " << mhs1.ipk << endl;
    cout << endl;

    Mahasiswa *ptrmhs1 = &mhs1;
    cout << "Nama   : " << ptrmhs1->nama << endl;
    cout << "Umur   : " << ptrmhs1->umur << endl;
    cout << "IPK    : " << ptrmhs1->ipk << endl;
}