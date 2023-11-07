#include <stdio.h>
int main() {
int angka1, angka2;

printf("Masukan Dua Angka Anda\t: ");
scanf("\n%d %d",&angka1,&angka2);

if (angka1 > angka2) {
    printf("%d %d",angka2,angka1);
}
    else {
    printf("%d %d", angka1,angka2);}
}