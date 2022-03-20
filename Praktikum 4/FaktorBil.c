/*Nama file : FaktorBil*/
/*Pembuat   : 24060121110042-Naufal Arya Ramadhan*/
/*Deskripsi : Menghitung faktor dari suatu bilangan n*/
/*Tanggal   : Minggu, 20 Maret 2022*/

#include <stdio.h>

int main(){

    //Kamus
    int i,N;
    //Algoritma
    printf("Program Menghitung Faktorial Bilangan \n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);
    printf("Faktor dari bilangan %d\n", N);

    if (N < 0){
        printf("N harus bilangan integer positif");
    }
    else{
         for(i = 1;i <= N;i++){
            if(N%i == 0){
            printf(" %d", i);
            }
        }
    }
    return 0;
}
