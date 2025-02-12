/*
Nama File           :   luasKellLayang
Deskripsi           :   Menghitung luas dan keliling sebuah layang-layang
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   Senin, 26 Feb 2024
*/

#include <stdio.h>

int main(){
    //Kamus
    float s1, s2, d1, d2, Luas, Kell;

    //Algoritma
    printf("Diketahui : ");
    printf("s1 = ");
    scanf("%f", &s1);
    printf("s2 = ");
    scanf("%f", &s2);
    printf("d1 = ");
    scanf("%f", &d1);
    printf("d2 = ");
    scanf("%f", &d2);
    Luas = 0.5 * d1 * d2;
    Kell = 2 * (s1 + s2);
    printf("Jawab :");
    printf("Luas = 1/2 * d1 * d2\nLuas = 1/2 * %.1f * %.1f\nLuas = %.2f", d1, d2, Luas);
    printf("Kell = 2 * (s1 + s2)\nKell = 2 * (%.1f + %.1f)\nKell = %.2f", s1, s2, Kell);
    return 0;
}