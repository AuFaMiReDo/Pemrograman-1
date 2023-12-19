#include <stdio.h>

int main() {
    int kelipatan;
    char simbol;
    
    printf("Masukkan Bilangan kelipatan Anda\t: ");
    scanf("%d", &kelipatan);
    
    printf("Masukkan Simbol Anda\t\t\t: ");
    scanf(" %c", &simbol);

    for (int i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}
