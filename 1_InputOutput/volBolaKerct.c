/*
Nama File           :   volBolaKerct
Deskripsi           :   Menghitung nilai volume bola kerucut
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   Senin, 26 Feb 2024
*/

#include <stdio.h>

int main(){
    //Kamus
    float r, PHI, Vb, Vk;
    PHI = 3.1415;
    //Algoritma
    printf("Diketahui :");
    printf("r = ");
    scanf("%f", &r);
    Vb = 4 * PHI * (r*r*r) / 3;
    Vk = 0.5 * Vb;
    printf("Jawab :");
    printf("Vb = 4/3 * (PHI * r^3)\nVb = 4/3 * (%.4f * %.1f^3)\nVb = %.2f", PHI, r, Vb);
    printf("\nVk = 1/2 * Vb\nVk = 1/2 * %.2f\nVk = %.2f", Vb, Vk);
    return 0;
}