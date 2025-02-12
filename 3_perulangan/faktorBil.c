/*
Nama File           :   faktorBil
Deskripsi           :   Mengeluarkan faktor-faktor bilangan dari input user
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   7 Maret 2024
Waktu Pembuatan     :   
*/

#include <stdio.h>

int main(){
    int n,i;
    printf("Masukkan bilangan yang akan difaktorkan : ");
    scanf("%d", &n);
    i = 1;
    while (i<n){
        if (n%i==0){
            printf("%d, ",i);
            i++;
        }
        else{
            i++;
        }
    }
    printf("%d adalah faktor dari bilangan %d", i, n);
    return 0;
}