/*
Nama File           :   soal1(InsertionSort)
Deskripsi           :   Mengurutkan tabel (Descending) menggunakan algoritma Insertion sort
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   29 Mei 2024
Waktu Pembuatan     :   
*/

#include <stdio.h>

int main(){
    //Kamus Lokal
    int T[] = {7,1,9,5,3,9,6};
    int i,temp;
    int N = 7;
    //Algoritma
    printf("Initial T State = [%d", T[0]);
        for(int k=1;k<N;k++){
        printf(",%d", T[k]);
        }
        printf("]");
        printf("\n");
    for(int pass = 1 ; pass < N ; pass++){
        temp = T[pass];
        i = pass-1;
        while (temp>T[i] && i>0){
            T[i+1] = T[i];
            i = i-1;
        }
        if(temp>T[i]){
            T[i+1] = T[i];
            T[i] = temp;
        }
        else{
            T[i+1] = temp;
        }
    }
    printf("T After Insertion Sorting = [%d", T[0]);
    for(int k=1;k<N;k++){
        printf(",%d", T[k]);
    }
    printf("]");
    printf("\n");
    return 0;
}