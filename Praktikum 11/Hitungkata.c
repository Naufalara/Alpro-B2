/*Nama File 	: HitungKata.c*/
/*Deskripsi 	: Menghitung dan menampilkan jumlah kata pada pita karakter*/
/*Pembuat   	: Naufal Arya Ramadhan - 24060121110042*/
/*Tgl Pembuatan	: Minggu, 15 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main() {
    /*Kamus*/
    char Char1, Char2;
    int hitung;

    /*Algoritma*/
    printf("==Hitung Kata==\n");
    hitung = 1;

    START();
    while (!EOP()) {
        Char1 = CC;
        Char2 = ' ';

        if (Char1 == Char2) {
            hitung += 1;
        }
        ADV();
    }

    printf("Jumlah kata = %d", hitung);
    getch();
    return 0;
}
