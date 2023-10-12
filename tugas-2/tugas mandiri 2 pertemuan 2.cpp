#include <stdio.h>

int main()
{
	float diameter, jari, volume;
	
	diameter = 15.00;
	
	jari = diameter / 2.0;
	
	volume = (4.0 / 3.0) * 3.14 * (jari,3);
	
	printf( "diameter : % 2f\n", diameter );
	printf( " jari jari : %2f \n", jari);
	printf( "volume bola : %2f\n", volume);
	
	return 0; 
}
