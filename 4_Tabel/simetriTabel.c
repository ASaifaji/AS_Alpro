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
    int n, m, p, q;
    bool a;
    a = true;
    //Algoritma
    //Input
    printf("Berapa bilangan panjang tabel 1? : ");
    scanf("%d", &n);
    int t[n];

    for(int i=0; i<n; i++){
        p = i + 1;
        printf("Masukkan bilangan ke-%d tabel 1 : ", p);
        scanf("%d", &t[i]);
    }
    
    //Input2
    printf("Berapa bilangan panjang tabel 2? : ");
    scanf("%d", &m);
    int u[m];

    for(int i=0; i<m; i++){
        q = i + 1;
        printf("Masukkan bilangan ke-%d tabel 2 : ", q);
        scanf("%d", &u[i]);
    }

    //cek
    if(n!=m){
        a = false;
    }
    else{
        for(int i=0; i<n; i++){
            if(t[i]!=u[i]){
                a = false;
            }
        }
    }

    //Output
    printf("\nTabel T1 berisi {%d", t[0]);
    for(int i=1; i<n; i++){
        printf(", %d", t[i]);
    }
    printf("} Ukurannya %d", m);
    printf("\nTabel T2 berisi {%d", u[0]);
    for(int i=1; i<m; i++){
        printf(", %d", u[i]);
    }
    printf("} Ukurannya %d", m);
    if(a==false){
        printf("\nMaka T1 dan T2 tidak simetris");
    }
    else{
        printf("\nMaka T1 dan T2 simetris");
    }

    return 0;
}