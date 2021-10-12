#include <stdio.h>

int main(void) {
	 int length, width;
    printf("Hello, Enter your width: ");
    scanf("%d", &width);
    printf("Hello, Enter your length: ");
    scanf("%d", &length);
    printf("The area is: %d\n", length * width);
    printf("The perimeter is: %d\n", 2 * (width + length));
}
