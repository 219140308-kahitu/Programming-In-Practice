#include <stdio.h>
int main(){
    double revenue,expenses,balance, payroll, assets, procurement;
    int departments;

    printf("   MUNICIPAL BUDGET CALCULATOR\n");

    printf("Enter total revenue:");
    scanf("%lf", &revenue);

    printf("Enter total expenses:");
    scanf("%lf", &expenses);

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter total payroll: ");
    scanf("%lf", &payroll);

    printf("Enter total procurement: ");
    scanf("%lf", &procurement);

    printf("Enter total assets: ");
    scanf("%lf", &assets);

    balance = revenue - expenses;

    printf("\n   MUNICIPAL FINANCIAL SUMMARY\n");
    printf("====================================\n");
    printf("Departments   : %d\n", departments);
    printf("Revenue       : $%.2f\n", revenue);
    printf("Expenses      : $%.2f\n", expenses);
    printf("Payroll       : $%.2f\n", payroll);
    printf("Procurement   : $%.2f\n", procurement);
    printf("Assets        : $%.2f\n", assets);
    printf("------------------------------------\n");
    printf("Balance       : $%.2f\n", balance);
    printf("====================================\n");


return 0;

}