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
	
	// Menghitung luas segitiga
	luas = 0.5 * alas * tinggi;
	
	// Menghitung sisi miring (hipotenusa)
	float sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	 
	// Menghitung keliling segitiga
	keliling = alas + tinggi + sisi_miring;
	
	// Menampilkan hasil
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("Keliling segitiga: %.2f cm\n", keliling);
	
	return 0;
}
