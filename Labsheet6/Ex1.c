#include<stdio.h>

int main(void)
{
    int number[5] = {0};
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter the number : ");
        scanf("%d",&number[i]);
    }

    printf("\nArray Element : ");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t", number[i]);
    }

    return 0;
}