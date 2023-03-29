#include<stdio.h>
void printASCIIReverseInRange(int from, int to);
void sandglassUp();
void sandglassDown();


int main() {
	int from, to;

	printf("Enter numbers:\nfrom = ");
	fflush(stdout);
	scanf("%d", &from);
	printf("to = ");
	fflush(stdout);
	scanf("%d", &to);

	printASCIIReverseInRange(from, to);
	printf("\n");
	sandglassUp();
	sandglassDown();


	return 0;
}

void printASCIIReverseInRange(int from, int to) {
	if (from < 0 || to < from){
		printf("Wrong number!\n");
		return;
	}

	int count = 0;
	for (; to >= from; to--) {
		printf("%c ", to);
		count++;

		if (count == 3) { //if(count%3==0) and "count = 0" dont need;
			printf("\n");
			count = 0;
		}
	}
}

void sandglassUp() {
	int i, j, n = 10;

	for (i = 1; i <= n / 2; i++) {
		for (j = 1; j <= n; j++)
			if(j>=i && j <= n - i + 1)
				printf("/");
			else
				printf(" ");
		printf("\n");
	}
}

void sandglassDown() {
	int i, j, n = 10;

	for (i = n / 2 + 1; i < n + 1; i++) {
		for (j = 1; j <= n; j++)
			if (j <= i && j >= n - i + 1)
				printf("/");
			else
				printf(" ");
		printf("\n");
	}
}
