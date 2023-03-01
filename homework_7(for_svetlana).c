#include<stdio.h>
void fan(int mode);
void amPm(float time);
void medtest(int plus, int age);

int main() {
	int mode = 4;
	float time = 23.13;
	int plus = 22, age = 57;

	fan(mode);
	amPm(time);
	medtest(plus, age);

	return 0;
}

void fan(int mode) {
	if (mode <= 0 || mode > 4) {
		printf("Wrong mode\n");
		return;
	}
	if (mode == 1) {
		printf("Off\n");
		return;
	}
	if (mode == 2) {
		printf("Low\n");
		return;
	}
	if (mode == 3) {
		printf("Middle\n");
		return;
	}
	if (mode == 4) {
		printf("Hi\n");
		return;
	}
}

void amPm(float time) {
	int hours, minutes;

	//Dropped the fractional part of the number.
	hours = time;
	//Dropped the integer part of the number.
	minutes = (time - hours) * 100;

	if (hours < 0 || hours > 23 || minutes > 59) {
		printf("Wrong time!\n");
		return;
	} else {
		if (time > 0.0 && time <= 12.0) {
			printf("am\n");
			return;
		} else {
			printf("pm\n");
			return;
		}
	}
}

void medtest(int plus, int age) {
	if (age < 0 || plus > 120 || plus <= 40) {
		printf("Medical test failed!\n");
		return;
	} else {
		if (((age < 35 && age > 0) && (plus < 120 && plus > 40))
				|| ((age <= 55 && age >= 35) && (plus < 110 && plus > 40))
				|| (age > 55 && (plus < 100 && plus > 40))) {
			printf("Medical test passed!\n");
			return;
		}
	}
}

