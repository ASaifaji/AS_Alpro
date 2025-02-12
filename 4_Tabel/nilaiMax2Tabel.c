/*
Nama File           :   nilMax2Tabel
Deskripsi           :   Mengembalikan nilai maksimum kedua setelah nilai maksimum
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   21 Maret 2024
Waktu Pembuatan     :   >30 menit
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus
    int n, c, i, j, a, m, m2;

    //Algoritma
    //Input
    printf("Berapa bilangan panjang ukuran sampel? ");
    scanf("%d", &a);
    int tabel[a];
    m = 0;
    for(c=0; c<a; c++){
        n=c+1;
        printf("masukkan bilangan ke %d : ", n);
        scanf("%d", &tabel[c]);
    }

    //Max
    for(i=0; i<a; i++){
        if (m<tabel[i]){
            m=tabel[i];
        }
        else{
            continue;
        }
    }

    //Max2
    m2 = 0;
    for(j=0; j<a; j++){
        if(m != tabel[j]){
            if(m2<tabel[j]){
                m2 = tabel[j];
            }
            else{
                continue;
            }
        }
        else{
            continue;
        }
    }

    //Output
    printf("Bilangan maks kedua adalah %d", m2);
    return 0;
    }