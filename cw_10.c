#include<stdio.h>
void displayReversNumber();
void displayWeekDay();
int bankPercent(float startAmount, float persent, float goalAmount);
void password(int pas);
void pensiya(int sum);

int main() {
	int number;

//	displayReversNumber();
//	displayWeekDay();
//	printf("to reach goal amount is necessary %d years\n", bankPercent(3000, 7.5, 1000000));
//	password(12345);
	pensiya(15000);

	return 0;
}

void displayReversNumber() {
	int a;

	do {
		printf("Enter your positive number:\n");
		fflush(stdout);
		scanf("%d", &a);

	} while (a <= 0);

	printf("revers of %d = ", a);
	while (a > 0) {
		printf("%d", a % 10);
		a /= 10;
	}
	printf("\n");
}

void displayWeekDay() {
	int day;

	do {
		printf("Enter weekday as number from 1 to 7:\n");
		fflush(stdout);
		scanf("%d", &day);

	} while (day <= 0 || day >= 8);

	switch (day) {
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	}
}

int bankPercent(float startAmount, float persent, float goalAmount) {
	int years = 0;
	float sum = startAmount;

	while (sum < goalAmount) {
		sum += sum * persent / 100;
		sum *= 100;
		sum = ((int) sum) / 100.;
		years++;

	}

	return years;
}

void password(int pas) {
	int n;
	int count = 0;
	do {
		printf("Enter your password:\n");
		fflush(stdout);
		scanf("%d", &n);
		count++;
	} while (n != pas && count < 3);
	if (n != pas) {
		printf("I call to police!!!\n");
		return;
	}
	printf("Welcome! Password is correct!\n");
}

void pensiya(int sum) {
	float persent = 3.;
	int goalAmount = sum * 12 / persent * 100;
	int startAge = 20;
	int finalAge = 65;
	int monthPay = 0;
	float total = 0;


	do {
		int count = 0;
		total = 0;
		monthPay+=100;

		while (count <= (finalAge - startAge) * 12) {
			total += total * persent / 100 / 12 + monthPay;
			count++;
		}

	} while (total < goalAmount);
	printf("monthly pay = %d;\n", monthPay);
	printf("total = %f;\n", total);
}

