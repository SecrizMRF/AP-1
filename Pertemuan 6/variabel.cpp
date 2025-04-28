#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

string namaGlobal = "Ilmu";

void namaVariabel() {
    string namaLokal = "Komputer";
    cout << namaLokal << endl;
    cout << namaGlobal << endl;
}

int main() {
    system("cls");
    namaVariabel();
    cout << namaGlobal<<endl;
}