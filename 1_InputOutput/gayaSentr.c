/*
Nama File           :   gayaSentr
Deskripsi           :   Menghitung gaya sentripetal yang berlaku pada sebuah benda
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   Senin, 26 Feb 2024
*/

#include <stdio.h>

int main(){
    //Kamus
    float m, v, r, F;
    
    //Algoritma
    printf("Diketahui :");
    printf("m = ");
    scanf("%f", &m);
    printf("v = ");
    scanf("%f", &v);
    printf("r = ");
    scanf("%f", &r);
    F = m * (v*v / r);
    printf("Jawab :\nF = m * (v^2 / r)\nF = %.1f * (%.1f^2 / %.1f)\nF = %.2f N", m, v, r, F);
    return 0;
}