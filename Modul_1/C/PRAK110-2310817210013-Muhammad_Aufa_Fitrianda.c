#include <stdio.h>
#include <math.h>s
int main(){
int alas = 5;
int tinggi = 12;
int sisiMiring = (alas*alas)+(tinggi*tinggi);
int hasilSisiMiring = sqrt(sisiMiring);
int kelilingSegitiga = alas+tinggi+hasilSisiMiring;
int luasSegitiga = alas*tinggi/2;
printf("Diketahui :\n");
printf("Alas = %d cm\n",alas);
printf("Tinggi = %d cm\n\n", tinggi);
printf("Jawab :\n");
printf("Sisi A = %d cm\nSisi B = %d cm\nSisi C = %d cm\n",alas, hasilSisiMiring, tinggi);
printf("keliling = %d cm\n",kelilingSegitiga);
printf("luas = %d cm",luasSegitiga);
}