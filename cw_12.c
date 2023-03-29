#include<stdio.h>
void displayChessBoard();
void displayNumbersAtDiagonal();
void displaySquare(int n);


int main() {

	int n = 16;

	displayChessBoard();
	displayNumbersAtDiagonal();
	displaySquare(n);

	return 0;
}

void displayChessBoard(){
	int i, j;

	for(i = 1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d ", i*10);
		}
		printf("\n");
	}

}

void displayNumbersAtDiagonal(){
	int i,j, k = 25;

	for(i = 20; i > 15; i--, k -= 2){
		for(j = i; j<k; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}

void displaySquare(int n){
	int i, j;

	for (i= 1; i <=n; i++) {
		for (j =1; j <=n ; j++){
			if(i==1 || j ==1 || i ==n || j ==n){ //printing border
				printf("+");

			}else if(i == n /2 || j == n/2){	//vertical&horizontal
				printf("*");

			}
			else if((i>1 && i < n/2)&& (j>1 && j < n/2)){ //square 1 -> left and up
				printf("1");
			}
			else if((i > n/2 && i <n) && (j > n/2 && j <n)){ //square 4 -> right and down
				printf("4");
			}
			else if((i>1 && i <n/2)&& (j> n/2 && j < n)){	//square 2 -> right and up
				printf("2");
			}
			else if((i > n /2 && i < n) && (j < n/2 && j < n)){	//square 3 -> left and down
				printf("3");
			}
			else printf(" ");
		}
		printf("\n");
	}

}



