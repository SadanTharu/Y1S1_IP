#include<stdio.h>
int main(void)
{
	int i, no;
	
	FILE *sadan;
	sadan = fopen("numbers.txt","w");
	
	if(sadan==NULL)
	{
		printf("Fail to create file\n");
		return -1;
	}
	
	for(i=1; i<=5; i++)
	{
		printf("Enter integer number : ");
		scanf("%d", &no);
		
		fprintf(sadan, "%d\n",no);
	}
	fclose(sadan);
	
	sadan = fopen("numbers.txt","r");
	
	//fscanf(sadan, "%d",&no);
	while(!feof(sadan))
	{
		printf("%d\t",no);
		fscanf(sadan, "%d",&no);
	}
	fclose(sadan);
	
	return 0;
}