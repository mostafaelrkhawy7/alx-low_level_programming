#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 * Return: the resulting square root
 */
int square_root(int n, int x); 
int _sqrt_recursion(int n)
{
    return (square_root(n, 1))
}
/**
 * square_root - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @x: the iterator
 *
 * Return: the resulting square root
 */
int square_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (square_root(n, x + 1));
}
