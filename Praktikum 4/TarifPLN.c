/*Nama file : TarifPLN*/
/*Pembuat   : 24060121110042-Naufal Arya Ramadhan*/
/*Deskripsi : Menghitung tarif PLN berdasarkan golongan g dan pemakaian daya listrik l*/
/*Tanggal   : Minggu, 20 Maret 2022*/
/*
int main(){
    //kamus
    int g,i,ta;
    //algoritma
    printf("Program menghitung tarif PLN \n");
    printf("Pilih golongan (1/2) : ");
    scanf("%d",&g);
    printf("Masukkan pemakaiaan daya listrik(dalam kWH) : ");
    scanf("%d",&i);

    if (i<100){
        ta = g*1000*100;
    }
    else if (i>=1000){
        ta = (g*i*1000)*1.1;
    }
    else{
        ta = g*i*1000;
    }
    printf("---------Hasil---------\n");
    printf("Golongan = %d\n",g);
    printf("Pemakaian = %d\n",i);
    printf("Tarif = %d",ta);
    return 0;
}
*/
