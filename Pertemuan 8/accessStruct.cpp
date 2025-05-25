#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa { //Struct pada C/C++ fungsinya mirip dengan record dalam pascal, yaitu menyimpan banyak variabel yang dengan tipe data berbeda
    string nama;
    int umur;
    float ipk;
};

int main () {
    system("cls");
    Mahasiswa mhs1; //Declare var mhs1 dengan tipe data struct
    mhs1.nama = "Rizky"; //Mengakses struct Mahasiswa pada variabel nama
    mhs1.umur = 19; //Mengakses struct Mahasiswa pada variabel umur
    mhs1.ipk = 4.00; //Mengakses struct Mahasiswa pada var ipk

    cout << "Nama   : " << mhs1.nama << endl;
    cout << "Umur   : " << mhs1.umur << endl;
    cout << "IPK    : " << mhs1.ipk << endl;
    cout << endl;

    //Mengakses struct menggunakan pointer
    Mahasiswa *ptrmhs1 = &mhs1;
    cout << "Nama   : " << ptrmhs1->nama << endl;
    cout << "Umur   : " << ptrmhs1->umur << endl;
    cout << "IPK    : " << ptrmhs1->ipk << endl;
}
