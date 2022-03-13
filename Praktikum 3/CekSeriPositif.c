/*Nama file : CekSeriPositif*/
/*Pembuat   : 24060121110042-Naufal Arya Ramadhan*/
/*Deskripsi : Menampilkan di layar 3 buah tahanan yang dimasukkan dan menghasilkan total tahanan jika dirangkai seri*/
/*Tanggal   : Minggu, 13 Maret 2022*/

#include<stdio.h>

int main(){
    //kamus
    int a,b,c;
    //algoritma
    printf("Program menampilkan 3 buah tahanan di layar \n");
    printf("masukkan nilai a: ");
    scanf("%d",&a);
    printf("masukkan nilai b: ");
    scanf("%d",&b);
    printf("masukkan nilai c: ");
    scanf("%d",&c);

    if (a>0 & b>0 & c>0){
        printf("Seri Positif");
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;

}
