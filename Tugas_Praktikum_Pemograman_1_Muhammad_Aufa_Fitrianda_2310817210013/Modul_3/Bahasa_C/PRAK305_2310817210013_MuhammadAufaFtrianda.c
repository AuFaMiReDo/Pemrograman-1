#include <stdio.h>

int main() {
    int total_detik, jam, menit, detik;
 
    printf("Masukkan jumlah detik: ");
    scanf("%d", &total_detik);

    jam = total_detik / 3600;
    total_detik %= 3600;
    menit = total_detik / 60;
    detik = total_detik % 60;

    if (jam >= 24) {
        int hari = jam / 24;
        jam %= 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}