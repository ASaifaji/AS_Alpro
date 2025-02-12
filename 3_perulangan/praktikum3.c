#include <stdio.h>

int main(){
    int i, j, n, x, k;
    n = 50;
    k = n;
    x=0;
    while(x==0){

        for(i=1 ; i<n ; i++){
        
            for(j=1 ; j<=i ; j++){
                printf("-");
            }
            printf("********");
            for(k = n-1 ; k>=0 ; k = k-1){
                printf("-");
            }
            printf("\n");
        }

        for (i = n; i > 0 ; i = i - 1){
            for (j = i - 1 ; j >= 0 ; j = j - 1){
                printf("-");
            }
            printf("********");
            printf("\n");
        }
    }
    
    return 0;
}