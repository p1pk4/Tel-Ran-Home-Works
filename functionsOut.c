#include<stdio.h>
int valentina();
float grigory();
int igor();


int main() {
	float my_cash;
	//float not_my_cash;
	my_cash = valentina(); //my_cash = 100;
	printf("%.2f NIS\n", my_cash);
	printf("%d NIS\n", valentina());
	//not_my_cash += grigory();
	my_cash = my_cash + grigory(); // 100 + 25.37 = 125.37
	printf("%.2f NIS\n", my_cash);
	my_cash = my_cash + igor(); // 125.37 + 120
	printf("%.2f NIS\n", my_cash);
	return 0;
}


int valentina(){

	return 100;
}

float grigory(){

	return 25.37;
}

int igor(){
	int igor_money = 40;
	return igor_money * 3;
}
