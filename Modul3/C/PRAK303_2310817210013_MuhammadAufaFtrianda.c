#include <stdio.h>

int main(){

    int angka; 

    printf("Masukan Angka Anda\t: ");
    scanf("%d",&angka);

    if (angka > 0)
    {
        printf ("Positif");
    }
    else if ( angka < 0)
    {
        printf ("Negatif");
    }
    else{
        printf ("Nol");  
    }
return 0;
} 