/*
Nama File           :   jumFrekNilTabel
Deskripsi           :   Menjumlah semua angka yang muncul lebih dari satu kali
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   21 Maret 2024
Waktu Pembuatan     :   
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus
    int m, n, s;
    //Algoritma

    //Input
    printf("Masukkan besar baris matriks (Maks 3): ");
    scanf("%d", &m);
    printf("Masukkan besar kolom matriks (Maks 3): ");
    scanf("%d", &n);
    int mat[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Masukkan a%d%d dimana a bilangan dalam matriks : ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    //Output
    //Baris
    switch (m){
    case 1:
        //Baris 1
        s = mat[0][0];
        printf("Baris 1 -> %d ", mat[0][0]);
        for(int i=1; i<n; i++){
            s = s + mat[0][i];
            printf("+ %d ", mat[0][i]);
        }
        printf(" = %d", s);

        break;

    case 2:

        //Baris 1
        s = mat[0][0];
        printf("\nBaris 1 -> %d ", mat[0][0]);
        for(int i=1; i<n; i++){
            s = s + mat[0][i];
            printf("+ %d ", mat[0][i]);
        }
        printf(" = %d", s);

        //Baris 2
        s = mat[1][0];
        printf("\nBaris 2 -> %d ", mat[1][0]);
        for(int i=1; i<n; i++){
            s = s + mat[1][i];
            printf("+ %d ", mat[1][i]);
        }
        printf(" = %d", s);

        break;
    
    default:

        //Baris 1
        s = mat[0][0];
        printf("\nBaris 1 -> %d ", mat[0][0]);
        for(int i=1; i<n; i++){
            s = s + mat[0][i];
            printf("+ %d ", mat[0][i]);
        }
        printf(" = %d", s);

        //Baris 2
        s = mat[1][0];
        printf("\nBaris 2 -> %d ", mat[1][0]);
        for(int i=1; i<n; i++){
            s = s + mat[1][i];
            printf("+ %d ", mat[1][i]);
        }
        printf(" = %d", s);

        //Baris 3
        s = mat[2][0];
        printf("\nBaris 3 -> %d ", mat[2][0]);
        for(int i=1; i<n; i++){
            s = s + mat[2][i];
            printf("+ %d ", mat[2][i]);
        }
        printf(" = %d", s);

        break;
    }
    
    //Kolom
    switch (m){
    case 1:
        //Kolom 1
        s = mat[0][0];
        printf("\nKolom 1 -> %d ", mat[0][0]);
        for(int i=1; i<m; i++){
            s = s + mat[i][0];
            printf("+ %d ", mat[i][0]);
        }
        printf(" = %d", s);

    case 2:

        //Kolom 1
        s = mat[0][0];
        printf("\nKolom 1 -> %d ", mat[0][0]);
        for(int i=1; i<m; i++){
            s = s + mat[i][0];
            printf("+ %d ", mat[i][0]);
        }
        printf(" = %d", s);

        //Kolom 2
        s = mat[0][1];
        printf("\nKolom 2 -> %d ", mat[0][1]);
        for(int i=1; i<m; i++){
            s = s + mat[i][1];
            printf("+ %d ", mat[i][1]);
        }
        printf(" = %d", s);

        break;
    
    default:

        //Kolom 1
        s = mat[0][0];
        printf("\nKolom 1 -> %d ", mat[0][0]);
        for(int i=1; i<m; i++){
            s = s + mat[i][0];
            printf("+ %d ", mat[i][0]);
        }
        printf(" = %d", s);

        //Kolom 2
        s = mat[0][1];
        printf("\nKolom 2 -> %d ", mat[0][1]);
        for(int i=1; i<m; i++){
            s = s + mat[i][1];
            printf("+ %d ", mat[i][1]);
        }
        printf(" = %d", s);

        //Kolom 3
        s = mat[0][2];
        printf("\nKolom 3 -> %d ", mat[0][2]);
        for(int i=1; i<m; i++){
            s = s + mat[i][2];
            printf("+ %d ", mat[i][2]);
        }
        printf(" = %d", s);

        break;
    }
    
    return 0;
}