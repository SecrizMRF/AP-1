#include <iostream>
#include <string>
using namespace std;

class ContohAkses {
    private: //class provate ini hanya bisa diakses dalam class ini sendiri
        int privateVar;
    
    protected: //class protected ini dapat diakses dalam class ini sendiri dan class turunan nya
        int protectedVar;

    public: //class public ini bisa diakses dimana saja oleh siapa saja
        int publicVar;
    
    // Constructor (Sebagai pemberi nilai awal dari masing-masing var di dalam class)
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses {
    public:
        void aksesProtected() {
            cout << "Akses dari dalam class turunan : " << endl;
            // cout << privateVar << endl; //error (karena bukan merupakan class utamanya)
            cout << protectedVar << endl;
            cout << publicVar << endl;
        }
};

int main() {
    system("cls");
    ContohAkses obj; //Declare obj sebagai variabel dengan tipe data class ContohAkses
    obj.tampilkanSemua();

    cout << "Akses dari luar class : " << endl;
    cout << obj.publicVar << endl; //bisa karena class-nya public
    // cout << obj.protectedVar << endl; //error (karena bukan merupakan kelas turunan atau class utamanya)
    // cout << obj.privateVar << endl; //error (karena bukan merupakan class nya)

    Turunan tur;
    tur.aksesProtected();
    system("pause");
}
