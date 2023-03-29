#include<stdio.h>
void secondWhile();
void squares();
int countDigits(int num);
void printStars(int stars, int numColumn);

int main() {
	int number = 130;
	int stars = 10;
	int numColumn = 5;
	//countDigits(number);

	secondWhile();
	squares();
	printf("%d\n", countDigits(number));
	printStars(stars, numColumn);

	return 0;
}

void secondWhile() {
	int i = 9;

	while (i >= 0) {
		switch (i) {
		case 0:printf("zero\n");break;
		case 1:printf("one\n");break;
		case 2:printf("two\n");break;
		case 3:printf("three\n");break;
		case 4:printf("four\n");break;
		case 5:printf("five\n");break;
		case 6:printf("six\n");break;
		case 7:printf("seven\n");break;
		case 8:printf("eight\n");break;
		case 9:printf("nine\n");break;
		default:printf("No more fingers\n");break;
		}
		i--;
	}
}

void squares(){
	int i = 0;
	while(i <= 30){
		printf("%d -> %d\n", i, i * i);
		i++;

	}
}

int countDigits(int num){

	if(num == 0)
		return 1;
	int count = 0;

	while(num != 0){
		num /= 10;
		count ++;
	}

	return count;
}

void printStars(int stars, int numColumn){
	if(stars <=0 || numColumn <= 0){
			printf("Wrong args\n");
			return;
		}
	int count = 0;
	while(count < stars){
		printf("* ");
		count++;
		if(count % numColumn == 0){
			printf("\n");
		}
	}
}
