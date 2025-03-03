#include <stdio.h>
#include <conio.h>

int main()
{
    char nama[50];
    char kom[2];
    int nim;
    float ip;

    printf("Hello World\n");

    printf("Masukkan Nama   : ");
    gets(nama);

    printf("Masukkan NIM    : ");
    scanf("%d", &nim);

    getchar();

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