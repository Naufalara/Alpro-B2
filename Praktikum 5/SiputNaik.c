/*Nama file : SiputNaik.c*/
/*Pembuat   : 24060121110042-Naufal Arya Ramadhan*/
/*Deskripsi : Menghitung waktu kenaikan siput hingga tinggi n*/
/*Tanggal   : Minggu, 27 Maret 2022*/

int main(){

    //kamus
    double N;
    int hari;
    float t;

    //algoritma
    printf("Program menghitung waktu siput \n");
    printf("Masukan kedalaman lubang =  ");
    scanf("%lf", &N);

    if(N<=0){
        printf("Masukan tidak boleh kurang dari 0");
    }
    else if(N<=0.3){
            printf("siput akan tiba di atas lubang pada pagi hari sebelum malam");
        }

    else if(N>0.3){
        t=0;
        hari=0;
        for(t=0;t<N;t=t+0.3){
                if(t>=0.3){
                    t = t-0.1;
                    hari = hari +1;
                    printf(" %.2f\n",t);
                }
                else{
                    hari = hari +1;
                }
            }
        if(t=N){
            printf(" %.2f\n",t);
        }
        printf("maka siput memerlukan %d hari  untuk naik ",hari);
        }
    return 0;

}
