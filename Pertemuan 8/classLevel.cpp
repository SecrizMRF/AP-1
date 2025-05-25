#include <iostream>
#include <string>
using namespace std;

class ContohAkses {
    private:
        int privateVar;
    
    protected:
        int protectedVar;

    public:
        int publicVar;
    
    // Constructor
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
            // cout << privateVar << endl; //error
            cout << protectedVar << endl;
            cout << publicVar << endl;
        }
};

int main() {
    system("cls");
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari luar class : " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.protectedVar << endl; //error 
    // cout << obj.privateVar << endl; //error

    Turunan tur;
    tur.aksesProtected();
    system("pause");
}