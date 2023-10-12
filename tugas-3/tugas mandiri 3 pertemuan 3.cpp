#include <stdio.h>
#include <math.h>

int main()
{
	// Deklarasi variabel
	float alas, tinggi, luas, keliling;
	
	// Meminta input panjang alas dari pengguna
	printf("masukan panjang alas segitiga (cm): ");
	scanf("%f", &alas);
	
	// Meminta input panjang alas dari pengguna
	printf("masukan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	// Menghitung sisi miring (hipotenusa)
	float sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	
	// Menampilkan hasil
	printf("sisi miring  segitiga adalah %.2f cm\n", sisi_miring);
	
	return 0;
}
