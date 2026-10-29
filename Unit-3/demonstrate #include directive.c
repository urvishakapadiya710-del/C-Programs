#include <stdio.h>
#include <conio.h>
int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("Sum = %d\n", add(a, b));
printf("Product = %d\n", multiply(a, b));
return 0;
}
