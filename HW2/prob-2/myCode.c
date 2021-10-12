#include <stdio.h>

int main(void) {
	int minutes, hours;
    printf("Hello, Enter your the amount of minutes you have in mind: \n");
    scanf("%d", &minutes);
    hours = minutes / 60;
    printf("This time is equal to %d hours and %d minutes.", hours, minutes % 60);
    
}
