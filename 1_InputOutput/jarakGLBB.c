/*
Nama File           :   jarakGLBB
Deskripsi           :   Menghitung jarak yang ditempuh oleh benda yang bergerak lurus berubah beraturan
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   Senin, 26 Feb 2024
*/

#include <stdio.h>

int main(){
    
    //Kamus
    float v0, t, a, s;

    //Algoritma
    printf("Diketahui:\nv0 = ");
    scanf("%f", &v0);
    printf("t = ");
    scanf("%f", &t);
    printf("a = ");
    scanf("%f", &a);
    s = v0*t+0.5*a*t*t;
    printf("Jawab:\nS = v0 * t + (1/2) * a * t^2\nS = %.1f * %.1f + (1/2) * %.1f * %.1f^2\nS = %.2f", v0, t, a, t, s);
    return 0;

}