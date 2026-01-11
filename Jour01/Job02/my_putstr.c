#include "my.h"

void my_putstr(char *str)
{
    int i = 0;
    my_putchar('\n');
   
    while (str[i] != '\0')
    {
        my_putchar(str[i]); i++;
        
    }
    my_putchar('\n');
    
}
