#include <iostream>
using namespace std;

// Fungsi penjumlahan
void penjumlahan(int a, int b) {
    a += b;
    cout << "Hasil penjumlahan: " << a << endl;
}

//Fungsi penjumlahan dengan pointer
void penjumlahanPointer ( int *a, int *b) {
    *a += *b;
    cout << *a << endl;
}

//Fungsi perkalian 2 berulang dengan menggunakan pointer
void doubleValue (int *a) {
    *a *= 2;
    cout << *a << endl;
}

int main() {
    system("cls");

    // Deklarasi pointer
    int number = 35;
    int *pointer_number = &number; //Pointer untuk variabel number

    cout << "Nilai number: " << number << endl;
    cout << "Alamat memori variabel number: " << &number << endl;
    cout << "Nilai pointer_number: " << pointer_number << endl;
    cout << "Nilai yang ditunjuk oleh pointer_number: " << *pointer_number << endl;
    cout << "Alamat memori pointer_number: " << &pointer_number << endl;

    // Pointer operation
    // *pointer_number = 25;
    // cout << "Nilai number: " << number << endl;
    // cout << "Alamat memori variabel number: " << &number << endl;
    // cout << "Nilai pointer_number: " << pointer_number << endl;
    // cout << "Nilai yang ditunjuk oleh pointer_number: " << *pointer_number << endl;
    // cout << "Alamat memori pointer_number: " << &pointer_number << endl;

    // Pointer in array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num; 

    // cout << "Isi variabel number: " << num[0] << endl; //menampilkan isi variabel num dengan indeks 0
    // cout << "Alamat memori variabel num : " << &num[3] << endl; //menampilkan alamat memori dari var num dengan indeks 3
    // cout << "Isi variabel pointer_num   : " << pointer_num << endl; //menampilkan isi dari variabel pointer_num
    // cout << "Isi variabel yang ditunjuk oleh pointer_num: " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num: " << &pointer_num << endl;
    // cout <<endl;

    // *pointer_num += 5; //6
    // cout << "Isi variabel number: " << num[0] << endl;
    // cout << "Alamat memori variabel num : " << &num[0] << endl;
    // cout << "Isi variabel pointer_num   : " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num: " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num: " << &pointer_num << endl;
    // cout <<endl;

    // Pointer in parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << "Nilai num1: " << num1 << endl;
    // cout << "Nilai num2: " << num2 << endl;
    // penjumlahanPointer(&num1, &num2); // Jika menggunakan pointter, nilai variabel dapat diubah (return) ke nilai baru
    // cout << "Nilai num1: " << num1 << endl;
    // cout << "Nilai num2: " << num2 << endl;

    // Pointer in pointer
    int score = 4;
    int *pointer_score = &score;
    int **ptr_ptr_score = &pointer_score; //Pointer untuk pointer_score

    // cout << "Isi variabel score: " << score << " dan alamat memorinya " << &score << endl;

    // cout << "Isi variabel pointer_score: " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " Alamat memori pointer_score " << &pointer_score << endl << endl;

    // cout << "Isi variabel ptr_pointer_score: " << ptr_ptr_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_ptr_score << " Alamat memori pointer_score " << &ptr_ptr_score << endl;

    // Dynamic pointer
    int *ptr = new int;
    *ptr = 30;

    // cout << "Isi variabel ptr: " << *ptr << " dan alamat variabel ptr: " << &ptr << endl;

    // delete ptr; // deallocation, menghapus pointer
    // cout << "Isi variabel ptr: " << *ptr << " dan alamat variabel ptr: " << &ptr << endl;

    // Contoh
    // int n;
    // cout << "Masukkan sebuah angka = ";
    // cin >> n;

    // doubleValue(&n); // Menggunakan addres of n sebagai parameter aktual
    // cout << "Nilai angka setelah dikali 2 = " << n << endl;

}
