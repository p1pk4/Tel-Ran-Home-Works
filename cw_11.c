#include<stdio.h>

void displayEvenNumbersInRange(int min, int max);

void dasplaySumAllNumbers();

int main() {
	int min = 131, max = 131;

	displayEvenNumbersInRange(min, max);
	dasplaySumAllNumbers();

	return 0;
}


void dasplaySumAllNumbers(){
	int range, i, sum;

	do{
		printf("Enter your positive number\n");
		fflush(stdout);
		scanf("%d", &range);
	}while(range<=0);

	for(sum = 0, i=1;i<=range;i++){
		sum+=i;
	}
	printf("sum of number in range = %d", sum);
}


void displayEvenNumbersInRange(int min, int max) {
	if (min > max) {
		printf("Wrong input: min >= max\n");
		return;
	}
	if(min == max && min % 2 != 0){
		printf("There is not even numbers in range!\n");
		return;
	}

	for (; min <= max; min++) {
		if (min % 2 == 0)
			printf("Even numbers = %d\n", min);
	}
}
