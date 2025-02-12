/*
Nama File           :   CekSegitiga
Deskripsi           :   Mengeluarkan nama jenis segitiga dengan input sisi segitiga dari user
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   Jum'at, 1 Maret 2024
Waktu Pembuatan     :   30 menit 11 detik
*/

#include <stdio.h>

int main(){
    //Kamus
    int a, b, c;
    
    //Algoritma
    printf("Masukkan nilai sisi-sisi segitiga:");
    printf("\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    if(a+b>c || a+c>b || b+c>a){
        printf("nilai-nilai sisi tidak dapat membentuk segitiga");
    }   
    else if(a==b && b==c){
        printf("nilai-nilai sisi membentuk segitiga sama sisi");
    }   
    else if(a==b || b==c || a==c){
        printf("nilai-nilai sisi membentuk segitiga sama kaki");
    }   
    else if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a)){
        printf("nilai-nilai sisi membentuk segitiga siku-siku");
    }   
    else{
        printf("nilai-nilai sisi membentuk segitiga sembarang");
    }
        
    return 0;
}