#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    system("cls");

    //Array declaration

    /* 2 cara membuat array
    1. array kosong*/
    string nama[5];

    nama[0] = "Alya"; //Array nama indeks 0
    nama[1] = "Rizky";
    nama[2] = "Rifki";
    nama[3] = "Fatih";
    nama[4] = "Dhafa";

    // Inputan 5 nama
    // cout << "Masukkan 5 nama: " << endl;
    // for (int i = 0; i < 5; i++) {
    //     cout << "Nama ke-" << i + 1 << ": ";
    //     cin >> nama[i];
    // }

    //Array langsung isi
    // string nama[5] = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa"};
    // string nama[] = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa"};

    //Ascending element in array
    // for (int i = 0; i<5; i++) {
    //     cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    // }

    //Descending element in array
    // for (int i = 4; i >= 0; i--) {
    //     cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    // }

    // Multidimensional array (Program array multidimensi, dengan contoh penggunaan matriks)
    //Mencetak matriks 2x2
    // int matrix[2][3] = {{1,2,3}, {4,5,6}};
    // cout << "Matrix 2x3:" << endl;
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // } 

    //Mencetak matriks 3x3
    // int matrix1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // cout << "Matrix 3x3:" << endl;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << matrix1[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //Mencetak matriks 4x6
    // int matrix2[4][6] = {{10,20,30,40,50,60}, {70,80,90,10,11,12}, {13,14,15,16,17,18}, {19,20,21,22,23,24}};
    // cout << "Matrix 4x6:" << endl;
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 6; j++) {
    //         cout << matrix2[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    //String (array of char)
    // string nama1 = "Naufal";
    // cout << nama1[0] << endl;
    // cout << nama1[2] << endl;

    // Mencetak nama dengan tipe data array of char menggunakan for
    // for (int i = 0; i < nama1.length(); i++) {
    //     cout << nama1[i] << endl;
    // }

    // Menukar value s1 dengan s2
    // string s1 = "Hello", s2 = "World";
    // s1 = s2;
    // cout << s1 << endl;

    // cout << s1 + s2 << endl;

    // cout << (s1+s2).length() << endl;

    // cout << s1.substr(2,4) << endl;
    // cout << (s1+s2).substr(5,3) << endl;

    //Operator sizeof() (untuk menampilkan ukuran byte(s) dari sebuah var)
    // short angka = 10;
    // cout << "Ukuran integer: " << sizeof(angka) << " bytes" << endl;

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << "Ukuran array nilai: " << sizeof(nilai) << " bytes" << endl;

    // string s = "Alya";
    // cout << "Ukuran string: " << sizeof(s) << " bytes" << endl;

    // Menampilkan ukuran string dari array
    // string nama_karyawan[] = {"Budi", "Suep", "Aldi", "Cecep"};
    // int n = sizeof(nama_karyawan)/sizeof(string);
    // cout << n << endl;

    // Array library
    // array<float, 5> nilai = {10.5, 20.5, 30.5, 40.5, 50.5};
    // cout << "Nilai array: ";
    // for (int i = 0; i < nilai.size(); i++) {
    //     cout << nilai[i] << " ";
    // }

    //akan memberikan output setiap elemen pada array nilai
    // for (float n : nilai) {
    //     cout << n << " ";
    // }
}
