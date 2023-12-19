#include <stdio.h>

void main() {
    int angka;

    printf("Masukkan Angka Anda \t: ");
    scanf("%d", &angka);

    for( int ganjil = 1 ; ganjil <= angka ; ganjil++) {
        
        if( ganjil % 2 != 0) {
            printf("%d ", ganjil);
        }

    }    

    printf("\n");

    for (int genap = angka ; genap >= 1 ; genap--) {

         if (genap % 2 == 0) {
            printf("%d ", genap);
        }
        
    }
}