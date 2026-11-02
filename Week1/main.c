#include <stdio.h>
int main(){
    char municipality[50];
    char mayor[50];
    int population;

    printf("Municipal Financial Management System\n\n");
    printf("Welcome to Windhoek Municipality\n");

    printf("\nEnter Municipality Name: \n"); 
    scanf("%49s", municipality);

    printf("Enter Mayor: \n"); 
    scanf("%49s", mayor); 
    printf("Enter population:  ");
    scanf("%d", &population);

    printf("\n---------------------------\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);

    return 0;
}