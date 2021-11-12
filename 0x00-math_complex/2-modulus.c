#include "holberton.h"
#include <math.h>
/**
 * modulus - function return the modulus of a given complex number.
 * @c: The complex number.
 * Return: modulus of a complex number
 */
double modulus(complex c)
{
	int a, b;
	double mod;


	a = pow(c.im, 2);
	b = pow(c.re, 2);
	mod = sqrt(a + b);

	return (mod);

}
