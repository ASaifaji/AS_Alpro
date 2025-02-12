#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        matriks1223();
        break;
    case 2:
        matriks1449();
        break;
    case 3:
        matriks1224();
        break;
    case 4:
        
        break;
    
    default:
        break;
    }
}

void matriks1223(){
    for(int i = 1; i <= 2; i++){
        for(int j = 0 + i; j <= i+1; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

void matriks1449(){
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <=2; j++){
            if(i==2 && j==2){
                printf("%d",(j*j*i*i-7) );
            }
            else{
                printf("%d", (j*j*i*i));
            }
        }
        printf("\n");
    }
}

void matriks1224(){
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <=2; j++){
            printf("%d", (j*i));
        }
        printf("\n");
    }
}