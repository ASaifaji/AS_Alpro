#include <stdio.h>

int main(){
    //Kamus Lokal
    int TABNILAI [100];
    int tempval = 0;
    int tempfreq = 0;
    int tempi;
    int freqA = 0;
    int freqB = 0;
    int freqC = 0;
    int freqD = 0;
    int freqE = 0;
    
    //Algoritma
    
    //Mencari rata-rata
    //Menghitung keseluruhan value nilai
    for(int i = 0; i < 100; i++){
        tempi = i + 1;
        tempval = tempval + (tempi * TABNILAI[i]);
    }
    //Menghitung Keseluruhan Frequency nilai
    for(int i = 0; i < 100; i++){
        tempfreq = tempfreq + TABNILAI[i];
    }
    //Menghitung nilai rata-rata
    float flttempval = tempval;
    float flttempfreq = tempfreq;
    float mean = flttempval / flttempfreq;

    //Mengkonversi ke skala A-E
    //Hitung frekuensi E
    for(int i = 0; i < 39; i++){
        freqE = freqE + TABNILAI[i];
    }
    //Hitung frekuensi D
    for(int i = 39; i < 54; i++){
        freqD = freqD + TABNILAI[i];
    }
    //Hitung frekuensi C
    for(int i = 54; i < 69; i++){
        freqC = freqC + TABNILAI[i];
    }
    //Hitung frekuensi B
    for(int i = 69; i < 79; i++){
        freqB = freqB + TABNILAI[i];
    }
    //Hitung frekuensi A
    for(int i = 79; i < 100; i++){
        freqA = freqA + TABNILAI[i];
    }
    //Masukkan ke tabel baru
    int TABNILAIHURUF[] = {freqE, freqD, freqC, freqB, freqA};

    return 0;
}