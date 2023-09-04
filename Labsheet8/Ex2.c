#include<stdio.h>

float calbonus(float basicsal);
int main(void)
{
	float salary, netsalary, bonusamount;
	
	printf("Enter basic salary : ");
	scanf("%f",&salary);
	
	bonusamount = calbonus(salary);
	netsalary = salary+bonusamount;
	
	printf("Net salary : %.2f\n", netsalary);
	
	return 0;
}

float calbonus(float basicsal)
{
	float bonus;
	
	if(basicsal > 20000)
	{
		bonus = basicsal*2;
	}
	else
	    bonus = basicsal/2;
	return bonus;
}
