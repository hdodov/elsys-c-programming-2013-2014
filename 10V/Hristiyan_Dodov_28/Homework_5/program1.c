#include <stdio.h>
#include <string.h>

int main () {

	char deck[25], c;
	char letters[] = {'T', 'J', 'Q', 'K', 'A'};
	int  values[] =  {58 , 59 , 60 , 61 , 62};
	int i, i2, checker, card1, card2;
	
	scanf("%s", deck);
	
	while (1) {
		checker=0;
		for (i=0; i<(strlen(deck) - 1); i++){
			card1=deck[i];
			card2=deck[i+1];
			for (i2=0; i2<=5; i2++){
				if(deck[i]==letters[i2]){
					card1=values[i2];}
				if (deck[i+1]==letters[i2]){
					card2=values[i2];}
			}
			if (card1>card2){
				c = deck[i];
				deck[i] = deck[i+1];
				deck[i+1] = c;
				checker=1;}
		}		
		if (checker==0) {
			break;}	
	}	
	printf("%s", deck);
	return 0;
}
