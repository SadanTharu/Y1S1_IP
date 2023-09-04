#include<stdio.h>
int main(void)
{
	int marks[4][4]={0};
	int stu_no, score, i, j;
	
	for (stu_no=0; stu_no<3; stu_no++)
	{
		printf("Student no : %d\n",stu_no+1);
		
	for (score=0; score<3; score++)
	{
		printf("Score %d :",score+1);
		scanf("%d",&marks[stu_no][score]);
	}
	    puts("\n");
	
	}
	printf("\nStudent No\tExam Score\t\tAverage\n\n");
	
	
	for(i=0; i<3; i++)
	{
		printf("%d\t\t",i+1);
		
		float average=0;
		
		for(j=0; j<3; j++)
		{
			printf("%d\t",marks[i][j]);
			average=average+marks[i][j];
		}
		printf("%.2f",average/3.0);
		printf("\n");
		
	}
	
	return 0;
}
