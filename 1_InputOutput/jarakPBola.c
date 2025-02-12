/*                                               
Nama File           :   jarakPBola
Deskripsi           :   Menghitung jarak lintasan parabola sebuah bola
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   Senin, 26 Feb 2024
*/

#include <stdio.h>

int main(){
    //Kamus
    float v0, t, g, y;
    g = 9.8;

    //Algoritma
    printf("Diketahui:");
    printf("v0 = ");
    scanf("%f", &v0);
    printf("t = ");
    scanf("%f", &t);
    y = v0 * t - (0.5 * (g * t*t));
    printf("Jawab :\ny = v0 * t - (1/2) * (g * t^2)\ny = %.1f * %.1f - (1/2) * (%.1f * %.1f^2)\ny = %.2f", v0, t, g, t, y       );
    return 0;
}