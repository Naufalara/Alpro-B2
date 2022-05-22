/*
Nama                : Naufal Arya Ramadhan
NIM                 : 24060121110042
Kelas               : B2
Nama file           : JumDeret41.c
Deskripsi           : Menampilkan deret bilangan berdasarkan input bilangan integer sembarang N dengan pola 1,3,6,10,15,21, ..., 1/2n(n+1) dan menjumlahkannya
*/

#include <stdio.h>
#include <math.h>

int main()
{
	//Kamus
	int N,i,db,Sn;

	//Algoritma
   printf("Masukkan nilai bilangan integer (N): ");
    scanf("%d", &N);
    if (N<=0){
        printf("Tidak ada Deret Bilangan, sehingga Sn=0");
    }
    else
	{
		printf("Deret yang tebentuk dari bilangan tersebut : ");
		for(i=1;i<=N;i++)
		{
			db=0.5*i*(i+1);
			printf("%d, ", db);
		}
		Sn=0;
		printf("\nSn = ");
		for(i=1;i<=N;i++)
		{
			db=0.5*i*(i+1);
			Sn=Sn+db;
			printf("%d+", db);
		}
	printf("\nJumlah deret bilangannya adalah (Sn) = %d ", Sn);
   	}
    return 0;
}

