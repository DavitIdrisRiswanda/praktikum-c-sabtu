#include <stdio.h>

int main() {
		// follow rafi yah
    // Saldo awal
    double saldo = 1000000.0;

    // Bunga per bulan (dalam desimal)
    double bunga = 0.02;

    // Jumlah bulan
    int jumlahBulan = 10;

    // Menggunakan loop for untuk menghitung jumlah uang setiap bulan
    int bulan;
    for ( bulan = 1; bulan <= jumlahBulan; ++bulan) {
        // Menghitung bunga bulan ini
        double bungaBulanIni = saldo * bunga;

        // Menambahkan bunga ke saldo
        saldo += bungaBulanIni;
    }

    // Menampilkan hasil
    printf("Jumlah uang setelah %d bulan: Rp. %.2f\n", jumlahBulan, saldo);

    return 0;
}


