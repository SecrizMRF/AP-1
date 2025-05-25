// Pertemuan 2 materi 1: operator
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    system("cls");

    int a,b;

    // Assignment Operator (=)
    a = 3;
    b = 5;

    // Aritmethic Operator (+,-,*,/,%)
    /*
    int tambah = a+b; // operator penjumlahan
    int kurang = a-b; // Op pengurangan
    int kali = a*b; // Op perkalian
    float bagi = float(a)/float(b); // Op pembagian
    int mod = a%b; // Op mod

    cout <<"Hasil Penjumlahan : " << tambah <<endl;
    cout <<"Hasil Pengurangan : " << kurang <<endl;
    cout <<"Hasil Perkalian : " << kali <<endl;
    cout <<"Hasil Pembagian : " << bagi <<endl;
    cout <<"Hasil Modulo : " << mod << endl;
    */

    //Relational Operator 
    // Membandingkan kedua nilai dengan operator ==, >, >=, <, <=, !=. Jika benar, maka akan memberikan output 1 dan 0 jika salah
    // cout << (a==b) << endl; 
    // cout << (a>b) << endl;
    // cout << (a>=b) << endl;
    // cout << (a<b) << endl;
    // cout << (a<=b) << endl;
    // cout << (a!=b) << endl;

    //Logical Operator
    // And (&&)
    // cout << (true && true) << endl; //Hasilnya 1
    // cout << (true && false) << endl; //Hasilnya 0
    // cout << (false && true) << endl; //Hasilnya 0
    // cout << (false && false) << endl; //Hasilnya 0

    // Or (||)
    // cout << (true || true) << endl; //Hasilnya 1
    // cout << (true || false) << endl; //Hasilnya 1
    // cout << (false || true) << endl; //Hasilnya 1
    // cout << (false || false) << endl; //Hasilnya 0

    // Negasi (1)
    // cout << !true << endl; //Hasilnya 0
    // cout << !false << endl; //Hasilnya 1

    // Bitwise Operator (!,&,|,~,^)
    // cout << (5&7) << endl; //hasilnya 5
    // cout << (5|7) << endl; //hasilnya 7
    // cout << (5^7) << endl; //hasilnya 2
    // cout << (~7) << endl; //hasilnya -8
    // cout << (7 << 2) << endl; //hasilnya 28
    // cout << (7 >> 2) << endl; //hasilnya 1

    // Shorthand
    // a += 7; // sama dengan a = a+7
    // cout << a << endl;

    // a -= 7; // sama dengan a = a - 7
    // cout << a << endl;

    // a *= 7; // sama dengan a = a*7
    // cout << a << endl;

    // a/= 7; //sama dengan a = a/7
    // cout << a << endl;

    // Increment & Decreament
    // Pre Increment (increment sebelum line dijalankan)
    // cout << a << endl;
    // cout << ++a << endl;

    // cout << b << endl;
    // cout << ++b << endl;

    // Post Increment (increment setelah line dijalankan)
    // cout << a << endl;
    // cout << a++ << endl;
    // cout << a << endl;

    // cout << b << endl;
    // cout << b++ << endl;
    // cout << b << endl;
    
    // Pre Decrement (decrement sebelum line dijalankan)
    // cout << a << endl;
    // cout << --a << endl;

    // cout << b << endl;
    // cout << --b << endl;
    
    // Post Decrement (decrement setelah line dijalankan)
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl;

    // cout<<"Hello World";
}
