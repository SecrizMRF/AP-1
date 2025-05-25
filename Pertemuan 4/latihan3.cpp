#include <iostream>
using namespace std;

int main() {
    string password, sandi, expected = "";

    cout << "Masukkan kata sandi : ";
    cin >> password;

    cout << "Masukkan kata : ";
    cin >> sandi;

    //Untuk menambahkan satu per satu huruf dengan indeks +1 dari sebuah kalimat yang diberikan user
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1);
    }

    //Mengecek apakah sandi yang diinputkan user sesuai dengan sandi yang telah diolah program
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl;
    } else {
        cout << "Tulisan agen salah" << endl;
    }

    return 0;
}
