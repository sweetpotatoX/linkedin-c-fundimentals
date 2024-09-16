#include <stdio.h>


// generate multiple lines of output
int main()
{
    int rows;
    int irow = 0;
    char letter;


    // prompt user for number of rows
    puts("How many rows (18max)?");
    scanf("%d", &rows);


// verify number of rows
    if (rows > 18)
    {
        return puts("try again");

    }

    //process the number of rows
    else{

        printf("I will  process %d rows\n", rows);

for (float j = 0; j < (rows/2); j++) {
    for (int i = 0, letter = 'A'; i < rows; letter++, i++) {

        printf("%d",irow );

        printf("%c", letter);

        printf(" ");



    }
    printf("\n");
    for (int k = 0; k < rows; k++) {
        printf("===");
    }
    irow ++;
    printf("\n");
}
    }

    return 0;
}