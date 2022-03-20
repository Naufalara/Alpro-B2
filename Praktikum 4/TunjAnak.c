/*Nama file : TunjAnak*/
/*Pembuat   : 24060121110042-Naufal Arya Ramadhan*/
/*Deskripsi : Menghitung tunjangan berdasarkan gaji pokok g dan jumlah anak a*/
/*Tanggal   : Minggu, 20 Maret 2022*/

int main(){
    //kamus
    int g,a,t;
    //algoritma
    printf("Program menghitung tunjangan \n");
    printf("masukkan gaji pokok karyawan : ");
    scanf("%d",&g);
    printf("masukkan jumlah anak karyawan : ");
    scanf("%d",&a);

    if (a<=3 & a>=0){
        t = a*(0.1*g);
    }
    else{
        t = 3*(0.1*g);
    }
    printf("----------Hasil-----------\n");
    printf("Jumlah anak = %d \n",a);
    printf("Gaji pokok = Rp.%d \n",g);
    printf("Tunjangan anak = Rp.%d ",t);
    return 0;
}

