#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * convertToBase - cnvert to base
 *
 * Return: Base
 */
long long int power(int base, int x)
{
    
    int result=1;
    
    for (x; x>0; x--)
    {
    result = result * base;
    }
    return (result);
}
