#include "main.h"

/**
 * pel_ex - helper function
 * @myNum: this is a va_argument
 * Return: increment
 *
 */
int pel_ex(unsigned long int myNum)
{
        long int i, increment = 0;
        long int *arr;
        unsigned long int vem = myNum;

        while (myNum / 16 != 0)
        {
                myNum = myNum / 16;
                increment++;
        }
        increment++;

        arr = malloc(sizeof(long int) * increment);
        for (i = 0; i < increment; i++)
        {
                arr[i] = vem % 16;
                vem = vem / 16;
        }
        for (i = increment - 1; i >= 0; i--)
        {
                if (arr[i] > 8)
                        arr[i] = arr[i] + 39;
                _putchar(arr[i] + '0');
        }
        free(arr);
        return (increment);
}
