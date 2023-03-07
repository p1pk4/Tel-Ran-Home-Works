#include<stdio.h>
int transferPrice(int km, int transport);
int livingPrice(int days, int appartments, int star);
int foodPrice(int foodDays, int food);
int priceForAdventure(int myMoney, int days, int transport, int home);
int const GIFTS = 500;

int main() {
	int km = 1000;
	int transport = 2;
	int days = 1312, app = 2, stars = 1;
	int foodDays = 12, food = 3;
	int myMoney = 300000;

	printf("My money = %d;\nTransfer = %d;\n"
			"Home = %d;\nFood = %d;\n"
			"Total: %d;", myMoney, transferPrice(km, transport),
			livingPrice(days, app, stars), foodPrice(foodDays, food),
			priceForAdventure(myMoney, livingPrice(days, app, stars),
					transferPrice(km, transport), foodPrice(foodDays, food)));
	return 0;
}

int transferPrice(int km, int transport) {
	if (transport <= 0 || transport >= 4 || km < 20) {
		printf("go away dude\n");
		return -1;
	} else if (transport == 1) {
		if (km > 20 && km <= 1000)
			km *= 20;
		else
			km *= 15;
	} else if (transport == 2) {
		if (km > 20 && km < 1000)
			km *= 1;
		else
			km *= 0.5;
	} else if (transport == 3) {
		if (km > 20 && km < 5000)
			km *= 20;
		else
			km *= 25;
	}
	return km;
}

int livingPrice(int days, int appartments, int star) {
	if (days <= 0 || appartments <= 0 || appartments >= 4 || star <= 0
			|| star > 5) {
		printf("wrong dude!\n");
		return -1;
	} else if (appartments == 1) {
		switch (star) {
		case 1:
			days *= 50;
			break;
		case 2:
			days *= 100;
			break;
		case 3:
			days *= 150;
			break;
		case 4:
			days *= 200;
			break;
		case 5:
			days *= 250;
			break;
		}
		return days;
	} else if (appartments == 2) {
		switch (star) {
		case 1:
			days *= 30;
			break;
		case 2:
			days *= 60;
			break;
		case 3:
			days *= 90;
			break;
		case 4:
			days *= 120;
			break;
		case 5:
			days *= 150;
			break;
		}
		return days;
	} else if (appartments == 3) {
		if (star <= 0 || star > 3) {
			printf("wrong way dude!\n");
			return -1;
		} else {

			switch (star) {
			case 1:
				days *= 100;
				break;
			case 2:
				days *= 200;
				break;
			case 3:
				days *= 300;
				break;
			}
		}
		return days;
	}
	return days;
}

int foodPrice(int foodDays, int food) {
	if (foodDays <= 0 || food <= 0 || food > 3) {
		printf("No food!\n");
		return -1;
	}
	switch (food) {
	case 1:
		foodDays *= 10;
		break;
	case 2:
		foodDays *= 25;
		break;
	case 3:
		foodDays *= 50;
		break;
	}
	return foodDays;
}

int priceForAdventure(int myMoney, int days, int km, int home) {
	int money = myMoney - days - km - home - GIFTS;
	return money;
}
