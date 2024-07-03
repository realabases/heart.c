#include <stdio.h>
#include <math.h>

int size;

void draw();

char* s = "*";

int main(void)
{
    printf("size (1-9): ");
    if (scanf("%d", &size) != 1 || (size<1 || size>9))
    {
        return 1;
    }

    draw();

    return 0;
}

void draw()
{

    printf("  ");

    for(int i = 0; i<size-2; i++)
    {

        printf("%s",s);

    }

    for(int i = 0; i<size+2; i++)
    {

        printf(" ");

    }

    for(int i = 0; i<size-2; i++)
    {

        printf("%s",s);

    }

    printf("  \n");

    printf(" ");

    for(int i = 0; i<size; i++)
    {

        printf("%s",s);

    }

    for(int i = 0; i<size; i++)
    {

        printf(" ");

    }

    for(int i = 0; i<size; i++)
    {

        printf("%s",s);

    }

    printf(" \n");

    for(int i = 0; i<size; i++)
    {

        for(int j = 0; j<((2*size) + 3 + (size-1)); j++)
        {

            printf("%s",s);

        }

        printf("\n");

    }

    if(size % 2 == 0)
    {

        for(int i = 0; i<(size*1.5); i++)
        {

            for(int j = 0; j<(size-(size-1-i)); j++)
            {

                printf(" ");

            }

            for(int j = 0; j<(((2*size) + 3 + (size-1)) - 2) - 2*i; j++)
            {

                printf("%s",s);

            }

           printf("\n");

        }


    }else{

        for(int i = 0; i<(((3*size) + 1) / 2); i++)
        {

            for(int j = 0; j<(size-(size-1-i)); j++)
            {

                printf(" ");

            }

            for(int j = 0; j<(((2*size) + 3 + (size-1)) - 2) - 2*i; j++)
            {

                printf("%s",s);

            }

           printf("\n");

        }
    }

}
