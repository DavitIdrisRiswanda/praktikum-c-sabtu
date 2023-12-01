#include <stdio.h>

int main() {
	int nilai[10];
	int jumlah_lulus = 0;
	
	printf("Masukan 10 nilai mahasiswa (angka):\n");
	
	for(int i = 0; i < 10; i++) {
		scanf("%d", &nilai[1]);
		if(nilai[i] >= 60) {
			jumlah_lulus++;
		}
	}
	
	printf("\nDaftar nilai mahasiswa yang lulus:\n");
	for(int i = 0; i < 10; i++) {
		if(nilai[i] >= 60) {
			printf("%d. %d\n", i+i, nilai[i]);
		}
	}
	
	printf("\nJumlah mahasiswa yang lulus: %d.\n", jumlah_lulus);
	return 0;
}
