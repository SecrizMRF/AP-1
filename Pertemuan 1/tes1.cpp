#include <iostream> // header untuk cpp
#include <conio.h> // header untuk menggunakan getche() dan getch()
using namespace std;

int main()
{
    system("cls");
    string nama;
    char kom, jenis_kelamin;
    int nim;
    float ip;

    /*Ini adalah untuk komentar 
    beberapa baris*/
    
    cout<<"Hello World\n";
    cout<<"\nMasukkan Nama: ";

    // cin>>nama;
    getline(cin, nama); // agar karakter spasi bisa terbaca

    cout<<"Masukkan Kom : ";
    cin>>kom;
    cout<<"Masukkan NIM : ";
    cin>>nim;
    cout<<"Masukkan IPK : ";
    cin>>ip;

    cout<<"Masukkan jenis kelamin (L/P): ";
    jenis_kelamin = getche(); // inputan tanpa enter

    cout<<"\n\n";

    cout<<"Nama :"<<nama<<endl;
    cout<<"Kom  :"<<kom<<endl;
    cout<<"NIM  :"<<nim<<endl;
    cout<<"IPK  :"<<ip<<endl;
    cout<<"Jenis kelamin: ";
    putchar(jenis_kelamin); cout<<"\n";

    getch(); // sama seperti getche, tapi karakter yang diinput tidak ditampilkan
}