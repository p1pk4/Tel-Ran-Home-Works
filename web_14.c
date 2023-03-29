#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fillArray(int ar[], int size, int min, int max);
void display(int ar[], int size);
void displayASCII();

int main() {

	printf("%d\n", RAND_MAX);
	srand(time(NULL));
	printf("%d\n", (int) time(NULL));
//	int a = rand();
//	printf("%d\n", a);

	int i, size = 50;
	for (i = 0; i < size; i++) {
		printf("%15d", rand());
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	displayASCII();

}

void fillArray(int ar[], int size, int min, int max) {
	for (int i = 0; i++ < size; i++) {
		ar[i] = min + rand() % (max - min - 1);
	}
}

void displayASCII() {
	int size = 126 - 33;
	int ascii[size];
	fillArray(ascii, size, 33, 126);
	for (int i = 0; i < size; i++) {
		printf("%15c", ascii[i]);
		if (i % 5 == 0) {
			printf("\n");
		}
	}

}

void display(int ar[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%15c", ar[i]);
		if (i % 5 == 0) {
			printf("\n");
		}
	}
}
