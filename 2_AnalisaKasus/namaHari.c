/*
Nama File           :   namaHari
Deskripsi           :   Mengeluarkan statement (nama hari) dari input user berdasarkan kondisi yang ditetapkan
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   29 Feb 2024
Waktu Pembuatan     :   7 menit 18 detik
*/

#include <stdio.h>

int main(){
    //Kamus
    int x;
    
    //Algoritma
    printf("Masukkan nomor hari:");
    scanf("%d", &x);
    switch(x){
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jum'at");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Masukkan nomor hari tidak tepat");
            break;
        }
    return 0;
}