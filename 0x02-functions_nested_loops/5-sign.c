#include "main.h"
/**
* print_sign - prints sign and returns int
* Return: 0, 1, or -1
* @n: is an int
* author - tamara
*/
int print_sign(int n)
{
n < 0 ?
_putchar('-') : n > 0 ?
_putchar('+') :
_putchar('0');
return (n < 0 ? -1 : n > 0 ? 1 : 0);
}
