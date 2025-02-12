/*
Nama File           :   soal2(BubbleSort)
Deskripsi           :   Mengurutkan tabel (Descending) menggunakan algoritma Bubble sort
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   29 Mei 2024
Waktu Pembuatan     :   
*/

#include <stdio.h>

int main(){
    //Kamus Lokal
    int T[] = {7,1,9,5,3,9,6};
    int temp;
    int N = 7;
    //Algoritma
    printf("Initial T State = [%d", T[0]);
    for(int k=1;k<N;k++){
        printf(",%d", T[k]);
        }
    printf("]");
    printf("\n");
    for(int pass=0; pass<N-1; pass++){
        for(int k=N-1; k>pass; k = k-1){
            if(T[k]>T[k-1]){
                temp = T[k];
                T[k] = T[k-1];
                T[k-1] = temp;
            }
        }
    }
    printf("T After Bubble Sorting = [%d", T[0]);
    for(int k=1;k<N;k++){
        printf(",%d", T[k]);
    }
    printf("]");
    printf("\n");
    return 0;
}