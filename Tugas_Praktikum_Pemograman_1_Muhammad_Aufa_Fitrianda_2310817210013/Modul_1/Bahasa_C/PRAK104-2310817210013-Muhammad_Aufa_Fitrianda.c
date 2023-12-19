#include <stdio.h>

int main () {
int a = 400000;
int b = 350000;
int potA = 13;
int potB = 21;
int rumusA = a*potA/100;
int rumusB = b*potB/100; 
int totalA = a - rumusA;
int totalB = b - rumusB;

printf("Harga sepatu A adalah %d\n",a);
printf("Harga sepatu B adalah %d\n",b);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi%d\n",totalA);
printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi%d\n",totalB);
return 0;
}