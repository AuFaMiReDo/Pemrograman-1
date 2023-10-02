#include <stdio.h>

int main () {
float jarakLingkaran = 14.0;
int putaran = 5;
float  kelilingTaman = jarakLingkaran / putaran;
float phi = 3.14;
float jarijari = kelilingTaman / (2*phi);
printf("Diketahui :\n");
printf("Pak Dengklek mengelilingi taman = %d putaran\n",putaran);
printf("Jarak tempuh Pak Dengklek = %.0fkm\n",jarakLingkaran);
printf("\n Jawaban :\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2fkm",jarijari);

}