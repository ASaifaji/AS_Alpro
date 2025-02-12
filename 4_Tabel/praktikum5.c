#include<stdio.h>
#include<stdbool.h>

//Function
int JumlahFaktorF(int N){
    int sum = 0;

    for(int i=1; i<=N; i++){
        if(N%i==0){
            sum++;
        }
    }
    
    return sum;
}

//Procedure
void jumlahFaktorP(int N){
    int sum = 0;
    for (int i=1; i<=N; i++){
        if (N%i==0){
            sum++;
        }
    }
    printf("%d", sum);
}