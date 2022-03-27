/*Nama file : CekSempurna.c*/
/*Pembuat   : 24060121110042-Naufal Arya Ramadhan*/
/*Deskripsi : Mengecek dan menampilkan sebuah bilangan integer sembarang yang dimasukkan di layar termasuk bilangan sempurna atau bukan*/
/*Tanggal   : Minggu, 27 Maret 2022*/

int main(){
    //kamus
    int n,i,j;
    //Algoritma
    printf("Program untuk mengecek bilangan sempurna \n");
    printf("Masukkan angka : ");
    scanf("%d",&n);
    if (n<=0){
        printf("n harus bilangan positif");
    }
    else{
        for(i==1;i<n;i++){
        if(n%i==0){
            j=j+i;
            if(j==n){
                printf("Bilangan Sempurna");
            }
            else{
                printf("Bukan Bilangan Sempurna");
            }
            }
        }
    }
    return 0;
}

//input (N)
//	if (N<=0) then
//		output (‘N harus positif’)
//else
//		i traversal [1..N-1]
//			if (N mod i=0) then
//				j 🡨 j+i
//					if (j=N) then {cek sempurna}
//					  output (‘Bilangan Sempurna’)
//					else
//					  output (‘Bukan Bilangan Sempurna’)
