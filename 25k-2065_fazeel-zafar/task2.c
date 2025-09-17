#include <stdlib.h>
#include <stdio.h>

int main(){
	float egg_price,bread_price,butter_price;
	float grandtotal,tax,subtotal;
	printf("enter the price of eggs: ");
	scanf("%f", &egg_price);
	printf("Enter price of Bread: ");
    scanf("%f", &bread_price);
	printf("Enter price of Butter: ");
    scanf("%f", &butter_price);
    
    subtotal=egg_price+bread_price+butter_price;
    tax=subtotal*0.17;
    grandtotal=subtotal + tax;
    
    //Display
     printf("\n-------------------------------\n");
    printf("         SHOP RECEIPT          \n");
    printf("-------------------------------\n");
    printf("Item 1: %.2f\n", egg_price);
    printf("Item 2: %.2f\n", bread_price);
    printf("Item 3: %.2f\n", butter_price);
    printf("-------------------------------\n");
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax (10%%): %.2f\n", tax);
    printf("-------------------------------\n");
    printf("Grand Total: %.2f\n", grandtotal);

    return 0;
}