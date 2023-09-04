#include <stdio.h>

int main(void)
{
    float length, width, base, height, radius, area;
    char choice;

    printf("Enter (Rectangle_r, Triangle_t, Circle_c)");
    scanf("%c",&choice);

    switch (choice)
    {
        case 'r':
            printf("Enter the Length of rectangle: ");
            scanf("%f",&length);
            printf("Enter the Width of rectangle: ");
            scanf("%f",&width);

            area = length * width;
            printf("Area of rectangle: %.2f\n",area);

        break;

        case 't':
            printf("Enter the base of trangle: ");
            scanf("%f",&base);
            printf("Enter the height of trangle: ");
            scanf("%f",&height);

            area = (base * height)/2.0;
            printf("Area of trangle: %.2f\n",area);
        
        break;

        case 'c':
            printf("Enter the radius of circle: ");
            scanf("%f",&radius);

            area = 22/7.0*radius*radius;
            printf("Area of circle: %.2f\n",area);
        
        break;
    }
}