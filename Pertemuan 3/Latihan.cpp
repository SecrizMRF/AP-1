#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    system("cls");
    int nilai;

    cout<<"Masukkan nilai : ";
    cin>>nilai;

    if (nilai % 10 == 0) // operasi kondisi percabangan if
    {
        cout<<"Nilai anda kelipatan 10"<< endl;
    }

    else if (nilai % 5 == 0) // operasi kondisi jika tidak memenuhi kondisi if, dan dengan memberikan kondisi lainnya lagi
    {
        cout<<"Nilai anda kelipatan 5"<< endl;
    }

    else //jika tidak memenuhi semua kondisi
    {
        cout<<"Nilai anda bukan kelipatan 5 atau 10"<< endl;
    }
    cout<<"RIFKI SI RAJA MOKEL";
}
