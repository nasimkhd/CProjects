
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	float amt , remainder, remainder2, remainder3;
	int toonies, loonies, quarters;
	printf("Change Maker Machine\n");
	printf("====================\n");
	printf("Enter dollars and cents amount to convert to coins: $");
	scanf("%f", &amt);


	toonies = amt / 2;
	remainder = amt - toonies * 2;
	loonies = remainder/1 ;
	remainder2 = remainder - loonies * 1;
	quarters = remainder2 / 0.25;
	remainder3 = remainder2 - quarters * 0.25;
	printf("\n$2.00 Toonies  X %d (remaining: $%0.2f)", toonies , remainder );
	printf("\n$1.00 Loonies  X %d (remaining: $%0.2f)" , loonies , remainder2);
	printf("\n$0.25 Quarters X %d (remaining: $%0.2f)\n" , quarters, remainder3 );
	printf("\nMachine error! Thank you for letting me keep $%0.2f!\n", remainder3);

	return 0;
}
