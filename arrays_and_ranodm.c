#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fillArray(int ar[], int size, int min, int max);
//void fillArray2(int ar[], int size, int min, int max);
void printArray(int ar[], int size);
int search(int ar[], int size, int value);
int searchMin(int ar[], int size);
void reverseElementsByIndex(int ar[], int size, int i1, int i2);

int main(){
	srand(time(0));
	printf("%d\n", rand());
	printf("%d\n", rand() % 10);
	printf("%d\n", rand() % 100);

	int size = 100;
	int min = -13, max = 143;
	int ar[size];
	fillArray(ar, size, min, max);
//	fillArray2(ar, size, min, max);
	printArray(ar, size);

	int value = 33;
	printf("search index = %d\n", search(ar, size, value));
	printf("min element in array = %d\n", searchMin(ar, size));
	int ar2[0];
	printf("min element in array = %d\n", searchMin(ar2, 0));
	int i = 2, j = size - 2;
	reverseElementsByIndex(ar, size, i, j);
	printArray(ar, size);



	return 0;
}

void fillArray(int ar[], int size, int min, int max){
	for (int i = 0; i < size; i++) {
		ar[i] = min + rand() % (max +1 - min);
	}
}

void printArray(int ar[], int size) {
	for (int i = 0; i < size; i++)
		printf("[%d]", ar[i]);
	printf("\n");
}

int search(int ar[], int size, int value) {
	for (int i = 0; i < size; i++) {
		if (ar[i] == value)
			return i;
	}
	return -1;
}

int searchMin(int ar[], int size){
	if(size==0) {
		printf("Empty array\n");
		return 0;
	}

	int min =  ar[0];
	for (int i = 1; i < size; i++)
			if (ar[i] < min)
				min = ar[i];

	return min;
}

void reverseElementsByIndex(int ar[], int size, int i1, int i2){
	if(i1<0 || i1 >= size || i2<0 || i2 >= size){
		printf("Index out of range\n");
		return;
	}
	int temp = ar[i1];
	ar[i1] = ar[i2];
	ar[i2] = temp;

}


//======WRONGWAY==============
/*void fillArray2(int ar[], int size, int min, int max) {
	int temp;
	for (int i = 0; i < size; i++) {
		do{
			temp = rand();
		}while(temp<min || temp>max);
		ar[i] = temp;
	}
}
*/
