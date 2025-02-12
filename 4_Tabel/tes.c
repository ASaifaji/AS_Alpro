#include<stdio.h>
#include<stdbool.h>
#include"praktikum5.c"


int main(){
    int n;
    n=10;
    printf("%d",JumlahFaktorF(n)); /*F untuk fungsi, fungsi hanya mengembalikan sebuah nilai atau data, jadi perlu diberi perintah*/
    jumlahFaktorP(n); /*Sedangkan prosedur tidak mengembalikan nilai namun menjalankan perintah dari sourcenya*/
    return 0;
}