#include <stdio.h>

int main () {

	char *numbers[8];
		numbers[0] = "edno";
		numbers[1] = "dve";
		numbers[2] = "tri";
		numbers[3] = "chetiri";
		numbers[4] = "pet";
		numbers[5] = "shest";
		numbers[6] = "sedem";
		numbers[7] = "osem";
		numbers[8] = "devet";
	int n = -1;
	
	while (n<=0 || n>99) {
		scanf("%d", &n);
	}
	
	if (n<10) {
		printf("%s", numbers[n-1]);
	}
	
	else if (n==10) {
		printf("deset");
		
	}
	
	else if ((n>10) && (n<20)){
		if (n==11) {
			printf("edinadeset");
		}
		else if (n==12) {
			printf("dvanadeset");
		}
		else {
			printf("%snadeset", numbers[(n % 10)-1]);
		}
	}
	
	else if ((n / 10)>0) {
		if ((n>=20) && (n<30)) {
			printf("dvasdeset");
		} 
		else {
			printf("%sdeset", numbers[(n / 10)-1]);
		}
		if ((n % 10)!=0) {
			 printf(" i %s", numbers[(n % 10)-1]);
		}
	}

	return 0;
	
}
