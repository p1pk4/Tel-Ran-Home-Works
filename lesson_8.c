#include<stdio.h>
int delayTime(float time);
int delayOnCity(int city);

int main() {

	return 0;
}

int delayTime(float time) {
	if (time < 0. || time >= 24.) {
		printf("wrong time\n");
		return -1;
	}
	if (time > 7. && time <= 9.)
		return 20;
	else if (time > 9. && time < 11.)
		return 10;
	else if (time >= 11. && time < 13)
		return 5;
	else
		return 0;
}

int delayOnCity(int city) {

	switch (city) {
	case 1:
		return 20;
	case 2:
		return 35;
	case 3:
		return 15;
	case 4:
		return 25;
	default:
		printf("wrong city\n");
		return -1;
	}
}
