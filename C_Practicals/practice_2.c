#include <stdio.h>

int main()

{
    int qty;
    char cr;
    printf("\nThis is the menu : \n\n");
    printf("B = Burger\nF= French Fries\nP= Pizza\nS= Sandwiches\nI = Ice-cream\n");

    printf("\nEnter your choice as the code of the food item : ");
    scanf("%c", &cr);

    printf("\nEnter the quantity of your food item : ");
    scanf("%d", &qty);

    switch (cr)
    {
    case 'B':
        printf("You have ordered a Burger.");
        printf("Your total Charges are = %d", 220 * qty);
        break;
    case 'F':
        printf("You have ordered French Fries.");
        printf("Your total Charges are = %d", 50 * qty);
        break;
    case 'P':
        printf("You have ordered a Pizza.");
        printf("Your total Charges are = %d", 300 * qty);

        break;
    case 'S':
        printf("You have ordered a Sandwich.");
        printf("Your total Charges are = %d", 150 * qty);

        break;
    case 'I':
        printf("You have ordered an Ice-Cream. ");
        printf("Your total Charges are = %d", 90 * qty);

        break;
    default:
        printf("Enter the choice as B, F, P, S or I only !!!");
    }

    return 0;
}