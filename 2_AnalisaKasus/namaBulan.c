/*
Nama File           :   namaBulan
Deskripsi           :   Mengeluarkan statement (nama bulan) dari input user berdasarkan kondisi yang ditetapkan
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   29 Feb 2024
Waktu Pembuatan     :   3 menit 28 detik
*/

#include <stdio.h>

int main(){
    //Kamus
    int x;
    
    //Algoritma
    printf("Masukkan nomor bulan:");
    scanf("%d", &x);
    switch(x){
        case 1:
            printf("Januari");
            break;
        case 2:
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Desember");
            break;
        default:
            printf("Masukkan nomor bulan tidak tepat");
            break;
        }
    return 0;
}