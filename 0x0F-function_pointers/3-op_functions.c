#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - return the sum of two numbers
* @a: the first number
* @b: the second number
*
* Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - returns the difference of the two numbers
* @a: the first number
* @b: the second number
*
* Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - return the product of the two numbers
* @a: the fist number
* @b: the second number
*
* Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - return the division of the two numbers
* @a: the first number
* @b: the second number
*
* Return: the quotient of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - retrun the remainder of the division of two numbers
* @a: the fist number
* @b: the second number
*
* Return: the reminder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
