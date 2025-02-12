#include<stdio.h>

int main(){
    int n, i, j;
    i = 0;
    j = 0;
    scanf("%d",&n);
    int matriks[n][n];
    for(int i=0;i<n;i++){
        scanf("%d",matriks[i][j]);
    }
    for(j=0;j<n;j++){
        scanf("%d");
    }
    return 0;
}