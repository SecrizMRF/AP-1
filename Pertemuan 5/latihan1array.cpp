#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    system("cls");

    //Penjumlahan mmatrix 2*2
    int matrix1[2][2];
    int matrix2[2][2];
    int result[2][2];

    //Inputan matriks 1
    cout << "Masukkan elemen matrix 1 (2x2):" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
            getchar();
        }
    }

    //Inputan matriks 2
    cout << "Masukkan elemen matrix 2 (2x2):" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
            getchar();
        }
    }

    //Keluaran hasil penjumlahan matriks 1 dan 2
    cout << "Hasil penjumlahan matrix 1 dan matrix 2:" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
}
