#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <math.h>
/**
 * struct complex - complex type def
 * @re: real number.
 * @im: imaginare number.
 */
typedef struct complex
{
	double re;
	double im;
} complex;


void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);

#endif
