// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.2 Primary Data Types
/* Prints the calculations for the following 2 formulas:
Total Revenue = Price * Quantity
Commission = Rate * (Sales Price - Cost)
*/

#include <stdio.h>

float getTotalRevenue(float, int);
float getCommission(float, float, float);

int main(void)
{
    int iQuantity;   
    float fPrice, fRate, fSalesPrice, fCost; 

    // Section pertaining to printing the Total Revenue
    printf("\n*** Getting the Total Revenue ***\n\n");
    printf("Enter the product price: ");
    scanf(" %f", &fPrice);
    printf("Enter its quantity: ");
    scanf(" %d", &iQuantity);
    printf("Total Revenue: %.2f\n", getTotalRevenue(fPrice, iQuantity));

    // Section pertaining to printing the Commission
    printf("\n*** Getting the Commission ***\n\n");
    printf("Enter the commission rate: ");
    scanf(" %f", &fRate);
    printf("Enter the sales price: ");
    scanf(" %f", &fSalesPrice);
    printf("Enter the cost: ");
    scanf(" %f", &fCost);
    printf("Commission: %.2f\n", getCommission(fRate, fSalesPrice, fCost));

    return 0;
}


float getTotalRevenue(float price, int quantity)
{
    // Total Revenue = Price * Quantity 
    float fTotalRevenue;
    fTotalRevenue = price * quantity;
    return fTotalRevenue;
}

float getCommission(float rate, float price, float cost)
{
    // Commission = Rate * (Sales Price - Cost) 
    float fCommission;
    fCommission = rate * (price - cost);
    return fCommission;
}
