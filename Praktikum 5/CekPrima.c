/*Nama file : CekPrima.c*/
/*Pembuat   : 24060121110042-Naufal Arya Ramadhan*/
/*Deskripsi : Mengecek apakah sebuah bilangan merupakan bilangan prima*/
/*Tanggal   : Minggu, 27 Maret 2022*/

int main(){
    //kamus
    int n,i;
    //Algoritma
    printf("Program untuk mengecek bilangan prima \n");
    printf("Masukkan angka : ");
    scanf("%d",&n);
    if (n<=0){
        printf("N harus bilangan positif");
    }
    else{
        if (((n==5)||(n==7))||((n%2 != 0) & (n % 3!= 0)& (n % 5 != 0)&( n % 7 != 0))){
            printf("Merupakan bilangan prima");
        }
        else{
            printf("Bukan bilangan prima");
        }
    }
    return 0;
}
