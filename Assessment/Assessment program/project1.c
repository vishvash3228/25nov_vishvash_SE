#include <stdio.h>
main()
{
    int choice, qty, total=0;
    char cont;

    do {
        printf("----- Menu -----\n");
        printf("1. Pizza   - 180 Rs/pcs\n");
        printf("2. Burger  - 100 Rs/pcs\n");
        printf("3. Dosa    - 120 Rs/pcs\n");
        printf("4. Idli    - 50 Rs/pcs\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice)
	   {
            case 1: total += 180 * qty; 
		printf("You selected Pizza.\n"); 
		break;
		
            case 2: total += 100 * qty; 
		printf("You selected Burger.\n"); 
		break;
		
            case 3: total += 120 * qty; 
		printf("You selected Dosa.\n"); 
		break;
		
            case 4: total += 50 * qty; 
		printf("You selected Idli.\n"); 
		break;
		
            default: 
		printf("Invalid choice!\n"); 
        }

        printf("Total Amount= %d\n", total);
        printf("Do you want to more orders? (y/n): ");
        scanf(" %c", &cont);

    } while (cont == 'y' || cont == 'Y');

    printf("Final Bill Amount = %d\n", total);
}

