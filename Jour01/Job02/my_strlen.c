#include "my.h"

int my_strlen(char *str)
{
    int length;

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}