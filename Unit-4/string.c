#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int len1, len2 = 0;
printf("Enter a string: ");
scanf("%s", str);
/* using string function */
len1 = strlen(str);
/* without using string function */
while (str[len2] != '\0')
len2++;
printf("Length using strlen() = %d\n", len1);
printf("Length without strlen() = %d\n", len2);
return 0;
}
