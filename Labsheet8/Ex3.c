#include<stdio.h>

float circleArea(float radius);
float recArea(float radius, float height);
//float circlePeri();

int main(void)
{
	float radius,height,cylinderarea,cirarea,rectanglearea;
	
	
	printf("Enter the radius : ");
	scanf("%f",&radius);
	
	printf("Enter the height : ");
	scanf("%f",&height);
	
	cirarea = circleArea(radius);
	rectanglearea = recArea(radius,height);
	
	cylinderarea = (2*cirarea)+(rectanglearea);
	
	printf("Area of a cylinder is : %.2f",cylinderarea);
	
	return 0;
}

float circleArea(float radius)
{
	float cirarea;
	cirarea = (22/7.0)*radius*radius;
	return cirarea;	
}

float recArea(float radius, float height)
{
	float rectanglearea;
	rectanglearea = (22/7.0)*radius*height*2;
	return rectanglearea;	
}