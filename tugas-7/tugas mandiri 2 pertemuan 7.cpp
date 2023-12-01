#include <stdio.h>

int main() {
	int A[11];
	int count = 0;
	int input;
	
	printf("Masukan 11 bilangan genap:\n");
	
	while (count < 11) {
		scanf("%d", &input);
		if (input %2 == 0){
			A[count] = input;
			count++;
		}
	}
	
	printf("Data dalam array A adalah:\n");
	
	for (int i = 0; i< 11; i++) {
		if (i % 3 == 0 && i == 0) {
			printf("\n");
		}
		printf("%d ", A[i]);
	}
	
	printf("\n");
	
	return 0;
}
