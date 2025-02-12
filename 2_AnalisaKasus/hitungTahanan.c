/*
Nama File           :   hitungTahanan
Deskripsi           :   Mengeluarkan total jumlah nilai 3 buah tahanan dari input user
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   Jum'at, 1 Maret 2024
Waktu Pembuatan     :   4 menit 20 detik
*/

#include <stdio.h>

int main(){
    //Kamus
    int a, b, c, s;
    
    //Algoritma
    printf("Masukkan nilai tahanan pertama:");
    scanf("%d", &a);
    printf("Masukkan nilai tahanan kedua:");
    scanf("%d", &b);
    printf("Masukkan nilai tahanan ketiga:");
    scanf("%d", &c);
    if (a<0 || b<0 || c<0){
        printf("Masukkan tahanan tidak boleh negatif");
    }   
    else{
        s = a + b + c;
        printf("%d", s);
    } 
    return 0;
}