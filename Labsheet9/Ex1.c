#include<stdio.h>
#include<assert.h>

char findgrade(float mark);
void testgrade();

int main(void)
{
	testgrade();
	
	float mark;
	
	printf("Enter mark of the module : ");
	scanf("%f",&mark);
	
	printf("grade = %c\n",findgrade(mark));
	
	return 0;
}

char findgrade(float mark)
{
	if(mark >= 75)
	return 'A';
	
	else if(mark >= 65)
	return 'B';
	
	else if(mark >= 45)
	return 'C';
	
	else
	return 'F';
}

void testgrade()
{
	assert(findgrade(85)=='A');
	assert(findgrade(25)=='F');
	printf("Test passed\n\n");
}