/*
Nama File           :   bilPrimaN
Deskripsi           :   Mengeluarkan bilangan prima kurang dari sama dengan input user
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   13 Maret 2024
Waktu Pembuatan     :   
*/

#include <stdbool.h>
#include <stdio.h>

int main(){
    //Kamus
    bool x = true;
    int n, i, j;
    
    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &n);
    i = 3;
    printf("n = %d -> Bilangan primanya adalah", n);
    if (n>1){
        printf(" 2");
    }
    while(i<=n){
        j = i - 1;
        if(i>1){
            while(j>1){
                if(i%j==0){
                    x = false;
                    break;
                }
                else{
                    j = j - 1;
                }
            }
            if(x==true){
                printf(", %d",i);
                i++;
            }
            else{
                i++;
                x = true;
            }
        }
        else{
            i++;
        }
    }
    return 0;
}