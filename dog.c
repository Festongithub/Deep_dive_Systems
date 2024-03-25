#include <stdio.h>

/**
 * main - runs the code
 * @price : in dollars
 * @quantity: in kgs
 **/
int main()
{
  int price, cost;
  int quantity;
  
  printf("Enter the price:");
  scanf("%d", &price);
  printf("Enter the quantity: ");
  scanf("%d", &quantity);
  int revenue = price * quantity;
  printf("Total revenue is: %d\n", revenue);
  cost = revenue * price;
  printf("The Total cost is %d\n", cost);
  return (0);
}
