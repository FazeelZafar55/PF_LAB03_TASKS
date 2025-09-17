#include <stdio.h>

int main(){
    float distance,fuel_used,fuel_price_per_liter;
    float efficiency,total_cost;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);
    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel_used);
    printf("Enter fuel price per litre: ");
    scanf("%f", &fuel_price_per_liter);

    // Calculations
    efficiency= distance/fuel_used;
    total_cost= fuel_used * fuel_price_per_liter;

    printf("\n-------------------------\n");
    printf("       FULL REPORT     \n");
    printf("\n------------------\n");
    printf("Distance: %.1f km\n", distance);
    printf("Fuel used: %.1f L\n", fuel_used);
    printf("Efficiency: %.2f km/L\n", efficiency);
    printf("Total Cost: %.2f PKR\n", total_cost);

    return 0;

}