#include <stdio.h>

void main(){
    int angka1, angka2;
    
    printf("Masukan Dua Angka Anda\t: ");
    scanf("%d %d",&angka1, &angka2);

    if (angka1 > angka2) {

        for (int i = angka1, j = angka2; i > angka2; i--,j++) {
            printf("%d %d - ",i, j);
        }
    } 

    else {
        
        for (int i = angka1, j = angka2; i < angka2; i++, j--) {
            printf("%d %d - ",i, j);
        }
    }

    printf("%d %d",angka2, angka1);
}








