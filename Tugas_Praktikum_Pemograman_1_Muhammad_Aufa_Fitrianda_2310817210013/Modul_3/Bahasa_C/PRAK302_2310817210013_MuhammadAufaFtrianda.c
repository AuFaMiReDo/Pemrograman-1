#include <stdio.h>

int main() {
    int nilai;
    printf("Masukan Nilai Anda\t: ");
    scanf("%d",&nilai);

    if (nilai >= 80 && nilai <=100)
    {
        printf("Nilai Anda A");
    }
    else if (nilai >= 70 && nilai <= 79){
        printf("Nilai Anda B");
    }
    else if (nilai >= 60 && nilai <= 69){
        printf("Nilai Anda C");
    }
    else if (nilai >= 50 && nilai <= 59){
        printf("Nilai Anda D");
    }
    else {
        printf("Nilai Anda E");}
}