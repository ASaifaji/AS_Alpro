/*
Nama File           :   
Deskripsi           :   
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   
Waktu Pembuatan     :   
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

//Kamus Global
int N, X;

int main(){
    //Kamus Lokal
    
    int n;

    //Algoritma
    //input
    printf("Insert array size : ");
    scanf("%d", &N);
    int T[N];
    printf("Masukkan bilangan yang akan dicari : ");
    scanf("%d", X);
    printf("Choose search algorithm\n");
    printf("1. Sequential Search Algorithm version 1\n)");
    printf("2. Sequential Search Algorithm Boolean\n");
    printf("3. Sequential Search Algorithm version 2\n");
    scanf("%d", n);
    switch (n){
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    
    default:
        printf("Number invalid");
        break;
    }
    return 0;
}

void inputManual(){
    for (int i = 0; i < N; i++){
        switch (i % 10){
        case 0:
            if (i=10){
                printf("Insert the %dth number", i+1);
            }
            else{
                printf("Insert the %dst number", i+1);
            }
            break;
        case 1:
            if (i=11){
                printf("Insert the %dth number", i+1);
            }
            else{
                printf("Insert the %dnd number", i+1);
            }
            break;
        case 2:
            if (i=12){
                printf("Insert the %dth number", i+1);
            }
            else{
                printf("Insert the %drd number", i+1);
            }
            break;

        default:
            printf("Insert the %dth number", i+1);
            break;
        }
        scanf("%d", &T[i]);
    }
}

void seqsearch1(int N, int T[], int X){
    int i = 1;
    while (i < N || T[i]!=X){
        i = i + 1;
    }
    if (T[i]=X){
        printf("Angka %d ada di index ke %d", X, i);
    }
    else{
        printf("Angka %d tidak ada didalam array");
    }
}