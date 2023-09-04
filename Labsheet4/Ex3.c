#include<stdio.h>
int main()
{
	printf("==============================================\n");
	printf("Package Type\t         Title\t cost per person\n");
	printf("==============================================\n");
	printf("1           \t    Horse ride\t          2000/=\n");
	printf("2           \t  Scuba Diving\t          5000/=\n");
	printf("3           \t Water Rafting\t          7000/=\n");
	printf("==============================================\n");
	
	printf("\n\n");
	
	int choice,p;
	float c;
	
	printf("Press 1 for horse ride\n");
	printf("Press 2 for Scuba Diving\n");
	printf("Press 3 for Water Rafting\n");
	
	printf("\n\n");
	scanf("%d" ,&choice);
	
	printf("\n\n");
	
	switch (choice)
	{
		case 1:
			printf("enter the number of persons= ");
			scanf("%d",&p);
			c=p*2000;
			printf("price=  %.2f\n",c);
			break;
			
	    case 2:
			printf("enter the number of persons= ");
			scanf("%d",&p);
			c=p*5000;
			printf("price=  %.2f\n",c);
			break;
			
		case 3:
			printf("enter the number of persons= ");
			scanf("%d",&p);
			c=p*7000;
			printf("price=  %.2f\n",c);
			break;
		}
	
	return 0;
}