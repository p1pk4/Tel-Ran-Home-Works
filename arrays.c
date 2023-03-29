#include<stdio.h>
void displayArray(int array[], int size);
void divToFour(int array[], int size);
void displayThreeElementsMaxSum(int array[], int size);
int isEqualElements(int array[], int size);

int main(){
	int array[9] = {1,2,43,6,6,7,8,9,0};
	int array1[12] = {1,1,1,1, 4,8,14,22,2,56,5};

	int size = sizeof(array)/sizeof(int);

//	displayArray(array1, 12);
	int array2[12];
//	array2= array1;
	displayArray(array, size);
	divToFour(array1, 12);
	displayArray(array1, 12);
	displayThreeElementsMaxSum(array1, 12);
	int res = isEqualElements(array, size);
	if(res)
		printf("There is equals elements\n");
	else
		printf("There is NOT equals elements\n");

	return 0;
}


void displayArray(int array[], int size){
	for (int i = 0; i < size; i++) {
		printf("[%d], ", array[i]);
	}
	printf("\n");
}

void divToFour(int array[], int size){
	for (int i = 0; i < size; i++) {
		if(array[i] % 10 ==4){
			array[i]/=2;
		}
	}
}

void displayThreeElementsMaxSum(int array[], int size){
	int maxIndex = 0, maxSum = 0;
	for (int i = 0; i < size-2; i++) {
		int currSum = array[i] + array[i+1] + array[i+2];
		if( currSum > maxSum){
			maxSum = currSum;
			maxIndex = i;
		}
	}
	printf("3 elem with max sum: %d, %d, %d\n", array[maxIndex], array[maxIndex+1], array[maxIndex + 2]);
}

int isEqualElements(int array[], int size){
	int count = 0;
	for (int i = 0; i < size-1; i++) {
		for (int j = i+1; j < size; j++) {
			if(array[i] == array[j]){
				return 1;
			}
		}
	}
	return 0;
}

