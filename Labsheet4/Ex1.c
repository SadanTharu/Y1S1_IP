#include <stdio.h>

int main(void)
{
    int angle = 0, ang;

    for(int x=0;x<3;x++)
    {
        printf("Enter the %d angle: ",x+1);
        scanf("%d",&ang);

        angle += ang;
    }

    if(angle == 180)
    {
        printf("The trangle can be formed");
    }
    else
    {
        printf("The trangle cannot be formed");
    }


    return 0;
}