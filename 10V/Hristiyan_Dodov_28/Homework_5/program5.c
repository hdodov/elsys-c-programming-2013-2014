#include <stdio.h>

long fact(int);

int main() {
	
	int n = -1,
		i;
	double sum = 0.00;
	
	while (n<0 || n>20) {
		scanf("%d", &n);
	}
	
	for (i=1; i<=n; i++) {
		sum = sum + (1.00 / fact(i));
	}
	
	printf("%f", sum);

	return 0;

}

long fact(int a) {
	long value = 1;
	int b;
	
	for (b=a; b>0; b--) {
		value = value * b;
	}
	
	return value;
	
}	
