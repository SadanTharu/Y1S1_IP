#include<stdio.h>
#include<assert.h>
#include<math.h>

float calmark(float final,float CA);

int main(void)
{
	assert(fabs(calmark(100.0, 100.0) - 100.0) < 0.01);
	assert(fabs(calmark( 60.0,  70.0) -  64.0) < 0.01);
	
	float markfinal, markCA;
	
	printf("Enter mark for final exam : ");
	scanf("%f",&markfinal);
	
	printf("Enter mark for continuous assessments : ");
	scanf("%f",&markCA);
	
	printf("overall mark = %.2f\n",calmark(markfinal,markCA));
	
	return 0;
}

float calmark(float final,float CA)
{
	float mark;
	mark = final * 0.6 + CA * 0.4;
	return mark;
}