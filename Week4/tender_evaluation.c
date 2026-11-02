#include <stdio.h>

int main()
{

    char supplierName[50];
    double price;
    double budget;
    int registered;
    int documentsComplete;

    printf("TENDER EVALUATION SYSTEM\n");
    printf("========================\n\n");

    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    printf("Enter tender price: ");
    scanf("%lf", &price);

    printf("Enter available budget: ");
    scanf("%lf", &budget);

    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    printf("\n--- EVALUATION RESULT ---\n");
    printf("Supplier: %s\n", supplierName);
    printf("Price   : $%.2f\n", price);
    printf("Budget  : $%.2f\n", budget);

    // Decision making
    if (registered == 0 || documentsComplete == 0)
    {
        printf("Status  : DISQUALIFIED\n");
        printf("Reason  : Missing registration or documents\n");
    }
    else if (price > budget)
    {
        printf("Status  : DISQUALIFIED\n");
        printf("Reason  : Price exceeds budget\n");
    }
    else
    {
        printf("Status  : QUALIFIED\n");
    }

    printf("========================\n");

    return 0;
}