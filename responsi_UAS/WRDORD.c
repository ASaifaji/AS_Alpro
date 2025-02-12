#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //Kamus lokal
    int n; /*Panjang tabel A*/
    //Input
    scanf("%d", &n);
    int A[n]; /*Tabel A*/
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    //Sort ascending
    for(int i = 1; i < n; i++){
        int temp = A[i];
        int j = i-1;
        while ((temp < A[j]) && (j>0)){
            A[j+1] = A[j];
            j = j - 1;
        }
        if(temp >= A[j]){
            A[j+1] = temp;
        }
        else{
            A[j+1] = A[j];
            A[j] = temp;
        }
    }

    //Split dua zig-zag
    int a = 0;
    int b = 0;
    int nb = n/2;
    int tempb[nb], tempa[n-nb];
    for(int i = 0; i < n; i++){
        if (i % 2 == 0){
            tempa[a] = A[i];
            a = a + 1;
        }
        else{
            tempb[b] = A[i];
            b = b + 1;
        }
    }

    //Descend sort untuk tempb
    for(int i = 1; i < nb; i++){
        int temp = tempb[i];
        int j = i - 1;
        while ((temp > tempb[j]) && (j>0)){
            tempb[j+1] = tempb[j];
            j = j - 1;
        }
        if(temp < tempb[j]){
            tempb[j+1] = temp;
        }
        else{
            tempb[j+1] = tempb[j];
            tempb[j] = temp;
        }
    }

    //Gabungkan lagi
    int c = 0;
    int d = 0;
    for(int i = 0; i < n; i++){
        if (i % 2 == 0){
            A[i] = tempa[c];
            c = c + 1;
        }
        else{
            A[i] = tempb[d];
            d = d + 1;
        }
    }

    //Output
    for (int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    return 0;
}