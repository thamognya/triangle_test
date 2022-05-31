#include <stdio.h>

int tree(int n);

int main()
{
    int n;
    //int n = get_int("N: ");
    n = 20;
    tree(n);

    return 0;
}

int tree(int n)
{
    int i, j, k, l, m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%s", "#");
        }
        for (k = 1; k <= (n - i); k++)
        {
            printf("%s", " ");
        }
        printf("%s", "  ");
        for (l = 1; l <= (n - i); l++)
        {
            printf("%s", " ");
        }
        for (m = 1; m <= i; m++)
        {
            printf("%s", "#");
        }
        printf("\n");
    }

    return 0;
}

/*
 * code explanation:
 * So first there is a for loop which iterates throught he y-axiz
 * then another for loop to iterate through every line, first the # then space then space then space and then #
 * it does it after which there is a \n (new line)
 * it repeats increasing for every i which increases the y -axos
 * */
