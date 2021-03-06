#include "pch.h"
#include <stdio.h>

int main() {
	//input matrix//
	int matrix[5][5];
	for (int row = 0; row < 5;  row++) {
		for (int column = 0; column < 5; column++) {
			scanf_s("%d", &matrix[row][column]);

		}
	}

	//insert sort in column//
	for (int  row = 0;  row < 5;  row++) {
		for (int column = 1; column < 5; column++) {
			int g = matrix[column][row];
			for (int k = column - 1; k >= 0; k--) {
				if (matrix[k][row] < g) {
					matrix[k + 1][row] = matrix[k][row];
						if (k == 0) {
							matrix[k][row] = g;
						}
				}
				else {
					matrix[k + 1][row] = g;
					break;
				}
			} 
		}
	}

	//output sorted matrix//
	for (int row = 0; row < 5; row++) {
		printf("\n");
		for (int column = 0; column < 5; column++) {
			printf("%d	", matrix[row][column]);
		}
	}
	printf("\n");
	printf("=====================>");
	
    //products and sum under diagonal//
	int m = 0, b = 1;
	for (int  row = m + 1; row < b + 1; row++) {
		for (int column = 0; column < 1; column++) {
			int res_1 = matrix[1][0];
			int res_2 = matrix[2][0] * matrix[2][1];
			int res_3 = matrix[3][0] * matrix[3][1] * matrix[3][2];
			int res_4 = matrix[4][0] * matrix[4][1] * matrix[4][2] * matrix[4][3];
			printf("\n");
			printf("product 1: %d\n", res_1);
			printf("product 2: %d\n", res_2);
			printf("product 3: %d\n", res_3);
			printf("product 4: %d\n", res_4);
			printf("sum of products: %d\n", res_1 + res_2 + res_3 + res_4);
		}
	}
}






