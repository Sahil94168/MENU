#include <stdio.h>

int main() {
    int choice, quantity;
    int price, total = 0;
    char cont;
    
    printf("*******WELCOME TO RANDOM RESTAURANT*******");

    do { 
        printf("\nMenu:\n");
        printf("1. Burger \n");
        printf("2. Pizza \n");
        printf("3. Cold drink\n");
        printf("4. Ice-cream\n");

        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            printf("1. Veggie Burger - 40\n");
            printf("2. Aloo tikki burger - 50\n");
            printf("3. Cheese Burger - 60\n");
            printf("\nEnter your choice (1-3): ");
            scanf("%d", &choice);
                
            switch(choice){	
            case 1:
                price = 40;
                printf("\nYou select Veggie Burger. Price: %d", price);
                break;
                
            case 2:
                price = 50;
                printf("\nYou select Aloo tikki Burger. Price: %d", price);
                break;
                
            case 3:
                price = 60;
                printf("\nYou select Cheese Burger. Price: %d", price);
                break;
                
	        default:
                printf("\nInvalid choice. Please try again.");
                price = 0;
                break;	
				 }
				 
                break;
        case 2:
                printf("\n1. Sweet Corn-99 ");
                printf("\n2. Onion Capsicum Pizza-120 ");
                printf("\n3. Spiced Paneer-150 ");
                printf("\nEnter your choice (1-3): ");
                scanf("%d", &choice);
                
                switch(choice){	
            case 1:
                price = 99;
                printf("\nYou select Sweet Corn Pizza. Price: %d", price);
                break;
                
            case 2:
                price = 120;
                printf("\nYou select Onion Capsicum. Price: %d", price);
                break;
                
            case 3:
                price = 150;
                printf("\nYou select Spiced paneer Price: %d", price);
                break;
                
	        default:
                printf("\nInvalid choice. Please try again.");
                price = 0;
                break;}
                break;
        case 3:
                price = 50;
                printf("\nYou Cold drink Price: %d", price);
                break;
        case 4:
                price = 60;
                printf("\nYou Ice-cream Price: %d", price);
                break;
        default:
                printf("\nInvalid choice. Please try again.");
                price = 0;
                break;
        }

        if(price != 0) {
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            total += price * quantity;
            printf("Added to the total: %d", price * quantity);
        }

        printf("\n\nDo you want to continue ordering? (Y/N) ");
        scanf(" %c", &cont);

    } while(cont == 'Y' || cont == 'y');

    printf("\n\nYour total bill is: %d", total);
    printf("\nThank you :)");

    return 0;
}

