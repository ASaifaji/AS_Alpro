/*
Nama File           :   frekNilTabel
Deskripsi           :   Mencari angka dengan kemunculan lebih dari satu kali
Pembuat             :   Abyasa Saifaji (24060123130099)
Tanggal Pembuatan   :   21 Maret 2024
Waktu Pembuatan     :   
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus
    int n, p;
    bool a = true;
    //Algoritma
    //Input
    printf("Berapa bilangan panjang tabel? ");
    scanf("%d", &n);
    int t[n];
    int u[n];

    for(int i=0; i<n; i++){
        p = i + 1;
        printf("Masukkan bilangan ke-%d : ", p);
        scanf("%d", &t[i]);
    }
    
    //find

    p = 0; /*Inisialisasi untuk input ke tabel hasil u[]*/

    /*for pertama untuk angka tabel*/
    for(int i=0; i<n; i++){

        /*for kedua untuk angka tabel yang akan dibandingkan dengan angka tabel sebelumnya*/
        for(int j=i+1; j<n; j++){
            
            
            if (t[i]==t[j]){

                /*for ketiga untuk mengecek t[i] di tabel hasil agar tidak dimasukan kedua kali*/
                for(int k=0; k<n; k++){
                    
                    if (t[i]==u[k]){
                        a = false;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                
                //input jika benar tidak ada t[i] dalam tabel u[]
                if(a == true){
                    u[p]=t[i];
                    p++;
                }
                else{
                    continue;
                }

            }
            else{
                continue;
            }

        }

    }

    //output
    printf("{%d",u[0]);
    for(int i=1; i<p; i++){
        printf(", %d",u[i]);
    }
    printf("}");
    
    return 0;
}