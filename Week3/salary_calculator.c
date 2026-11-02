#include <stdio.h>

int main()
{
    double basicSalary;
    double housing;
    double transport;
    double tax;
    double grossSalary;
    double netSalary;

    printf("EMPLOYEE SALARY CALCULATOR\n");
    printf("==========================\n\n");

    printf("Enter basic salary: ");
    scanf("%lf", &basicSalary);

     printf("Enter housing allowance: ");
    scanf("%lf", &housing);

    printf("Enter transport allowance: ");
    scanf("%lf", &transport);

    printf("Enter tax: ");
    scanf("%lf", &tax);

    grossSalary = basicSalary + housing + transport;

    netSalary = grossSalary - tax;

    printf("\n--- SALARY SUMMARY ---\n");
    printf("Basic Salary      : $%.2f\n", basicSalary);
    printf("Housing Allowance : $%.2f\n", housing);
    printf("Transport Allow.  : $%.2f\n", transport);
    printf("------------------------------\n");
    printf("Gross Salary      : $%.2f\n", grossSalary);
    printf("Tax               : $%.2f\n", tax);
    printf("------------------------------\n");
    printf("Net Salary        : $%.2f\n", netSalary);
    printf("==============================\n");

     //EXTENSION: Income classification
    printf("\n--- INCOME CLASSIFICATION ---\n");
    if (netSalary >= 20000)
    {
        printf("Status: High Income\n");
    }
    else
    {
        printf("Status: Standard Income\n");
    }

    return 0;
}