#include <stdio.h>
#include <string.h>
int main()
{
     char str1[20] = "m";
     printf("%d", strnlen(str1, 30));
     printf("%d", strnlen(str1, 10));
     return 0;
}
