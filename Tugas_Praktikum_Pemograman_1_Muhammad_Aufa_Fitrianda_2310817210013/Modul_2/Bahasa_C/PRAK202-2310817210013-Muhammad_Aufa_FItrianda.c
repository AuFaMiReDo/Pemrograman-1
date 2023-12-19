#include <stdio.h>

void main() {
    float pertama,kedua;
    printf ("Masukan Nilai Pertama : ");
    scanf ("%f", &pertama);
    printf ("Masukan Nilai Kedua   : ");
    scanf ("%f", &kedua);
    float hasil = pertama + kedua;
    printf ("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"",pertama,kedua,hasil);

}