#include<stdio.h>
main()
{
	int i;
	
	for(i=0;i<=5;i++)
	{
		if(i==3)
		{
			continue;
		}
		printf("%d",i);
	}
	
}

