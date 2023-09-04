#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter the number: ");
    scanf("%d",&number);

    while(number != -1)
    {
        printf("%d\n",number);

        printf("Enter the number: ");
        scanf("%d",&number);
    }
    return 0;
}