#include <stdio.h>
#include <stdlib.h>

int main() {
    char customer_name[50];
    int units_consumed;
    float price_per_unit, total_bill;

    // Taking inputs
    printf("Enter Customer Name: ");
    fgets(customer_name, sizeof(customer_name), stdin);
    printf("Enter Units Consumed: ");
    scanf("%d", &units_consumed);
    printf("Enter Price per Unit: ");
    scanf("%f", &price_per_unit);

    total_bill = units_consumed * price_per_unit;
    // Display formatted bill slip
    printf("\n-------------------------------\n");
    printf("        ELECTRICITY BILL       \n");
    printf("-------------------------------\n");
    printf("Customer: %s", customer_name);
    printf("Units Consumed: %d\n", units_consumed);
    printf("Price per Unit: %.2f\n", price_per_unit);
    printf("-------------------------------\n");
    printf("Total Bill: %.2f PKR\n", total_bill);

    return 0;
}
