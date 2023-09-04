#include <stdio.h>

int main(void)
{
    int number[4][3] = {0};
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter integer value: ");
            scanf("%d",&number[i][j]);
        }
    }

    printf("\nArray Element: \n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", number[i][j]);
        }
        printf("\n");
    }
    return 0;
}