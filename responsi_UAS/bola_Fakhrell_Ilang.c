#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    //Kamus Lokal
    int arryn[2];

    //Input
    //Input Besar dua array
    for (int i = 0; i < 2; i++){
        scanf("%d", &arryn[i]);
    }

    

    //Buat Array list dan Array di kotak
    int arrylst[arryn[0]];
    int arrybox[arryn[1]];

    //Input Array list
    for (int i = 0; i < arryn[0]; i++){
        scanf("%d", &arrylst[i]);
    }

    if(arryn[1]==0){
        for(int i = 0; i < arryn[0]; i++){
            printf("%d ", arrylst[i]);
        }
    }
    else{

        //Input Array box
        for (int i = 0; i < arryn[1]; i++){
            scanf("%d", &arrybox[i]);
        }
        
        //Algoritma
        //Jollyrogerguide
        //(https://odysee.com/@OtherChem
        //icalGuides:c
        //menghitung maks arraylst
        int max;
        max = arrylst[0];
        for (int i = 1; i < arryn[0]; i++){
            if (max < arrylst[i]){
                max = arrylst [i];
            }
        }

        //mencari frekuensi tiap bola
        int arryfrek[max];
        for (int i = 0; i < max; i++){
            arryfrek[i] = 0;
        }
        for (int i = 0; i < max; i++){
            for(int n = 0; n < arryn[0]; n++){
                if(arrylst[n] == i+1){
                    arryfrek[i] = arryfrek[i] + 1;
                }
            }
        }

        //cek
        for (int i = 0; i < max; i++){
            for (int k = 0; k < arryn[1]; k++){
                if (i+1 == arrybox[k]){
                    arrybox[k] = 0;
                    arryfrek[i] = arryfrek[i] - 1;
                }
            }
        }
        

        //cek panjang hasil
        int n = 0;
        for(int i = 0; i < max; i++){
            n = n + arryfrek[i];
        }

        //Buat hasil
        int arry[n];
        int j = 0;
        for (int i = 0; i < max; i++){
            if (arryfrek[i] != 0){
                while (arryfrek[i] > 0){
                    arry[j] = i+1;
                    j = j + 1;
                    arryfrek[i] = arryfrek[i] - 1;
                }   
            }
        }

        
        //Output
        for (int i = 0; i < n; i++){
            printf("%d ", arry[i]);
        }
    }
    


    return 0;
}