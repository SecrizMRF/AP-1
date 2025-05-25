#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct alamat
{
    string jalan;
    string kota;
    int kodepos;
};

struct mahasiswa 
{
    string nama;
    int umur;
    float ipk;
    alamat alamat_rumah; // Nested struct
};

int main() 
{
    system("cls");

    mahasiswa mhs1;
    
    // mhs1.nama = "Rizky";
    // mhs1.umur = 19;
    // mhs1.ipk = 4.00;

    // mhs1.alamat_rumah.jalan = "Jl. Dr. Mansyur";
    // mhs1.alamat_rumah.kota = "Medan";
    // mhs1.alamat_rumah.kodepos = 20222;

    // cout << "Alamat Rumah Mahasiswa 1:\n" << mhs1.alamat_rumah.jalan <<" "<< mhs1.alamat_rumah.kota <<" "<< mhs1.alamat_rumah.kodepos << endl;

    vector<mahasiswa> MahasiswaList;
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cin.get();
        cout <<"Masukkan nama: ";
        getline(cin, mhs1.nama);

        cout <<"Masukkan umur: ";
        cin >> mhs1.umur;

        cout <<"Masukkan IPK: ";
        cin >> mhs1.ipk;

        
        // cin.get();
        // cout <<"Masukkan alamat jalan: ";
        // getline(cin, mhs1.alamat_rumah.jalan);
        
        // cout <<"Masukkan alamat kota: ";
        // getline(cin, mhs1.alamat_rumah.kota);
        
        // cout <<"Masukkan alamat kodepos: ";
        // cin >> mhs1.alamat_rumah.kodepos;

        MahasiswaList.push_back(mhs1);
    }

    system("cls");
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : " << MahasiswaList[i].nama << endl;
        cout << "Umur   : " << MahasiswaList[i].umur << endl;
        cout << "IPK    : " << MahasiswaList[i].ipk << endl << endl;
        // cout << "Alamat : " << MahasiswaList[i].alamat_rumah.jalan << ", "<< MahasiswaList[i].alamat_rumah.kota << ", "<< MahasiswaList[i].alamat_rumah.kodepos << endl << endl;
    }
}
