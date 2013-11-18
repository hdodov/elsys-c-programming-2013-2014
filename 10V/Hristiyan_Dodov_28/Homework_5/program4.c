#include <stdio.h>

int main (){

	int bnNumber = 2,
		bnAmount[bnNumber],
		bnUsed[bnNumber],
		bnValue[] = {1,2,5},
		sum, sumOrigin, i, i2;
		
	for (i=0; i<=bnNumber; i++) {
		scanf("%d", &bnAmount[i]);
	}
	scanf("%d", &sumOrigin);
	sum = sumOrigin;
	
	for (i=bnNumber; i>=0; i--) {
		if ((bnAmount[i]*bnValue[i])==sumOrigin){
			for (i2=0; i2<=bnNumber; i2++) {
				bnUsed[i2] = 0;
			}
			bnUsed[i] = bnAmount[i];
			sum = 0;
			break;
		}
		else if ((bnAmount[i]*bnValue[i])>sum){
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
