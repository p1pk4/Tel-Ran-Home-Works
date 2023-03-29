#include<stdio.h>
void printArrayReverse(int ar[], int size);
int sumEvenIndexElements(int ar[], int size);
int sumEvenElements(int ar[], int size);
void changeElements(int ar[], int size);
void mergeArrays(int ar[], int size, int ar2[], int size2);

int main() {
	int ar[] = { 1, 2, 3, 4, 5 };
	int ar2[] = { 6, 7, -8, 9, 10 };
	int ar3[] = { 11, 12, -13, 14, -15 };
	int size = 5;
	int size2 = 5;
	int varSumEvenIndexElements = sumEvenIndexElements(ar, size);
	int varSumEvenElements = sumEvenElements(ar, size);

	printArrayReverse(ar, size);
	printf("\nsum Even Index Elements = %d", varSumEvenIndexElements);
	printf("\nsum Even Elements = %d\n", varSumEvenElements);
	changeElements(ar, size);
	mergeArrays(ar2, size, ar3, size);

	return 0;
}

void printArrayReverse(int ar[], int size) {
	for (int i = size - 1; i >= 0; i--)
		printf("[%d]", ar[i]);
}

int sumEvenIndexElements(int ar[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
		if (i % 2 == 0)
			sum += ar[i];

	return sum;
}

int sumEvenElements(int ar[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
		if (ar[i] % 2 == 0)
			sum += ar[i];

	return sum;
}

void changeElements(int ar[], int size) {
	for (int i = 0; i < size; i++) {
		if (ar[i] % 2 == 0)
			ar[i] = 0;
		else
			ar[i] = 1;
		printf("[%d]", ar[i]);
	}
}

void mergeArrays(int ar[], int size, int ar2[], int size2) {
	// = { 12, 12, 12, 12, 12, 12, 12, 12, 12, 12 };
	int size3 = size + size2;
	int arrForMerge[size3];

	for (int i = 0; i < size; i++)
		arrForMerge[i] = ar[i];

	for (int i = 0; i < size2; i++) {
		arrForMerge[i + size] = ar2[i];
		printf("\n[%d]", arrForMerge[i]);
	}
}
