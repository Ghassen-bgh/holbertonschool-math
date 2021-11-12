#include "holberton.h"

/**
 * argument - function return the argument of a given complex number.
 * @c: The complex number.
 * Return: argument of a complex number
 */
double argument(complex c)
{
	double arg;
	double v;

	v = (c.im / c.re);	
	arg = atan(v);
	return (arg);
}
