#include "main.h"
#include<stdio.h>
/**
 * is_prime_number - check if an integer is a prime number or not
 * @n: number
 * Return: 1 if n is a prime number, 0 if not
 */
int prime_check(int n, int r);
int is_prime_number(int n)
{
    return (prime_check(n , 2));
}

/**
 * prime_check - check if a number is prime
 * @n: number
 * @r: othernum
 * Return: 1 if n is prime, 0 if not
 */
int prime_check(int n, int r)
{
    if (r >= n && n >= 2)
        return (1);
    if (n % r == 0 || n <= 1)
        return (0);
    else
        return (prime_check(n, r +1));
}
