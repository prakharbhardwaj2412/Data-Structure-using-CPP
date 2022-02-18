#include <stdio.h>

int
main ()
{
    char s[] = "welcome";
    int i;
    for (i=0; s[i]!='\0'; i++)
    {}
    printf("Length of string %s is %d.\n", s, i);
    printf("%c", s[0]);
    return 0;
}
