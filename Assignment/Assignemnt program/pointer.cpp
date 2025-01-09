#include <stdio.h>
main() 
{
    int num,*pt;

    printf("Enter an integer value for num: ");
    scanf("%d",&num);

    pt=&num;

    printf("Original value of num: %d\n", num);

    printf("Enter a new value:");
    scanf("%d",pt);

    printf("Modified value of num: %d\n", num);

}
