#include <stdio.h>

int main() {
    int pilihan;
    float nilaiPertama, nilaiKedua;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Aufa Fitrianda\n");
            break; // Keluar dari program jika pilihan adalah 5 (Exit)
        }

        if (pilihan < 1 || pilihan > 4) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        printf("Masukkan nilai pertama: ");
        scanf("%f", &nilaiPertama);
        printf("Masukkan nilai kedua: ");
        scanf("%f", &nilaiKedua);

        switch (pilihan) {
            case 1:
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, nilaiPertama + nilaiKedua);
                break;
            case 2:
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, nilaiPertama - nilaiKedua);
                break;
            case 3:
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, nilaiPertama * nilaiKedua);
                break;
            case 4:
                if (nilaiKedua != 0) {
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, nilaiPertama / nilaiKedua);
                } else {
                    printf("Pembagian oleh nol tidak diizinkan.\n");
                }
                break;
        }
    }

    return 0;
}
