#include <stdio.h>

int main () {

	int digit[10],
		a, i;
	long num;
		
	for (i=0; i<=10; i++) {
		digit[i] = 0;
	}
		
	scanf("%ld", &num);
	
	while (num>0) {
		a = num % 10;
		digit[a] = digit[a] + 1;
		num = num / 10;
	}
	
	for (i=0; i<=9; i++) {
		if (digit[i]>1) {
			printf("%d : %d\n", i, digit[i]);}
	}
	
	return 0;
	
}
