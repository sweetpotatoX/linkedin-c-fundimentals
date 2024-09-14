#include <stdio.h>
// generate multiple lines of output
int main()
{
    int rows;
    char letter;
    puts("How many rows (18max)?");
    scanf("%d", &rows);

for (float j = 0; j < (rows/2); j++) {
    for (int i = 0, letter = 'A'; i < rows; letter++, i++) {

        printf("%d", j);
        printf("%c", letter);

        printf(" ");


    }
    printf("\n");
    for (int k = 0; k < rows; k++) {
        printf("===");
    }
    printf("\n");
}

    return 0;
}