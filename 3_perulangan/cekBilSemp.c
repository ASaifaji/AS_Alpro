/*
Nama File           :   cekBilSemp
Deskripsi           :   Mengecek bilangan input user berupa bilangan sempurna atau bukan bilangan sempurna
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   13 Maret 2024
Waktu Pembuatan     :   
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus
    int n, i, f, j, k;
    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &n);
    i = 1;
    f = 0;
    j = 2;
    k = 1;
    while (i<n){
        if (n%i==0){
            f = f + i;
            i++;
        }
        else{
            i++;
        }
    }
    if(f==n){
        printf("n = %d -> Bilangan sempurna, {jumlah faktor bilangannya 1", n);
        while (j>1 && j<n){
            if(n%j==0){
                printf(" + %d",j);
                j++;
            }
            else{
                j++;
            }
        }
        printf(" = %d}", n);
    }
    else{
        printf("n = %d -> Bukan bilangan sempurna, {jumlah faktor bilangannya 1", n);
        while (j>1 && j<n){
            if(n%j==0){
                printf(" + %d",j);
                k = k + j;
                j++;
            }
            else{
                j++;
            }
        }
        printf(" = %d}", k);
    }

    return 0;
}