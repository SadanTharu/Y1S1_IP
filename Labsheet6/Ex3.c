#include<stdio.h>

int main(void)
{
    int data[12];

    for(int x=0;x<12;x++)
    {
        printf("Enter the %d month average rainfall: ",x+1);
        scanf("%d",&data[x]);
    }
    int max=0,min=data[0];

    for(int y=0;y<12;y++)
    {
        if(data[y]>max)
        {
            max=data[y];
        }
        if(data[y]<min)
        {
            min=data[y];
        }
    }

    printf("\n\nMaximum railfall : %d\n",max);
    printf("Minimum railfall : %d\n",min);

    return 0;
}