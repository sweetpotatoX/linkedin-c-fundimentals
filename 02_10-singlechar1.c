#include <stdio.h>

int main()
{
    char a;

    printf ("type a single character: ");
    scanf("%c", &a);

    printf ("you typed\'%c\', which is code %d\n", a, a);

    return  0;
}