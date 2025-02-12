/*
Nama File           :   bilSempN
Deskripsi           :   Mengeluarkan bilangan sempurna kurang dari sama dengan input user
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   13 Maret 2024
Waktu Pembuatan     :   
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus
    int n, m, i, f;
    //Algoritma
    m = 28;
    printf("Masukkan bilangan n : ");
    scanf("%d", &n);
    printf("n = %d -> Bilangan sempurna yang kurang dari sama dengan n adalah", n);
    if(n>=6){
        printf(" 6");
    }
    while(m<=n){
        f = 0;
        i = 1;
        while (i<m){
            if (m%i==0){
                f = f + i;
                i++;
            }
            else{
                i++;
            }
        }
        if(f==m){
            printf(", %d",m);
            m++;
        }
        else{
            m++;
        }
    }
    return 0;
}