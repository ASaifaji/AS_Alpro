/*
Nama File           :   cekBilPrima
Deskripsi           :   Mengecek bilangan input user berupa bilangan prima atau bukan bilangan prima
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   13 Maret 2024
Waktu Pembuatan     :   
*/

#include <stdbool.h>
#include <stdio.h>

int main(){
    //Kamus
    bool x = true;
    int i, j;
    int n;
    j = 1;
    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &n);
    
    //Fungsi predikat
    if(n>=2){
        i = n - 1;
        while(i>1){
            if(n%i==0){
                x = false;
                break;
            }
            else{
                i = i-1;
            }
        }
    }
    else{
        x = false;
    }


    //Fungsi output
    if (x==true){
        printf("n = %d -> Bilangan prima {faktornya 1 dan %d}", n, n);
    }
    else{
        printf("n = %d -> Bukan bilangan prima {faktornya", n);
        while(j<n){
            if(n%j==0){
                printf(" %d,", j);
                j++;
            }
            else{
                j++;
            }
        }
        printf(" %d}", n);
    }
    return 0;
}