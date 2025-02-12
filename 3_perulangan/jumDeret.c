/*
Nama File           :   jumDeret
Deskripsi           :   Mencari nilai S dari jumlah deret sepanjang n, dimana n input dari user
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   7 Maret 2024
Waktu Pembuatan     :   
*/

#include <stdio.h>

int main(){
    //Kamus
    int i,s,n;
    //Algoritma
    printf("Masukkan nilai n : ");
    scanf("%d",&n);
    i = 1;
    s = 1;
    while (i<=n){
        if (i<n){
            printf("%d + ",i);
            i++;
            s =  s + i;
        }
        else{
            printf("%d = %d", i, s);
            break;
        }
    }

    return 0;
}