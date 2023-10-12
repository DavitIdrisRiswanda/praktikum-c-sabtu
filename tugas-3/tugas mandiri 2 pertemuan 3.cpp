#include <stdio.h>

int main ()
{
	//Deklarasi variabel
	float celcius, fahrenheit, reamur;
	
	// Meminta input suhu dalam celcius dari pengguna 
	printf("Masukan suhu dalam celcius: ");
	scanf("%f", &celcius);
	
	//menghitung suhu dalam Fahrenheit
	fahrenheit = (celcius * 9/5) + 32;
	
	//Menghitung suhu dalam Reamur
	reamur = celcius * 4/5;
	
	//Menampilkan hasil 
	printf("%.2f derajat celcius sma dengan %.2f derajat fahrenheit\n", celcius, fahrenheit);
	printf("%.2f derajat celcius sma dengan %.2f derajat reamur\n", celcius, reamur);
	
	return 0;
}
