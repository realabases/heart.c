#include <stdio.h>

int size;
void heart();
void loop();
void rest();
char *s = "*";

int main(void)
{
    printf("size (1-9): ");
    if (scanf("%d", &size) != 1 || (size < 1 || size > 9))
        return 1;
    

    heart();
    return 0;
}

void heart()
{

    printf("  ");
    loop(size - 2, 1);
    loop(size + 2, 0);
    loop(size - 2, 1);
    printf("  \n");
    printf(" ");
    loop(size, 1);
    loop(size, 0);
    loop(size, 1);
    printf(" \n");

    for (int i = 0; i < size; i++)
    {
        loop(((2 * size) + 3 + (size - 1)), 1);
        printf("\n");
    }

    if (size % 2 == 0)
        for (int i = 0; i < (size * 1.5); i++)
            rest(i);
    else
        for (int i = 0; i < (((3 * size) + 1) / 2); i++)
            rest(i);
}

void loop(con, mode)
{
    for (int i = 0; i < con; i++)
        mode ? printf("%s", s) : printf(" ");
}

void rest(i)
{
    loop((size - (size - 1 - i)), 0);
    loop((((2 * size) + 3 + (size - 1)) - 2) - 2 * i, 1);
    printf("\n");
}
