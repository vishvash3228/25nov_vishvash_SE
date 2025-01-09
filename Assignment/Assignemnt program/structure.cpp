#include<stdio.h>
struct stdata
{
	char nm[10];
	int roll;
	float mark;
}st[10];
main(){
	int i,j;
	printf("Enter how many students: ");
	scanf("%d",&j);
	
	for(i=0;i<j;i++)
	{
		printf("Enter student's  name: ");
		scanf("%s",st[i].nm);
		printf("\nEnter student's id: ");
		scanf("%d",&st[i].roll);
		printf("\nEnter student's Marks: ");
		scanf("%f",&st[i].mark);
	}
	for(i=0;i<j;i++)
	{
		printf("\n*****************************************\n");
		
		printf("\nEnter student's  name is:%s\n",st[i].nm);

		printf("\nEnter student's id is:%d\n",st[i].roll);

		printf("\nEnter student's Marks:%f\n",st[i].mark);
	}	
}

