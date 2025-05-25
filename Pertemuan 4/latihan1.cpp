#include <iostream>
using namespace std;

int main()
{
    system("cls");
    string kalimat;

    cout<<"Masukkan kalimat : ";
    getline(cin,kalimat);

    //Untuk membuat setiap huruf kalimat menajdi kapital
    for (int i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]);
    }
    cout<<kalimat<<endl;

    // Membuat setiap huruf awal kata saja yang menjadi kapital
    for (int i = 0; i < kalimat.length(); i++) {
        if (i == 0) {
            kalimat[i] = toupper(kalimat[i]);
        } else if (kalimat[i] == ' ') {
            kalimat[i+1] = toupper(kalimat[i+1]);
        }
    }
    cout<<kalimat<<endl;
}
