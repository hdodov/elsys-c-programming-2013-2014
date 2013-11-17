#include <stdio.h>

int main (){

	int bnNumber = 2,
		bnAmount[bnNumber],
		bnUsed[bnNumber],
		bnValue[] = {1,2,5},
		sum, i;
		
	for (i=0; i<=bnNumber; i++) {
		scanf("%d", &bnAmount[i]);
	}
	scanf("%d", &sum);
	
	for (i=bnNumber; i>=0; i--) {
		if ((bnAmount[i]*bnValue[i])>sum){
			bnUsed[i] = sum / bnValue[i];
			sum = sum % bnValue[i];		
		}
		else {
			bnUsed[i] = bnAmount[i];
			sum = sum - (bnAmount[i]*bnValue[i]);
		}
	}
	
	if (sum==0){
		printf("Yes: ");
		for (i=0; i<=bnNumber; i++) {
			printf("%d", bnUsed[i]);
			if (i!=bnNumber) {
				printf(", ");}
		}
	}
	else {
		printf("No");
	}
	
	return 0;

}
