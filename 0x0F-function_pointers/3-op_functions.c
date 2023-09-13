#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int c, int d);
int op_sub(int c, int d);
int op_mul(int c, int d);
int op_div(int c, int d);
int op_mod(int c, int d);

/**
 *op_add - works on addition of two numbers
 *@c: first number
 *@d: second number
 *Return:give ou the sum of c and d
 */

int op_add(int c, int d)
{
	return (c + d);
}

/**
 * op_sub - work out the difference of two numbers
 * @c: first number
 * @d: second number
 * Return: give out the difference of c and d
 */

int op_sub(int c, int d)
{
	return (c - d);
}

/**
 * op_mul - return the multiplication of two numbers
 * @c: first number
 * @d: second number
 * Return: product od c and d
 */
int op_mul(int c, int d)
{
	return (c * d);
}

/**
 * op_div - work out the remainder of two numbers
 * @c: first number
 * @d: second number
 * Return: remainder of two numbers
 */
int op_div(int c, int d)
{
	return (c / d);
}

/**
 * op_mod - work on remainder of the division two numbers
 * @c: first number
 * @d: second number
 * Return: division of c and d
 */
int op_mod(int c, int d)
{
	return (c % d);
}

