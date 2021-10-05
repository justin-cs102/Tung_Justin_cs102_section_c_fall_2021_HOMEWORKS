#include <stdio.h>
#include <string.h>

int main()

{
    char one[100]={}, two[100]={}, three[100]={};
    
    printf("Enter first string: ");
    scanf("%s", one);
    printf("Enter second string: ");
    scanf("%s", two);
    printf("Enter third string: ");
    scanf("%s", three);
    
    printf("Your string's are: %s, %s, and %s.\n", one, two, three);
    printf("In alphabetical order, you now have: \n");
    {
    char *orig[3] = {one, two, three};
        for (int i = 0; i < 3; ++i){
            for (int j = i + 1; j < 3; ++j)
                if (strcmp(orig[i], orig[j]) > 0) {
                    char* temp = orig[i];
                    orig[i] = orig[j];
                    orig[j] = temp;
                    
                }
        printf("%s, ", orig[i]);
        }
        
    getchar();
    return 0;
    printf("\n");            
    }
            
}
