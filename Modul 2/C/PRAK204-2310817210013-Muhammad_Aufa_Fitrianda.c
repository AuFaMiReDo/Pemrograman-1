#include <stdio.h>
#include <math.h>
#define pi 3.142857

void main(){
    double jari2, tinggi;
    scanf("%lf %lf", &jari2, &tinggi); 
    double volume = pi * pow(jari2, 2) * tinggi;
    double luas = 2 * pi * jari2 * (jari2 + tinggi);
    double keliling = 2 * pi * jari2; 

    printf ("\nVolume = %.2lf\n", volume);
    printf ("Luas = %.2lf\n", luas);
    printf ("Keliling = %.2lf\n", keliling); 
}