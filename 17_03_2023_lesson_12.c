#include<stdio.h>

void dispalyASCII();
void displayStars(int row, int col);
void displayPiphagor();
void rectangle(int n);
void diagonale(int n);
void diagonale2(int n);

int main() {

	int row = 3, col = 5, n = 10;

	dispalyASCII();
	displayStars(row, col);
	displayPiphagor();
	rectangle(n);
	diagonale(n);
	diagonale2(n);

	return 0;
}

void dispalyASCII(){

	int i, count;
	for(i = 32, count = 0; i <= 96; i++){
		printf("%d => %c ||| ", i, i);
		count++;
		if(count == 5){
			printf(";\n");
			count =0;
		}
	}
	printf("\n");
}

void displayStars(int row, int col){

	int i,j;
	for(i = 1; i<=row; i++){
		for(j = 1; j <= col; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void displayPiphagor(){

	int i,j;
	for(i = 1; i <=10; i++){
		for(j = 1; j <=10; j++)
			printf("%d\t", i * j);
		printf("\n");
	}
}

void rectangle(int n){

	int i, j;
	for(i = 1; i<= n; i++){
		for(j = 1;j<=n;j++){
			if(i == 1 || j==1 || i == n || j == n)
				printf("@");
			else
				printf(" ");
		}

		printf("\n");
	}
}

void diagonale(int n){

	int i, j;
		for(i = 1; i<= n; i++){
			for(j = 1;j<=n;j++){
				if(i == 1 || j==1 || i == n || j == n || i == j || (i+j-1==n))
					printf("@");
				else
					printf(" ");
			}

			printf("\n");
		}
}

void diagonale2(int n) {

	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == 1 || i == n ||  i == j || (i + j - 1 == n))  // j == n || j == 1 ||
				printf("@");
			else
				printf(" ");
		}

		printf("\n");
	}
}
