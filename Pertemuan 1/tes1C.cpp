#include <stdio.h> // header untuk bahasa c
#include <conio.h> // header untuk syntax get

int main() // bagian utama program
{
    char nama[50];
    char kom[2];
    int nim;
    float ip;

    printf("Hello World\n"); //Fungsi keluaran

    printf("Masukkan Nama   : ");
    gets(nama); // Fungsi inputan berupa string

    printf("Masukkan NIM    : ");
    scanf("%d", &nim); //Fungsi inputan secara umum

    getchar(); //Untuk menghapus sisa inputan dari buffer

    printf("Masukkan Kom    : ");
    gets(kom);

    printf("Masukkan IPK    : ");
    scanf("%f", &ip);

    /*Untuk output*/
    printf("Nama : ");
    puts(nama);
    printf("NIM : %d\n", nim);
    printf("Kom : ");
    puts(kom);
    printf("IPK : %2.f", ip);
}
