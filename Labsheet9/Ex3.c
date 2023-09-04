#include<stdio.h>
#include<assert.h>

float calpayment(char packagetype);

float caldiscount(float payment,int age);

void testdiscount();

int main()
{
	int age;
	char packagetype;
	float packagepayment, discount, payment;
	
	testdiscount();
	
	printf("Enter package type (S,C,H) : ");
	packagetype = getchar();
	
	packagepayment = calpayment(packagetype);
	
	printf("Enter the age : ");
	scanf("%d",&age);
	
	discount = caldiscount(payment,age);
	
	payment = packagepayment - discount;
	
	printf("Total Amount to pay : %.2f",payment);
	
	return 0;
}

float calpayment(char packagetype)
{
	float amountTopay;
	
	switch(packagetype)
	{
		case 'S':
		case 's':
		amountTopay = 15000.0;
		break;
		
		case 'C':
		case 'c':
		amountTopay = 50000.0;
		break;
		
		case 'H':
		case 'h':
		amountTopay = 30000.0;
		break;
		
		default:
		amountTopay = 0;		
    }
    return amountTopay;
}

float caldiscount(float payment,int age)
{
	float discountamount;
	
	if (age >= 60)
	{
		discountamount = 0.1*payment;
	}
	else
	{
		discountamount = 0;
	}
	return discountamount;
}

void testdiscount()
{
	assert(fabs(caldiscount(60,15000.0)-1500.0)<0.001);
}