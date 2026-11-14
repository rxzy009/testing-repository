#include <stdio.h>

int main() {
    int awal, akhir, pilihan;

    // Input data dari pengguna
    printf("Program Deret Bilangan\n");
    printf("Ketik Bilangan awal : ");
    scanf("%d", &awal);
    printf("Ketik Bilangan akhir : ");
    scanf("%d", &akhir);
    printf("Pilihan (1=ganjil, 2=genap) : ");
    scanf("%d", &pilihan);

    // Memulai iterasi dari satu angka setelah bilangan awal
    int i = awal + 1;

    printf("Deret while : ");
    while (i < akhir) {
        if (pilihan == 1 && i % 2 != 0) {
            // Menampilkan bilangan ganjil
            printf("%d ", i);
        } else if (pilihan == 2 && i % 2 == 0) {
            // Menampilkan bilangan genap
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}
