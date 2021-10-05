#include <stdio.h>

int main()
{
    int one, two, three, four, five;
    int i, j, a, n;
    float median;

    printf("Enter first integer:");
    scanf("%d", &one);
    printf("Enter second integer:");
    scanf("%d", &two);
    printf("Enter third integer:");
    scanf("%d", &three);
    printf("Enter fourth integer:");
    scanf("%d", &four);
    printf("Enter five integer:");
    scanf("%d", &five);
    printf("Your average is: %f\n", (one + two + three + four + five)/ 5.0);


    int array[5] = {one, two, three, four, five};
    
    for (i = 0; i < 5; ++i){
        
        for (j= i + 1; j < 5; ++j)
        {
            if (array[i] > array[j] )
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
    printf("The median is: %d\n", array[2]);




}

