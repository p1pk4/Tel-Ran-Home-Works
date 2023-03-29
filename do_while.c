#include<stdio.h>
int isPrimeNumber(int number);
int countPrimeNumber(int from, int to);
int isLuckyNumber(int number);
int countDigits(int number);
int sumDigits(int number);
int xPower(int x, int power);

int main() {
	int num = 179;
	if (isPrimeNumber(num))
		printf("number %d is prime\n", num);
	else
		printf("number %d is not prime\n", num);
	int from = 5, to = 80;
	printf("count prime numbers = %d\n", countPrimeNumber(from, to));

	num = 2221303;
	//printf("")
	if (isLuckyNumber(num) == 1)
		printf("number %d is lucky\n", num);
	else
		printf("number %d is not lucky\n", num);

	return 0;
}

int isPrimeNumber(int number) {
	if (number <= 1)
		return 0;
	int divider = 2;
	while (divider <= number / 2) {
		if (number % divider == 0)
			return 0;
		divider++;
	}
	return 1;
}

int countPrimeNumber(int from, int to) {
	if (from > to) {
		printf("Wrong range\n");
		return -1;
	}
	int count = 0;
	while (from <= to) {
//		if(isPrimeNumber(from)==1)
//			count++;
		count += isPrimeNumber(from++);
		//from++;
	}

	return count;
}

int isLuckyNumber(int number) {
	int countD = countDigits(number);
	int power = countD / 2;
	int pow10 = xPower(10, power);
	int left = number / pow10;
	if(countD%2 != 0)
		left /= 10;
	int right = number % pow10;
	int sum1 = sumDigits(left);
	int sum2 = sumDigits(right);
//	if (sum1 == sum2)
//		return 1;
//	else
//		return 0;
//	return sum1==sum2? 1:0;
	return sum1 == sum2;

}

int sumDigits(int number) {
	int numberForMinus = 0, numberForPlus = 0, count = 0;

	while (number > 0) {
		numberForMinus = (number / 10) * 10;
		numberForPlus = number - numberForMinus;
		count += numberForPlus;
		number = numberForMinus / 10;
	}
	return count;
}
int xPower(int x, int power) {
	int result = 1;

	while (power != 0) {
		result *= x;
		power--;
	}
	return result;
}

int countDigits(int num) {
	if (num == 0)
		return 1;
	int count = 0;
	while (num) {
		num /= 10;
		count++;
	}
	return count;
}
