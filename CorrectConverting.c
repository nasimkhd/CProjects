
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	float amt, dispense, serviceFee, remainder, remainder2, remainder3, remainder4, remainder5, remainder6;
	int toonies, loonies, quarters, dimes, nickles, pennies;
	printf("Change Maker Machine\n");
	printf("====================\n");
	printf("Enter dollars and cents amount to convert to coins: $");
	scanf("%f", &amt);
	serviceFee = amt * 0.05;
	printf("Service fee (5.0 percent): %0.2lf\n" , serviceFee);
	dispense = amt - serviceFee;
	printf("Balance to dispense: $%.2f\n" , dispense);
	

	toonies = dispense / 2;
	remainder = dispense - toonies * 2;
	loonies = remainder / 1;
	remainder2 = remainder - loonies * 1;
	quarters = remainder2 / 0.25;
	remainder3 = remainder2 - quarters * 0.25;
	dimes = remainder3 / 0.10;
	remainder4 = remainder3 - dimes * 0.10;
	nickles = remainder4 / 0.05;
	remainder5 = remainder4 - nickles * 0.05;
	pennies = remainder5 / 0.01;
	remainder6 = remainder5 - pennies * 0.01;

	printf("\n$2.00 Toonies  X %d (remaining: $%0.2f)", toonies , remainder);
	printf("\n$1.00 Loonies  X %d (remaining: $%0.2f)", loonies, remainder2);
	printf("\n$0.25 Quarters X %d (remaining: $%0.2f)", quarters, remainder3);
	printf("\n$0.10 Dimes    X %d (remaining: $%0.2f)", dimes , remainder4);
	printf("\n$0.05 Nickels  X %d (remaining: $%0.2f)", nickles, remainder5);
	printf("\n$0.01 Pennies  X %d (remaining: $%0.2f)\n", pennies,remainder6);
	printf("\nAll coins dispensed!\n");

	return 0;
}




