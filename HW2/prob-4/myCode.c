#include <stdio.h>
int main(void) 
{

    int cents = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;


    printf("Hello, Enter the amount of cents you have: \n");
    scanf("%d", &cents);
    printf("You have %d cents.\n", cents);
    quarters = cents / 25;


    dimes = (cents % 25) / 10;

    nickels = ((cents % 25) % 10) / 5;
    pennies = nickels % 1;
    printf("Here are your coins. \n");
    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", (((cents % 25) % 10) % 5) / 1);
	printf("\n");
  }
