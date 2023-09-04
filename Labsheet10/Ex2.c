#include<stdio.h>

int main(void)
{
	char id[20], name[20];
	int qnt, price, i;
	
	FILE * chr;
	chr = fopen("purchase.txt","w");
	
	if(chr==NULL)
	{
		printf("Fail to create file\n");
		return -1;
	}
	
	for(i=0; i<4; i++)
	{
		printf("Enter the item ID :");
		scanf("%s",&id);
		
		printf("Enter the Name :");
		scanf("%s",&name);
		
		printf("Enter the quantity :");
		scanf("%d",&qnt);
		
		printf("Enter the price for 1kg :");
		scanf("%d",&price);
		
		puts("");
		
		fprintf(chr,"%s\t%s\t%d\t%d\n",id ,name ,qnt ,price);
	}
	fclose(chr);
	
	chr = fopen("purchase.txt","r");
	
	printf("Item ID \tName \tQuantity(kg) \tPrice for 1kg\n\n");
	
	while(!feof(chr))
	{
	    
		fscanf(chr,"%s\t%s\t%d\t%d\n",id ,name ,&qnt ,&price);
		
		printf("%s\t%s\t%d\t%d\n",id ,name ,qnt ,price);
		
		puts("");
		
	}
	fclose(chr);
	
	return 0;	
}