#include <stdio.h>
#include <string.h>
int main(){

char supplier[50];
char email[50];
char phoneNumber[50];
char town[50];

printf("Enter supplier name:");
fgets(supplier, sizeof(supplier), stdin);
supplier[strcspn(supplier, "\n")] = '\0';

printf("Enter email address:");
fgets(email, sizeof(email), stdin);
email[strcspn(email, "\n")] = '\0';

printf("Enter phone number:");
fgets(phoneNumber, sizeof(phoneNumber), stdin);


printf("Enter town:");
fgets(town, sizeof(town), stdin);
town[strcspn(town, "\n")] = '\0';


printf("---SUPPLIER DETAILS---\n");
printf("Name: %s\n", supplier);
printf("Email: %s\n", email);
printf("Phone: %s\n", phoneNumber);
printf("Town: %s\n", town);

printf("Supplier length = %zu\n", strlen(supplier));
printf("Email length = %zu\n", strlen(email));
printf("Town lentgh = %zu\n", strlen(town));

return 0;
}