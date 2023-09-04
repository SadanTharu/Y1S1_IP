#include<stdio.h>

int main(void)
{
    float r, h, areaRec, areaCir, area;

    printf("Enter radius of cylinder: ");
    scanf("%f",&r);

    printf("Enter the height of cylinder: ");
    scanf("%f",&h);

    areaRec = 2*22/7.0 * r * h;
    areaCir = 2*22/7.0 * r * r;
    area = areaRec + areaCir;

    printf("The area of cylinder is: %.2f\n", area);

    return 0;
}