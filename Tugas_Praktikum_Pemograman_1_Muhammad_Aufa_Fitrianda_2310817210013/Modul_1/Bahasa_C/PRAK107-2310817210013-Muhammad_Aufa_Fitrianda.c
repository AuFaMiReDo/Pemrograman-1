#include <stdio.h>

int main() {
int sisi1 = 4;
int sisi2 = 5;
int sisi3 = 7;
int kelilingSegitiga = sisi1 + sisi2 + sisi3;
int pemasanganPagar = 85000;
int total = kelilingSegitiga*pemasanganPagar;
printf("Diketahui : ");
printf("Panjang sisi segitiga berturut-turut adalah %d,%d,dan %d\n",sisi1,sisi2,sisi3);
printf("Harga tanah Per Meter adalah %d\n",pemasanganPagar);
printf("Jawaban :\n");
printf("Biaya yang diperlukan Pak Dengklek adalah %d\n",total);
return 0;
}