/*
Nama File           :   jumFrekNilTabel
Deskripsi           :   Menjumlah semua angka yang muncul lebih dari satu kali
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   21 Maret 2024
Waktu Pembuatan     :   
*/

//NOT WORKING PROPERLY

#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus
    int n, p, S, k, j, a;
    //Algoritma
    //Input
    printf("Berapa bilangan panjang tabel? ");
    scanf("%d", &n);
    int t[n];
    int u[n];

    for(int i=0; i<n; i++){
        p = i + 1;
        printf("Masukkan bilangan ke-%d : ", p);
        scanf("%d", &t[i]);
    }
    
    //find

    p = 0; /*Inisialisasi untuk input ke tabel hasil u[]*/

    /*for pertama untuk angka tabel*/
    for(int i=0; i<n; i++){

        /*for kedua dan ketiga untuk angka tabel yang akan dibandingkan dengan angka tabel sebelumnya*/
        for(j=i+1; j<n; j++){
            
            if (t[i]==t[j]){
                u[p]==t[j];
                p++;
                t[j]=0;
                a++;
            }
            else{
                continue;
            }

        }
        
        if (a!=1 && t[i]!=0){
            S = S + (t[i] * a);
        }

    //output
    S = 0;
    }
    
    return 0;
}