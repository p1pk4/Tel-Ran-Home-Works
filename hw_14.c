#include<stdio.h>
#include<stdlib.h>
void createAndPrintSignedArray(int arr[], int size);
void createAndPrintPositiveArray(int ar[], int size);
void printArray(int ar[], int size);
int searchMax2(int ar[], int size);

//Homework functions
int searchMax(int arr[], int size);
float avg(int ar[], int size);
void reversArray(int ar[], int size);
void firstLastPosSum(int ar[], int size);

int main() {
	int size = 7, array[size], array2[size], array3[size], array4[size];

	//Task 1
	createAndPrintSignedArray(array, size);
	int varSearchMax = searchMax(array, size);
	printf("Max element in array1 = [%d]\n\n", varSearchMax);

	//Task 2
	createAndPrintPositiveArray(array2, size);
	float varAverage = avg(array2, size);
	printf("Average value of the array = %.1f\n\n", varAverage);

	//Task 3
	createAndPrintSignedArray(array3, size);
	reversArray(array3, size);
	printf("Revers array:\n");
	printArray(array3, size);

	//Task 4
	createAndPrintSignedArray(array4, size);
	firstLastPosSum(array4, size);

	return 0;
}

void createAndPrintSignedArray(int array[], int size) {
	printf("Signed array:\n");

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100 - 50;
		printf("[%d]", array[i]);
	}

	printf("\n");
}

void createAndPrintPositiveArray(int array[], int size) {
	printf("Positive array:\n");

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 10;
		printf("[%d]", array[i]);
	}

	printf("\n");
}

void printArray(int ar[], int size) {
	for (int i = 0; i < size; i++)
		printf("[%d]", ar[i]);
	printf("\n\n");
}

//Homework functions
int searchMax(int array[], int size) {
	int max = array[0];

	for (int i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];

	return max;
}
//from Ivan
int searchMax2(int ar[], int size){
	int i, maxI = 0;

	for (i = 0; i < size; i++) {
		if(ar[maxI]<ar[i])
			maxI = i;
	}
	return maxI;
}

float avg(int array[], int size) {
	float average = 0;
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += array[i];
	average = (float) sum / size;

	return average;
}

void reversArray(int ar[], int size) {
	int temp;

	for (int i = 0, j = size - 1; i < j; i++, j--) {
		temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
	}
}

void firstLastPosSum(int ar[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		if (ar[i] > 0) {
			sum += ar[i];
			break;
		}
	}
	for (int i = size - 1; i > 0; i--) {
		if (ar[i] > 0) {
			sum += ar[i];
			break;
		}
	}
	printf("Sum = %d;", sum);
}
