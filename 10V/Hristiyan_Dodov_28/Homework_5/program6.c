#include <stdio.h>

int main () {

	int matrix[4][4],
		x, y, c;
	
	for (x=0; x<=3; x++) {
		for (y=0; y<=3; y++) {
			scanf("%d", &(matrix[x][y]));
		}
	}
	
	for (x=0; x<=3; x++) {
		for (y=0; y<=3; y++) {
			if (y>x) {
				c = matrix[x][y];
				matrix[x][y] = matrix[y][x];
				matrix[y][x] = c;
			}
		}
	}
	
	for (x=0; x<=3; x++) {
		for (y=0; y<=3; y++) {
			printf("%d ", matrix[x][y]);
		}
		printf("\n");
	}
	
	return 0;

}
