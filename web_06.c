#include<stdio.h>
void funcForInOutText(int number);

int main() {
	int number;

	funcForInOutText(number);

	return 0;
}

void funcForInOutText(int number){

	printf("Enter a number: \n");
	fflush(stdout);
	scanf("%d", &number);
	printf("Your number = %d;\n", number);
}
