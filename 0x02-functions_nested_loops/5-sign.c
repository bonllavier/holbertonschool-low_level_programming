#include "holberton.h"
/**
 *print_sign - prints the sign of a number.
 *@n: value to be tested for determinatin of sign validation
 *Return: 1 if is lowercase, 0 if not.
 */
int print_sign(int n)
{
 if (n > 0)
   {
     _putchar ('+');
     return (1);  
   }
 else if(n < 0)
   {
     _putchar ('-');
     return (-1);
   }
 else 
   {
     _putchar ('0');
     return (0);
   }
}
