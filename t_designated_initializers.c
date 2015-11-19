#include <stdio.h>

int widths_global[] = { [0 ... 9] = 2, [10 ... 99] = 3, [100] = 4 };

int main(int argc, char* argv[])
{
    int widths[] = { [0 ... 9] = 1, [10 ... 99] = 2, [100] = 3 };
    int size = sizeof(widths) / sizeof(int);
    int i;

    for( i = 0; i < size; i++)
        printf("widths[%d] = %d\n", i, widths[i]);                                      
    return 0;
}

