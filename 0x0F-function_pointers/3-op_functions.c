#include "3-calc.h"

/**
 * op_add - add 2 int
 * @a: int
 * @b: int
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs 2 int
 * @a: The first int
 * @b: The second int
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -the mul of 2 int
 * @a: The first int
 * @b: The second int
 *
 * Return: The mul of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -the division of 2 int
 * @a: The int
 * @b: The int
 *
 * Return: The quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the remainder of the division of 2 int
 * @a: The first int
 * @b: The second int
 *
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
