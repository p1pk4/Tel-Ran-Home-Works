#include<stdio.h>
void printArray(int ar[], int size);
void createAndPrintSignedArray(int array[], int size, int min, int max);
void selectSort(int ar[], int size);
void swap(int ar[], int i, int j);
void bubbleSort(int ar[], int size);

int main() {

	int size = 15, min = -10, max = 55;
	int ar[size];
	createAndPrintSignedArray(ar, size, min, max);
//	selectSort(ar, size);
	bubbleSort(ar, size);
	printArray(ar, size);

	return 0;
}


void printArray(int ar[], int size) {
	for (int i = 0; i < size; i++)
		printf("[%d]", ar[i]);
	printf("\n\n");
}

void createAndPrintSignedArray(int array[], int size, int min, int max) {
	printf("Signed array:\n");
	srand(time(0));

	for (int i = 0; i < size; i++) {
		array[i] = min + rand() % (max + 1 - min);
		printf("[%d]", array[i]);
	}

	printf("\n");
}

void selectSort(int ar[], int size){
	int min, min_i;
	for (int i = 0; i < size-1; i++) {
		min = ar[i];
		min_i = i;
		for (int j = i + 1; j < size; j++) {
			if(ar[j]<min){
				min=ar[j];
				min_i = j;
			}
		}
		if(i!=min_i){
			swap(ar,i,min_i);
		}
	}
}

void swap(int ar[], int i, int j){
	int temp = ar[i];
	ar[i]= ar[j];
	ar[j]= temp;
}

void bubbleSort(int ar[], int size){
	int flag;
	for (int i = 0; i < size-1; i++) {
		flag = 1;
		for (int j = 0; j < size-1 - i; j++) {
			if(ar[j] > ar[j + 1]){
				swap(ar, j,j+1);
				flag = 0;
			}
		}
		if(flag)
			return;
	}
}



