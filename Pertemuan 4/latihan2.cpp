#include<iostream>
using namespace std;

int main()
{
    system("cls");
    string kalimat;

    cout<<"Masukkan kalimat : ";
    getline(cin,kalimat);

    //Untuk membuat hanya huruf vokal menjadi kapital
    // for (int i = 0; i < kalimat.length(); i++) {
    //     if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o') {
    //         kalimat[i] = toupper(kalimat[i]);
    //     }
    // }
    // cout<<kalimat<<endl;

    //Untuk membuat hanya huruf vokal saja yang kapital, dan sisanya huruf kecil
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o') {
            kalimat[i] = toupper(kalimat[i]);
        } else {
            kalimat[i] = tolower(kalimat[i]);
        }
    }
    cout<<kalimat<<endl;
}
