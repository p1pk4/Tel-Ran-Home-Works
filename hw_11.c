#include<stdio.h>
int isLuckyNumberPiter(int number);
int countSubNumber(int number, int subNumber);

int main() {

	printf("Enter a number: \n");
	fflush(stdout);
	int number;
	scanf("%d", &number);

	isLuckyNumberPiter(number);

	printf("Enter a sub number: \n");
	fflush(stdout);
	int subNumber;
	scanf("%d", &subNumber);

	int subNum = countSubNumber(number, subNumber);
	printf("%d\n", subNum);

	return 0;
}

int isLuckyNumberPiter(int number) {

	if (number < 10) {
		printf("Wrong number!\n");
		return -1;
	}

	int count = 0, sumEvenNumbers = 0, sumOddNumbers = 0;

	for (; number; number /= 10) {

		//count можно не объявлять, использовать number --> if (number % 2) == if (number % 2 == 0)}
		if (count % 2) {
			sumEvenNumbers += number % 10;
			count++;

		} else {
			sumOddNumbers += number % 10;
			count++;
		}
	}
	//Можно вернуть вот так ----> return (sumEvenNumbers == sumOddNumbers);
	//Можно использовать тернарник если возвращать без принтов
	if (sumEvenNumbers == sumOddNumbers) {
		printf("Ticket is lucky :)\n");
		return 1;
	} else {
		printf("Ticket isn't lucky :(\n");
		return 0;
	}
}

int countSubNumber(int number, int subNumber) {

	if (number < 0 || subNumber < 0) {
		printf("Wrong number");
		return 0;
	}

	int subNumberLength = 0, temp = subNumber;
	while (temp > 0) {
		subNumberLength++;
		temp /= 10;
	}

	int digit, count = 0, subDigit = subNumber % 10;

	for (int pos = 1; number; pos++, number /= 10) {
		digit = number % 10;

		//if (number % 10 == subDigit)
		if (digit == subDigit)
			count++;

		if (pos <= subNumberLength)
			subDigit = subNumber % 10;
	}
	return count;
}

