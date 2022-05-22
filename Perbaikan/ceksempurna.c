/*
Nama                : Naufal Arya Ramadhan
NIM                 : 24060121110042
Kelas               : B2
Nama file           : CekSempurna.c
Deskripsi           : Mengecek bilangan integer positif sembarang apakah sempurna atau tidak
*/

#include <stdio.h>

int main()
{
	//Kamus
	int i, j, k;

	//Algoritma
	printf("=========Cek Sempurna===============\n");
    printf("Masukkan nilai bilangan integer (i): ");
    scanf("%d", &i);

    if (i<=0)
	{
        printf("Bilangan harus positif");
    }
    else
	{
		j=0;
    	for(k=1;k<i;k++)
    	{
			if (i % k==0)
			{
			 j=j+k;
			}
    	}
		if (j==i)
		{
		 printf("%d Bilangan Sempurna", i);
		}
		else
	 	{
			printf("%d Bukan Bilangan Sempurna", i);
		}
	}
    return 0;
}
