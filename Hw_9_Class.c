#include<stdio.h>
int evenDigitsCount(int number);
int sumDigits(int number);
int xPower(int x, int power);

int main(){
	int num = -0;
	int x = 2;
	int power = 2;

	printf("sumDigits = %d", sumDigits(num));
	printf("sumDigits = %d", xPower(x, power));

	return 0;
}

int sumDigits(int number){
	if(number < 0 ){
		printf("Wrong number\n");
		return -1;
	}
	int sum = 0;
	while(number){
		sum += number %10;
		number /= 10;
	}

	return sum;
}

int xPower(int x, int power){
	if(power <0){
		printf("wrong power\n");
		return 0;
	}
	int res = 1;
	while(power--){ // power != 0
		res *= x;
		//power--;
	}
	return res;
}
