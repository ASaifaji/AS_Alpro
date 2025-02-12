/*
Nama File           :   kalkSS
Deskripsi           :   Mengeluarkan hasil operasi dari dua input dengan pilihan operasi yang ditentukan user
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   4 Maret 2024
Waktu Pembuatan     :   29 menit 24 detik
*/

#include <stdio.h>

int main (){
    //Kamus
    int x, y, a, b, c, e, f;
    float d, m, n;
    char o;

    //Algoritma
    
    printf("Kalkulator Super Sederhana\n");
    printf("Masukkan angka operasi pertama :");
    scanf("%d", &x);
    printf("Masukkan angka operasi kedua :");
    scanf("%d", &y);
    printf("Masukkan pilihan operasi a-f in lowercase letter :");
    scanf("\n%c",&o);
    switch (o){
        case 'a':
            a = x+y;
            printf("%d + %d = %d",x,y,a);
            break;
        case 'b':
            b = x-y;
            printf("%d - %d = %d",x,y,b);
            break;
        case 'c':
            c = x*y;
            printf("%d * %d = %d",x,y,c);
            break;
        case 'd':
            m = x;
            n = y;
            d = m/n;
            printf("%d / %d = %.2f",x,y,d);
            break;
        case 'e':
            e = x/y;
            printf("%d div %d = %d",x,y,e);
            break;
        case 'f':
            f = x%y;
            printf("%d mod %d = %d",x,y,f);
            break;
        
        default:
            printf("Bukan pilihan menu yang benar");
            break;
        }
}