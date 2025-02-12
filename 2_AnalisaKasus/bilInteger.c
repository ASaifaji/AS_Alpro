/*
Nama File           :   bilInteger
Deskripsi           :   Mengeluarkan statement dari operasi logika untuk mengecek apakah variabel i negatif, positif atau nol
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   29 Feb 2024
Waktu Pembuatan     :   6 menit 45 detik
*/

#include <stdio.h>

int main(){
    //Kamus
    int i;

    //Algoritma
    printf("Input bilangan integer:");
    scanf("%d", &i);
    if (i<0) {
        printf("i bilangan bulat negatif");
    }
    else if (i==0) {
        printf("i bilangan bernilai nol");
    }
    else if (i>0) {
        printf("i bilangan bulat positif");
    }
    return 0;
}