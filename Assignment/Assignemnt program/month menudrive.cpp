#include<stdio.h>
main(){
	int choice;
	
	printf("1 to 12: ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
		printf("month is january");
		break;
		
		case 2:
		printf("month is febuary");
		break;
		
		case 3:
		printf("month is march");
		break;
		
		case 4:
		printf("month is april");
		break;
		
		case 5:
		printf("month is may");
		break;
		
		case 6:
		printf("month is june");
		break;
		
		case 7:
		printf("month is july");
		break;
		
		case 8:
		printf("month is august");
		break;
		
		case 9:
		printf("month is september");
		break;
		
		case 10:
		printf("month is october");
		break;
		
		case 11:
		printf("month is november");
		break;
		
		case 12:
		printf("month is december");
		break;
		
		default:
		printf("Error!");
		break;
	}
}

