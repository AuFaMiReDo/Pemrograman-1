#include <stdio.h>

void main() {
    int n, kelipatan;
    int total = 0;

    printf("Masukan Nilai N Dan Kelipatan Anda\t: ");
    scanf("%d %d", &n, &kelipatan);

    for (int i = 1; i <= n; i++) {

        int baris = 0;

        for (int j = i; j > 0; j--) {

            baris += j * kelipatan;
            if (j == i) {
                printf("(%d * %d)", j, kelipatan);
            } 
            else {
                printf(" + (%d * %d)", j, kelipatan);
            }
            
        }

        printf(" = %d\n", baris);
        total += baris;
    }

    printf("%d\n", total);
}