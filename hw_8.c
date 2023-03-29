#include<stdio.h>
int delayTime(float hour);
int delayOnCity(int city);
int delayOnYear(int year);
int timeOnRoute(int pureTime, float hour, int city, int year);

int main() {
	float hour = 9;
	int city = 2;
	int yearBus = 1999;
	int pureTime = 40;
	int finalTime = timeOnRoute(pureTime, hour, city, yearBus);

	printf("%d", finalTime);

	return 0;
}

int delayTime(float hour) {
	float delayMinutes;

	if (hour < 0 || hour > 24) {
		printf("Wrong time\n");
		return -1.;
	} else if (hour >= 7 && hour <= 9)
		return delayMinutes = 20.;
	else if (hour < 11)
		return delayMinutes = 10.;
	else if (hour < 13)
		return delayMinutes = 5.;
	else
		return delayMinutes = 0.;
}

int delayOnCity(int city) {
	int delayCity;

	switch (city) {
	case 1:
		delayCity = 20;
		break;
	case 2:
		delayCity = 35;
		break;
	case 3:
		delayCity = 15;
		break;
	case 4:
		delayCity = 25;
		break;
	default:
		printf("Wrong city\n");
		return -1;
	}
	return delayCity;
}

int delayOnYear(int year) {
	int delayBus;

	if (year < 1950 || year > 2022) {
		printf("Wrong year\n");
		return -1;
	} else if (year <= 1995)
		return delayBus = 15;
	else if (year <= 2005)
		return delayBus = 10;
	else if (year <= 2017)
		return delayBus = 5;
	else
		return delayBus = 0;
}

int timeOnRoute(int pureTime, float hour, int city, int year) {
	float finalTime = pureTime + delayTime(hour) + delayOnCity(city)
			+ delayOnYear(year);
	return finalTime;
}

