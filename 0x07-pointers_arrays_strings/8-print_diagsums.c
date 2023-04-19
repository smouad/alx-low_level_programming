#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int i = 0, j = size - 1, first = 0, second = 0;

    while (j)
    {
        first += a[i][i];
        i++;
        j--;
    }
    j = size - 1;
    i = 0;
    while (j)
    {
        second += a[i][j];
        j--;
        i++;
    }
    printf("%d, %d", first, second);
}
