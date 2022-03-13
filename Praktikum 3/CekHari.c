/*Nama file : CekHari*/
/*Pembuat   : 24060121110042-Naufal Arya Ramadhan*/
/*Deskripsi : Menuliskan nama hari berdasarkan input angka m yang dimasukkan*/
/*Tanggal   : Senin, 7 Maret 2022*/

#include<stdio.h>

int main(){
    //kamus
    int a;
    //algoritma
    printf("Program menuliskan nama hari \n")
    printf("Masukkan nomor hari : ");
    scanf("%d", &a);
    switch(a){
case 1 :
    printf("senin");
    break;
case 2 :
    printf("selasa");
    break;
case 3:
    printf("Rabu");
    break;
case 4:
    printf("Kamis");
    break;
case 5:
    printf("Jumat");
    break;
case 6:
    printf("Sabtu");
    break;
case 7:
    printf("Minggu");
    break;
default :
    printf("Masukan nomor hari tidak tepat");
    break;
    }
    return 0;
}


