#include <stdio.h>

void main() {
    char nama[50], nim[50], kelasParalel[50], tempatTanggalLahir[50], alamat[50], hobby[50], noHp[50];

printf ("Nama \t\t\t : ");
fgets (&nama, sizeof(nama),stdin);

printf ("NIM \t\t\t : ");
fgets (&nim, sizeof(nim),stdin);

printf ("Kelas Paralel \t\t : ");
fgets (&kelasParalel, sizeof(kelasParalel), stdin);

printf ("Tempat/Tanggal Lahir \t : ");
fgets (&tempatTanggalLahir, sizeof(tempatTanggalLahir), stdin);

printf ("Alamat \t\t\t : ");
fgets (&alamat, sizeof(alamat), stdin);

printf ("hobby \t\t\t : ");
fgets (&hobby, sizeof(hobby), stdin);

printf ("No.Hp \t\t\t : ");
fgets (&noHp, sizeof(noHp), stdin);
 
printf("\nNama \t\t\t : %s",nama);
printf("NIM \t\t\t : %s",nim);
printf("Kelas Paralel \t\t : %s",kelasParalel);
printf("Tempat/Tanggal Lahir\t : %s",tempatTanggalLahir);
printf("Alamat \t\t\t : %s",alamat); 
printf("Hobby  \t\t\t : %s", hobby);
printf("No.HP \t\t\t : %s", noHp);
}