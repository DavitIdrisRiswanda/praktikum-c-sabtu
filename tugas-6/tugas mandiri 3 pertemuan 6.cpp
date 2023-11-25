#include <stdio.h>

int main() {
    // Mencetak deret angka 1 hingga 1024 dengan kelipatan 2
    int i, value = 1;

    for (i = 0; i <= 10; ++i) {
        printf("%d ", value);
        value *= 2;
    }

    printf("\n"); // Menambahkan baris baru setelah mencetak deret angka

    return 0;
}
