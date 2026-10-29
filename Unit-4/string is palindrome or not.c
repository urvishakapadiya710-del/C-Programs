#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int i, j, flag = 1;
printf("Enter a string: ");
scanf("%s", str);
j = strlen(str) - 1;
for (i = 0; i < j; i++, j--)
{
if (str[i] != str[j])
{
flag = 0;
break;
}
}
if (flag)
printf("%s is a Palindrome\n", str);
else
printf("%s is not a Palindrome\n", str);
return 0;
}
